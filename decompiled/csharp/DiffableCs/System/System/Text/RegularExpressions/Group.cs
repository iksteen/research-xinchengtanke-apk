namespace System.Text.RegularExpressions;

public class Group : Capture
{
	internal static Group _emptygroup; //Field offset: 0x0
	internal Int32[] _caps; //Field offset: 0x20
	internal int _capcount; //Field offset: 0x28
	[OptionalField]
	internal string _name; //Field offset: 0x30

	public bool Success
	{
		 get { } //Length: 16
	}

	private static Group() { }

	internal Group(string text, Int32[] caps, int capcount, string name) { }

	internal Group() { }

	public bool get_Success() { }

}

