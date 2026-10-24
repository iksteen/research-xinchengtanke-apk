namespace System.Reflection;

[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
[Flags]
public enum ExceptionHandlingClauseOptions
{
	Clause = 0,
	Filter = 1,
	Finally = 2,
	Fault = 4,
}

