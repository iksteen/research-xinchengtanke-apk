namespace UnityEngine.Scripting;

[AttributeUsage(/*Cpp2IL Warning: missing at least one required parameter*/)]
[VisibleToOtherModules]
internal class RequiredByNativeCodeAttribute : Attribute
{
	[CompilerGenerated]
	[DebuggerBrowsable(/*Cpp2IL Warning: missing at least one required parameter*/)]
	private string <Name>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	[DebuggerBrowsable(/*Cpp2IL Warning: missing at least one required parameter*/)]
	private bool <Optional>k__BackingField; //Field offset: 0x18
	[CompilerGenerated]
	[DebuggerBrowsable(/*Cpp2IL Warning: missing at least one required parameter*/)]
	private bool <GenerateProxy>k__BackingField; //Field offset: 0x19

	public bool GenerateProxy
	{
		[CompilerGenerated]
		 set { } //Length: 12
	}

	public string Name
	{
		[CompilerGenerated]
		 set { } //Length: 8
	}

	public bool Optional
	{
		[CompilerGenerated]
		 set { } //Length: 12
	}

	public RequiredByNativeCodeAttribute() { }

	public RequiredByNativeCodeAttribute(string name) { }

	[CompilerGenerated]
	public void set_GenerateProxy(bool value) { }

	[CompilerGenerated]
	public void set_Name(string value) { }

	[CompilerGenerated]
	public void set_Optional(bool value) { }

}

