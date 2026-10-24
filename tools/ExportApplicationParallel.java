//@category IL2CPP
import ghidra.app.script.GhidraScript;
import ghidra.app.decompiler.*;
import ghidra.program.model.listing.Function;
import com.google.gson.*;
import java.nio.file.*;
import java.nio.charset.StandardCharsets;
import java.io.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.concurrent.atomic.AtomicInteger;

public class ExportApplicationParallel extends GhidraScript {
    private static class Output {
        JsonObject item;
        String code;
        Output(JsonObject item, String code) { this.item = item; this.code = code; }
    }
    public void run() throws Exception {
        String[] args = getScriptArgs();
        final int timeout = args.length > 2 ? Integer.parseInt(args[2]) : 15;
        JsonArray targets = JsonParser.parseString(Files.readString(Path.of(args[0]))).getAsJsonArray();
        long first = targets.get(0).getAsJsonObject().get("Address").getAsLong();
        byte[] original = new byte[16], mapped = new byte[16];
        try (RandomAccessFile elf = new RandomAccessFile(currentProgram.getExecutablePath(), "r")) {
            elf.seek(first); elf.readFully(original);
        }
        currentProgram.getMemory().getBytes(toAddr(first), mapped);
        if (!Arrays.equals(original, mapped)) throw new Exception("ELF address mapping check failed");
        println("ELF address mapping check passed; image base " + currentProgram.getImageBase());
        Path out = Path.of(args[1]);
        Files.createDirectories(out);
        List<DecompInterface> interfaces = Collections.synchronizedList(new ArrayList<>());
        ThreadLocal<DecompInterface> engines = ThreadLocal.withInitial(() -> {
            DecompInterface engine = new DecompInterface();
            engine.setOptions(new DecompileOptions());
            if (!engine.openProgram(currentProgram)) throw new RuntimeException(engine.getLastMessage());
            interfaces.add(engine);
            return engine;
        });
        ExecutorService pool = Executors.newFixedThreadPool(8);
        AtomicInteger completed = new AtomicInteger(), successes = new AtomicInteger();
        List<Future<Output>> futures = new ArrayList<>();
        for (JsonElement element : targets) {
            JsonObject item = element.getAsJsonObject().deepCopy();
            futures.add(pool.submit(() -> {
                String code;
                try {
                    monitor.checkCancelled();
                    Function f = currentProgram.getFunctionManager().getFunctionAt(toAddr(item.get("Address").getAsLong()));
                    if (f == null) throw new Exception("No function at recorded method address");
                    DecompileResults res = engines.get().decompileFunction(f, timeout, monitor);
                    if (!res.decompileCompleted()) throw new Exception(res.getErrorMessage());
                    code = res.getDecompiledFunction().getC();
                    item.addProperty("status", "ok");
                    successes.incrementAndGet();
                } catch (Exception error) {
                    String message = String.valueOf(error.getMessage());
                    item.addProperty("status", "failed");
                    item.addProperty("error", message);
                    code = "/* Decompilation failed: " + message.replace("*/", "* /") + " */\n";
                }
                int done = completed.incrementAndGet();
                if (done % 250 == 0) println("Completed " + done + "/" + targets.size() + "; successful " + successes.get());
                return new Output(item, code);
            }));
        }
        pool.shutdown();
        Map<String, PrintWriter> writers = new LinkedHashMap<>();
        JsonArray index = new JsonArray();
        try {
            for (Future<Output> future : futures) {
                Output result = future.get();
                JsonObject item = result.item;
                String file = item.get("Class").getAsString().replaceAll("[^A-Za-z0-9_.-]", "_") + ".c";
                PrintWriter writer = writers.get(file);
                if (writer == null) {
                    writer = new PrintWriter(Files.newBufferedWriter(out.resolve(file), StandardCharsets.UTF_8));
                    writer.println("/* ARM64 IL2CPP native pseudocode from Ghidra.\n * Recovered implementation, not original C# source.\n * Function boundaries follow the IL2CPP method address table. */\n");
                    writers.put(file, writer);
                }
                writer.println("\n/* " + item.get("Name").getAsString().replace("*/", "* /") + " @ 0x" + Long.toHexString(item.get("Address").getAsLong()) + "\n * " + item.get("Signature").getAsString().replace("*/", "* /") + " */");
                writer.println(result.code);
                writer.flush();
                item.addProperty("file", file);
                index.add(item);
            }
        } finally {
            pool.shutdownNow();
            for (PrintWriter writer : writers.values()) writer.close();
            for (DecompInterface engine : interfaces) engine.dispose();
            Files.writeString(out.resolve("index.json"), new GsonBuilder().setPrettyPrinting().create().toJson(index));
        }
        println("Native export complete: " + successes.get() + "/" + targets.size() + " methods; " + writers.size() + " class files");
    }
}
