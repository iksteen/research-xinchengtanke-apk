namespace System.Reflection;

[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
public struct CustomAttributeTypedArgument
{
	private Type argumentType; //Field offset: 0x0
	private object value; //Field offset: 0x8

	public CustomAttributeTypedArgument(Type argumentType, object value) { }

	public virtual bool Equals(object obj) { }

	public virtual int GetHashCode() { }

	public virtual string ToString() { }

}

