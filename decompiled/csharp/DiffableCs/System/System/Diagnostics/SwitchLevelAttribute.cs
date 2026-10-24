namespace System.Diagnostics;

[AttributeUsage(/*Cpp2IL Warning: missing at least one required parameter*/)]
public sealed class SwitchLevelAttribute : Attribute
{
	private Type type; //Field offset: 0x10

	public Type SwitchLevelType
	{
		 set { } //Length: 208
	}

	public SwitchLevelAttribute(Type switchLevelType) { }

	public void set_SwitchLevelType(Type value) { }

}

