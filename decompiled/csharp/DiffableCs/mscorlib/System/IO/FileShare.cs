namespace System.IO;

[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
[Flags]
public enum FileShare
{
	None = 0,
	Read = 1,
	Write = 2,
	ReadWrite = 3,
	Delete = 4,
	Inheritable = 16,
}

