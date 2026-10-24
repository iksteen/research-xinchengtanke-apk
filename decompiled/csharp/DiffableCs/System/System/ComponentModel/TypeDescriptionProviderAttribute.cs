namespace System.ComponentModel;

[AttributeUsage(/*Cpp2IL Warning: missing at least one required parameter*/)]
public sealed class TypeDescriptionProviderAttribute : Attribute
{
	private string _typeName; //Field offset: 0x10

	public string TypeName
	{
		 get { } //Length: 8
	}

	public TypeDescriptionProviderAttribute(Type type) { }

	public string get_TypeName() { }

}

