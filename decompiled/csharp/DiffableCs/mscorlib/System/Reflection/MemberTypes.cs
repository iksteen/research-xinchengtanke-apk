namespace System.Reflection;

[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
[Flags]
public enum MemberTypes
{
	Constructor = 1,
	Event = 2,
	Field = 4,
	Method = 8,
	Property = 16,
	TypeInfo = 32,
	Custom = 64,
	NestedType = 128,
	All = 191,
}

