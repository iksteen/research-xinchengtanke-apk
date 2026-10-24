namespace System.Security.Cryptography;

public sealed class Oid
{
	private string m_value; //Field offset: 0x10
	private string m_friendlyName; //Field offset: 0x18
	private OidGroup m_group; //Field offset: 0x20

	public string FriendlyName
	{
		 get { } //Length: 92
	}

	public string Value
	{
		 get { } //Length: 8
		 set { } //Length: 8
	}

	public Oid(string oid) { }

	internal Oid(string oid, OidGroup group, bool lookupFriendlyName) { }

	public Oid(string value, string friendlyName) { }

	public Oid(Oid oid) { }

	public string get_FriendlyName() { }

	public string get_Value() { }

	public void set_Value(string value) { }

}

