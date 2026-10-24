//@category IL2CPP
import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.*;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;
import ghidra.program.model.symbol.SourceType;
import com.google.gson.*;
import java.nio.file.*;
import java.nio.charset.StandardCharsets;
import java.io.*;
import java.util.*;

public class ExportApplication extends GhidraScript {
    public void run() throws Exception {
        String[] args = getScriptArgs();
        JsonArray targets = JsonParser.parseString(Files.readString(Path.of(args[0]))).getAsJsonArray();
        println("Program image base: " + currentProgram.getImageBase());
        // Executable IL2CPP sections in this ELF have identical file offsets
        // and virtual addresses. Check that labels target the original bytes.
        long firstOffset = targets.get(0).getAsJsonObject().get("Address").getAsLong();
        byte[] original = new byte[16];
        try (RandomAccessFile elf = new RandomAccessFile(currentProgram.getExecutablePath(), "r")) {
            elf.seek(firstOffset);
            elf.readFully(original);
        }
        byte[] mapped = new byte[16];
        currentProgram.getMemory().getBytes(toAddr(firstOffset), mapped);
        if (!Arrays.equals(original, mapped)) throw new Exception("ELF address mapping check failed");
        println("ELF address mapping check passed");
        Path out = Path.of(args[1]);
        Files.createDirectories(out);
        DecompInterface decompiler = new DecompInterface();
        decompiler.setOptions(new DecompileOptions());
        decompiler.openProgram(currentProgram);
        Map<String, PrintWriter> writers = new LinkedHashMap<>();
        int ok = 0, failed = 0;
        JsonArray results = new JsonArray();
        try {
            for (JsonElement el : targets) {
                monitor.checkCancelled();
                JsonObject item = el.getAsJsonObject();
                long offset = item.get("Address").getAsLong();
                Address address = toAddr(offset);
                String className = item.get("Class").getAsString();
                String file = className.replaceAll("[^A-Za-z0-9_.-]", "_") + ".c";
                PrintWriter writer = writers.get(file);
                if (writer == null) {
                    writer = new PrintWriter(Files.newBufferedWriter(out.resolve(file), StandardCharsets.UTF_8));
                    writer.println("/* Ghidra native pseudocode recovered from ARM64 IL2CPP.\n * This is decompiler output, not the original C# source.\n * See matching C# declarations for types and field offsets. */\n");
                    writers.put(file, writer);
                }
                writer.println("\n/* " + item.get("Name").getAsString().replace("*/", "* /") + " @ 0x" + Long.toHexString(offset) + "\n * " + item.get("Signature").getAsString().replace("*/", "* /") + " */");
                JsonObject result = item.deepCopy();
                result.addProperty("file", file);
                try {
                    Function f = getFunctionAt(address);
                    if (f == null) {
                        disassemble(address);
                        f = createFunction(address, null);
                    }
                    if (f == null) throw new Exception("Cannot create function");
                    DecompileResults res = decompiler.decompileFunction(f, 10, monitor);
                    if (!res.decompileCompleted()) throw new Exception(res.getErrorMessage());
                    writer.println(res.getDecompiledFunction().getC());
                    result.addProperty("status", "ok");
                    ok++;
                } catch (Exception e) {
                    String error = String.valueOf(e.getMessage());
                    writer.println("/* Decompilation failed: " + error.replace("*/", "* /") + " */");
                    result.addProperty("status", "failed");
                    result.addProperty("error", error);
                    failed++;
                }
                writer.flush();
                results.add(result);
                if ((ok + failed) % 100 == 0) println("Exported " + ok + " methods; " + failed + " failures");
            }
        } finally {
            decompiler.dispose();
            for (PrintWriter writer : writers.values()) writer.close();
            Files.writeString(out.resolve("index.json"), new GsonBuilder().setPrettyPrinting().create().toJson(results));
        }
        println("Native export complete: " + ok + " methods, " + failed + " failures, " + writers.size() + " class files");
    }
}
