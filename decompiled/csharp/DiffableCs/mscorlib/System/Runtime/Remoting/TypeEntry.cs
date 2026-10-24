namespace System.Runtime.Remoting;

[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
public class TypeEntry
{
	private string assembly_name; //Field offset: 0x10
	private string type_name; //Field offset: 0x18

	public string AssemblyName
	{
		 get { } //Length: 8
		 set { } //Length: 8
	}

	public string TypeName
	{
		 get { } //Length: 8
		 set { } //Length: 8
	}

	protected TypeEntry() { }

	public string get_AssemblyName() { }

	public string get_TypeName() { }

	public void set_AssemblyName(string value) { }

	public void set_TypeName(string value) { }

}

