namespace System.Runtime.CompilerServices;

[AttributeUsage(/*Cpp2IL Warning: missing at least one required parameter*/)]
public sealed class DefaultDependencyAttribute : Attribute
{
	private LoadHint loadHint; //Field offset: 0x10

	public DefaultDependencyAttribute(LoadHint loadHintArgument) { }

}

