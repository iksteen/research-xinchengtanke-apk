namespace System.Runtime.CompilerServices;

[AttributeUsage(/*Cpp2IL Warning: missing at least one required parameter*/)]
public sealed class RuntimeCompatibilityAttribute : Attribute
{
	private bool m_wrapNonExceptionThrows; //Field offset: 0x10

	public bool WrapNonExceptionThrows
	{
		 set { } //Length: 12
	}

	public RuntimeCompatibilityAttribute() { }

	public void set_WrapNonExceptionThrows(bool value) { }

}

