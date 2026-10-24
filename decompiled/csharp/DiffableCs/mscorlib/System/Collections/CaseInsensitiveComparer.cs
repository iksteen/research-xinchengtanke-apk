namespace System.Collections;

[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
public class CaseInsensitiveComparer : IComparer
{
	private CompareInfo m_compareInfo; //Field offset: 0x10

	public static CaseInsensitiveComparer Default
	{
		 get { } //Length: 148
	}

	public CaseInsensitiveComparer() { }

	public CaseInsensitiveComparer(CultureInfo culture) { }

	public override int Compare(object a, object b) { }

	public static CaseInsensitiveComparer get_Default() { }

}

