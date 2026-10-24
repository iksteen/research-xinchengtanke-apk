namespace System.Reflection;

[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
public struct CustomAttributeNamedArgument
{
	private CustomAttributeTypedArgument typedArgument; //Field offset: 0x0
	private MemberInfo memberInfo; //Field offset: 0x10

	public CustomAttributeNamedArgument(MemberInfo memberInfo, object value) { }

	public virtual bool Equals(object obj) { }

	public virtual int GetHashCode() { }

	public virtual string ToString() { }

}

