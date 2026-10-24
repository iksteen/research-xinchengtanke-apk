namespace System.ComponentModel;

[AttributeUsage(/*Cpp2IL Warning: missing at least one required parameter*/)]
public sealed class EditorBrowsableAttribute : Attribute
{
	private EditorBrowsableState browsableState; //Field offset: 0x10

	public EditorBrowsableAttribute(EditorBrowsableState state) { }

	public virtual bool Equals(object obj) { }

	public virtual int GetHashCode() { }

}

