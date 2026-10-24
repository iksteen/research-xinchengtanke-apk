//@category IL2CPP
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.Function;
import ghidra.program.model.symbol.SourceType;
import com.google.gson.*;
import java.nio.file.*;

public class ApplyIl2CppSymbols extends GhidraScript {
    private String safe(String s) {
        s = s.replaceAll("[^A-Za-z0-9_]", "_");
        return s.length() > 180 ? s.substring(0, 180) : s;
    }
    public void run() throws Exception {
        String[] args = getScriptArgs();
        println("Program image base: " + currentProgram.getImageBase());
        setAnalysisOption(currentProgram, "GCC Exception Handlers", "false");
        setAnalysisOption(currentProgram, "Non-Returning Functions - Discovered", "false");
        JsonObject root = JsonParser.parseString(Files.readString(Path.of(args[0]))).getAsJsonObject();
        int count = 0;
        for (String section : new String[]{"ScriptMethod", "ScriptMetadata", "ScriptMetadataMethod", "ScriptString"}) {
            for (JsonElement el : root.getAsJsonArray(section)) {
                monitor.checkCancelled();
                JsonObject item = el.getAsJsonObject();
                long value = item.get("Address").getAsLong();
                if (value == 0) continue;
                Address address = toAddr(value);
                if (!currentProgram.getMemory().contains(address)) continue;
                String original = section.equals("ScriptString") ? "StringLiteral_" + item.get("Value").getAsString() : item.get("Name").getAsString();
                String label = safe(original) + "_" + Long.toHexString(value);
                try {
                    createLabel(address, label, true);
                    if (section.equals("ScriptMethod")) {
                        Function f = getFunctionAt(address);
                        if (f != null) f.setName(label, SourceType.USER_DEFINED);
                        setPlateComment(address, original + "\n" + item.get("Signature").getAsString());
                    } else {
                        setEOLComment(address, original);
                    }
                    count++;
                } catch (Exception e) {
                    println("Label warning at " + address + ": " + e.getMessage());
                }
            }
        }
        println("Applied " + count + " IL2CPP symbols and comments");
        if (args.length > 1) {
            JsonArray targets = JsonParser.parseString(Files.readString(Path.of(args[1]))).getAsJsonArray();
            int functions = 0;
            for (JsonElement el : targets) {
                monitor.checkCancelled();
                JsonObject item = el.getAsJsonObject();
                Address address = toAddr(item.get("Address").getAsLong());
                if (getFunctionAt(address) == null) {
                    disassemble(address);
                    createFunction(address, safe(item.get("Name").getAsString()) + "_" + address);
                }
                if (getFunctionAt(address) != null) functions++;
            }
            println("Prepared " + functions + " application function entry points");
        }
    }
}
