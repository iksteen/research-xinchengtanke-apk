namespace System.Runtime.CompilerServices;

[AttributeUsage(/*Cpp2IL Warning: missing at least one required parameter*/)]
[CLSCompliant(/*Cpp2IL Warning: missing at least one required parameter*/)]
public sealed class TupleElementNamesAttribute : Attribute
{
	private readonly String[] _transformNames; //Field offset: 0x10

	public TupleElementNamesAttribute(String[] transformNames) { }

}

