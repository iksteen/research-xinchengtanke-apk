namespace System.IO;

[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
[Flags]
public enum FileOptions
{
	None = 0,
	Encrypted = 16384,
	DeleteOnClose = 67108864,
	SequentialScan = 134217728,
	RandomAccess = 268435456,
	Asynchronous = 1073741824,
	WriteThrough = -2147483648,
}

