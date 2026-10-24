namespace System.Runtime.CompilerServices;

[AttributeUsage(/*Cpp2IL Warning: missing at least one required parameter*/)]
public sealed class TypeForwardedFromAttribute : Attribute
{
	private string assemblyFullName; //Field offset: 0x10

	public string AssemblyFullName
	{
		 get { } //Length: 8
	}

	public TypeForwardedFromAttribute(string assemblyFullName) { }

	public string get_AssemblyFullName() { }

}

