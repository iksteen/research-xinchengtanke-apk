//@category IL2CPP
import ghidra.app.script.GhidraScript;
import ghidra.app.cmd.disassemble.DisassembleCommand;
import ghidra.program.model.address.*;
import ghidra.program.model.listing.*;
import ghidra.program.model.symbol.*;
import com.google.gson.*;
import java.nio.file.*;
import java.util.*;

public class PrepareIl2CppFunctions extends GhidraScript {
    public void run() throws Exception {
        String[] args = getScriptArgs();
        JsonObject root = JsonParser.parseString(Files.readString(Path.of(args[0]))).getAsJsonObject();
        TreeSet<Long> starts = new TreeSet<>();
        for (JsonElement el : root.getAsJsonArray("Addresses")) starts.add(el.getAsLong());
        // Direct BL destinations also identify stripped runtime helpers that
        // are absent from the managed-method table. Marking these as functions
        // prevents the decompiler from treating helper calls as PIC branches.
        byte[] elfBytes = Files.readAllBytes(Path.of(currentProgram.getExecutablePath()));
        for (int offset = 0x2ca6f0; offset < 0xdf2ed0; offset += 4) {
            int word = (elfBytes[offset] & 255) | ((elfBytes[offset+1] & 255) << 8) |
                       ((elfBytes[offset+2] & 255) << 16) | ((elfBytes[offset+3] & 255) << 24);
            if ((word & 0xfc000000) == 0x94000000) {
                long destination = offset + (long)(word << 6 >> 6) * 4;
                if (destination >= 0x2ca6f0 && destination < 0xdf2ed0) starts.add(destination);
            }
        }
        FunctionManager fm = currentProgram.getFunctionManager();
        FunctionIterator existing = fm.getFunctions(true);
        List<Function> oldFunctions = new ArrayList<>();
        while (existing.hasNext()) oldFunctions.add(existing.next());
        for (Function f : oldFunctions) {
            Address entry = f.getEntryPoint();
            if (starts.contains(entry.getOffset()) || entry.getOffset() < 0x494a24L || f.getSymbol().getSource() == SourceType.IMPORTED) {
                starts.add(entry.getOffset());
                f.setBody(new AddressSet(entry, entry));
            } else {
                fm.removeFunction(entry);
            }
        }
        Address last = toAddr(starts.last());
        starts.add(currentProgram.getMemory().getBlock(last).getEnd().getOffset() + 1);
        Map<Long,String> names = new HashMap<>();
        for (JsonElement el : root.getAsJsonArray("ScriptMethod")) {
            JsonObject item = el.getAsJsonObject();
            names.putIfAbsent(item.get("Address").getAsLong(), item.get("Name").getAsString());
        }
        int created = 0;
        for (long start : starts) {
            monitor.checkCancelled();
            Long next = starts.higher(start);
            if (next == null) continue;
            Address address = toAddr(start);
            if (!currentProgram.getMemory().contains(address)) continue;
            AddressSet body = new AddressSet(address, toAddr(next-1));
            Function f = fm.getFunctionAt(address);
            if (f != null) {
                f.setBody(body);
            } else {
                String name = names.getOrDefault(start, "sub").replaceAll("[^A-Za-z0-9_]", "_");
                if (name.length() > 160) name = name.substring(0,160);
                fm.createFunction("native_" + name + "_" + Long.toHexString(start), address, body, SourceType.USER_DEFINED);
                created++;
            }
        }
        println("Created " + created + " bounded native functions");
        for (long noReturn : new long[]{0x432810L, 0x4327dcL}) {
            Function f = fm.getFunctionAt(toAddr(noReturn));
            if (f != null) f.setNoReturn(true);
        }
        JsonArray targets = JsonParser.parseString(Files.readString(Path.of(args[1]))).getAsJsonArray();
        int disassembled = 0;
        for (JsonElement el : targets) {
            monitor.checkCancelled();
            Address address = toAddr(el.getAsJsonObject().get("Address").getAsLong());
            Function f = fm.getFunctionAt(address);
            if (f != null) {
                DisassembleCommand cmd = new DisassembleCommand(address, f.getBody(), true);
                cmd.applyTo(currentProgram, monitor);
                disassembled++;
            }
        }
        println("Disassembled " + disassembled + " application methods within metadata boundaries");
    }
}
