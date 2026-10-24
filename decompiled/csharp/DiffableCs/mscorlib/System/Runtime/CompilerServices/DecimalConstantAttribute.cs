namespace System.Runtime.CompilerServices;

[AttributeUsage(/*Cpp2IL Warning: missing at least one required parameter*/)]
[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
public sealed class DecimalConstantAttribute : Attribute
{
	private decimal dec; //Field offset: 0x10

	public decimal Value
	{
		 get { } //Length: 12
	}

	[CLSCompliant(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public DecimalConstantAttribute(byte scale, byte sign, uint hi, uint mid, uint low) { }

	public decimal get_Value() { }

}

