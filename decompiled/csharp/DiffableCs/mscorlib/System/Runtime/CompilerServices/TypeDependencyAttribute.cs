namespace System.Runtime.CompilerServices;

[AttributeUsage(/*Cpp2IL Warning: missing at least one required parameter*/)]
internal sealed class TypeDependencyAttribute : Attribute
{
	private string typeName; //Field offset: 0x10

	public TypeDependencyAttribute(string typeName) { }

}

