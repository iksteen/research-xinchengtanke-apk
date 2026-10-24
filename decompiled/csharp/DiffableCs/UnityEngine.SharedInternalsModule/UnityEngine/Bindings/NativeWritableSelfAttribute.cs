namespace UnityEngine.Bindings;

[AttributeUsage(/*Cpp2IL Warning: missing at least one required parameter*/)]
[VisibleToOtherModules]
internal sealed class NativeWritableSelfAttribute : Attribute
{
	[CompilerGenerated]
	[DebuggerBrowsable(/*Cpp2IL Warning: missing at least one required parameter*/)]
	private bool <WritableSelf>k__BackingField; //Field offset: 0x10

	public override bool WritableSelf
	{
		[CompilerGenerated]
		 set { } //Length: 12
	}

	public NativeWritableSelfAttribute() { }

	[CompilerGenerated]
	public override void set_WritableSelf(bool value) { }

}

