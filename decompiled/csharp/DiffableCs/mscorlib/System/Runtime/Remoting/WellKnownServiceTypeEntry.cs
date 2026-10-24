namespace System.Runtime.Remoting;

[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
public class WellKnownServiceTypeEntry : TypeEntry
{
	private Type obj_type; //Field offset: 0x20
	private string obj_uri; //Field offset: 0x28
	private WellKnownObjectMode obj_mode; //Field offset: 0x30

	public WellKnownObjectMode Mode
	{
		 get { } //Length: 8
	}

	public Type ObjectType
	{
		 get { } //Length: 8
	}

	public string ObjectUri
	{
		 get { } //Length: 8
	}

	public WellKnownServiceTypeEntry(string typeName, string assemblyName, string objectUri, WellKnownObjectMode mode) { }

	public WellKnownObjectMode get_Mode() { }

	public Type get_ObjectType() { }

	public string get_ObjectUri() { }

	public virtual string ToString() { }

}

