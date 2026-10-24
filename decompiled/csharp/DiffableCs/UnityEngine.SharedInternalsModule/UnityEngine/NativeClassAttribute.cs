namespace UnityEngine;

[AttributeUsage(/*Cpp2IL Warning: missing at least one required parameter*/)]
[VisibleToOtherModules]
internal sealed class NativeClassAttribute : Attribute
{
	[CompilerGenerated]
	[DebuggerBrowsable(/*Cpp2IL Warning: missing at least one required parameter*/)]
	private string <QualifiedNativeName>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	[DebuggerBrowsable(/*Cpp2IL Warning: missing at least one required parameter*/)]
	private string <Declaration>k__BackingField; //Field offset: 0x18

	private string Declaration
	{
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private string QualifiedNativeName
	{
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public NativeClassAttribute(string qualifiedCppName) { }

	public NativeClassAttribute(string qualifiedCppName, string declaration) { }

	[CompilerGenerated]
	private void set_Declaration(string value) { }

	[CompilerGenerated]
	private void set_QualifiedNativeName(string value) { }

}

