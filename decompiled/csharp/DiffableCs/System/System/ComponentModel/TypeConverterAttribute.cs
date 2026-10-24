namespace System.ComponentModel;

[AttributeUsage(/*Cpp2IL Warning: missing at least one required parameter*/)]
public sealed class TypeConverterAttribute : Attribute
{
	public static readonly TypeConverterAttribute Default; //Field offset: 0x0
	private string typeName; //Field offset: 0x10

	public string ConverterTypeName
	{
		 get { } //Length: 8
	}

	private static TypeConverterAttribute() { }

	public TypeConverterAttribute() { }

	public TypeConverterAttribute(Type type) { }

	public virtual bool Equals(object obj) { }

	public string get_ConverterTypeName() { }

	public virtual int GetHashCode() { }

}

