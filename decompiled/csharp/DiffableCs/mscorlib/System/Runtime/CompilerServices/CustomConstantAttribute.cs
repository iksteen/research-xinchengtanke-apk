namespace System.Runtime.CompilerServices;

[AttributeUsage(/*Cpp2IL Warning: missing at least one required parameter*/)]
[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
public abstract class CustomConstantAttribute : Attribute
{

	public abstract object Value
	{
		 get { } //Length: 0
	}

	protected CustomConstantAttribute() { }

	public abstract object get_Value() { }

}

