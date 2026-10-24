namespace System.Diagnostics;

[AttributeUsage(/*Cpp2IL Warning: missing at least one required parameter*/)]
[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
public sealed class DebuggableAttribute : Attribute
{
	[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
	[Flags]
	internal enum DebuggingModes
	{
		None = 0,
		Default = 1,
		DisableOptimizations = 256,
		IgnoreSymbolStoreSequencePoints = 2,
		EnableEditAndContinue = 4,
	}

	private DebuggingModes m_debuggingModes; //Field offset: 0x10

	public DebuggableAttribute(DebuggingModes modes) { }

}

