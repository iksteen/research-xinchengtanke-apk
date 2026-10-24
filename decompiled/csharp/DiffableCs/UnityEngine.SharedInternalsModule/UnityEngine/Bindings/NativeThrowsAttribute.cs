namespace UnityEngine.Bindings;

[AttributeUsage(/*Cpp2IL Warning: missing at least one required parameter*/)]
[VisibleToOtherModules]
internal class NativeThrowsAttribute : Attribute
{
	[CompilerGenerated]
	[DebuggerBrowsable(/*Cpp2IL Warning: missing at least one required parameter*/)]
	private bool <ThrowsException>k__BackingField; //Field offset: 0x10

	public override bool ThrowsException
	{
		[CompilerGenerated]
		 set { } //Length: 12
	}

	public NativeThrowsAttribute() { }

	[CompilerGenerated]
	public override void set_ThrowsException(bool value) { }

}

