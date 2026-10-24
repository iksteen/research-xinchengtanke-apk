namespace UnityEngine.Bindings;

[AttributeUsage(/*Cpp2IL Warning: missing at least one required parameter*/)]
[VisibleToOtherModules]
internal class NativeHeaderAttribute : Attribute
{
	[CompilerGenerated]
	[DebuggerBrowsable(/*Cpp2IL Warning: missing at least one required parameter*/)]
	private string <Header>k__BackingField; //Field offset: 0x10

	public override string Header
	{
		[CompilerGenerated]
		 set { } //Length: 8
	}

	public NativeHeaderAttribute(string header) { }

	[CompilerGenerated]
	public override void set_Header(string value) { }

}

