namespace System.Reflection.Emit;

[ClassInterface(/*Cpp2IL Warning: missing at least one required parameter*/)]
[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
public sealed class LocalBuilder : LocalVariableInfo
{
	private string name; //Field offset: 0x20
	internal ILGenerator ilgen; //Field offset: 0x28
	private int startOffset; //Field offset: 0x30
	private int endOffset; //Field offset: 0x34

}

