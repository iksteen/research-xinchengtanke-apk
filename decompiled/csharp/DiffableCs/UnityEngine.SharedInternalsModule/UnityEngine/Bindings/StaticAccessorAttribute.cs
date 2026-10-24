namespace UnityEngine.Bindings;

[AttributeUsage(/*Cpp2IL Warning: missing at least one required parameter*/)]
[VisibleToOtherModules]
internal class StaticAccessorAttribute : Attribute
{
	[CompilerGenerated]
	[DebuggerBrowsable(/*Cpp2IL Warning: missing at least one required parameter*/)]
	private string <Name>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	[DebuggerBrowsable(/*Cpp2IL Warning: missing at least one required parameter*/)]
	private StaticAccessorType <Type>k__BackingField; //Field offset: 0x18

	public string Name
	{
		[CompilerGenerated]
		 set { } //Length: 8
	}

	public StaticAccessorType Type
	{
		[CompilerGenerated]
		 set { } //Length: 8
	}

	[VisibleToOtherModules]
	internal StaticAccessorAttribute(string name) { }

	public StaticAccessorAttribute(string name, StaticAccessorType type) { }

	[CompilerGenerated]
	public void set_Name(string value) { }

	[CompilerGenerated]
	public void set_Type(StaticAccessorType value) { }

}

