namespace System.Reflection;

[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
[Flags]
public enum CallingConventions
{
	Standard = 1,
	VarArgs = 2,
	Any = 3,
	HasThis = 32,
	ExplicitThis = 64,
}

