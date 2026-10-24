namespace Microsoft.Win32;

[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
public enum RegistryValueKind
{
	Unknown = 0,
	String = 1,
	ExpandString = 2,
	Binary = 3,
	DWord = 4,
	MultiString = 7,
	QWord = 11,
	None = -1,
}

