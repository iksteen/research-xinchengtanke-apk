namespace System.Reflection;

[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
[Flags]
public enum EventAttributes
{
	None = 0,
	SpecialName = 512,
	ReservedMask = 1024,
	RTSpecialName = 1024,
}

