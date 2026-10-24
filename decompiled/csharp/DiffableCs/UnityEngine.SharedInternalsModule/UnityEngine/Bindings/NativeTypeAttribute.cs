namespace UnityEngine.Bindings;

[AttributeUsage(/*Cpp2IL Warning: missing at least one required parameter*/)]
[VisibleToOtherModules]
internal class NativeTypeAttribute : Attribute
{
	[CompilerGenerated]
	[DebuggerBrowsable(/*Cpp2IL Warning: missing at least one required parameter*/)]
	private string <Header>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	[DebuggerBrowsable(/*Cpp2IL Warning: missing at least one required parameter*/)]
	private string <IntermediateScriptingStructName>k__BackingField; //Field offset: 0x18
	[CompilerGenerated]
	[DebuggerBrowsable(/*Cpp2IL Warning: missing at least one required parameter*/)]
	private CodegenOptions <CodegenOptions>k__BackingField; //Field offset: 0x20

	public override CodegenOptions CodegenOptions
	{
		[CompilerGenerated]
		 set { } //Length: 8
	}

	public override string Header
	{
		[CompilerGenerated]
		 set { } //Length: 8
	}

	public string IntermediateScriptingStructName
	{
		[CompilerGenerated]
		 set { } //Length: 8
	}

	public NativeTypeAttribute() { }

	public NativeTypeAttribute(CodegenOptions codegenOptions) { }

	public NativeTypeAttribute(string header) { }

	public NativeTypeAttribute(CodegenOptions codegenOptions, string intermediateStructName) { }

	[CompilerGenerated]
	public override void set_CodegenOptions(CodegenOptions value) { }

	[CompilerGenerated]
	public override void set_Header(string value) { }

	[CompilerGenerated]
	public void set_IntermediateScriptingStructName(string value) { }

}

