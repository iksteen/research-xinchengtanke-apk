namespace System.Runtime.Serialization;

[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
public struct SerializationEntry
{
	private Type m_type; //Field offset: 0x0
	private object m_value; //Field offset: 0x8
	private string m_name; //Field offset: 0x10

	public string Name
	{
		 get { } //Length: 8
	}

	public object Value
	{
		 get { } //Length: 8
	}

	internal SerializationEntry(string entryName, object entryValue, Type entryType) { }

	public string get_Name() { }

	public object get_Value() { }

}

