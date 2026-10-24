namespace UnityEngine.Bindings;

[AttributeUsage(/*Cpp2IL Warning: missing at least one required parameter*/)]
[VisibleToOtherModules]
internal class NotNullAttribute : Attribute
{
	[CompilerGenerated]
	[DebuggerBrowsable(/*Cpp2IL Warning: missing at least one required parameter*/)]
	private string <Exception>k__BackingField; //Field offset: 0x10

	public string Exception
	{
		[CompilerGenerated]
		 set { } //Length: 8
	}

	public NotNullAttribute(string exception = "ArgumentNullException") { }

	[CompilerGenerated]
	public void set_Exception(string value) { }

}

