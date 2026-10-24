namespace UnityEngine.Bindings;

[AttributeUsage(/*Cpp2IL Warning: missing at least one required parameter*/)]
[VisibleToOtherModules]
internal class NativeNameAttribute : Attribute
{
	[CompilerGenerated]
	[DebuggerBrowsable(/*Cpp2IL Warning: missing at least one required parameter*/)]
	private string <Name>k__BackingField; //Field offset: 0x10

	public override string Name
	{
		[CompilerGenerated]
		 set { } //Length: 8
	}

	public NativeNameAttribute(string name) { }

	[CompilerGenerated]
	public override void set_Name(string value) { }

}

