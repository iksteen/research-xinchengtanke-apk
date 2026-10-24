namespace System.Text.RegularExpressions;

internal class MatchSparse : Match
{
	internal Hashtable _caps; //Field offset: 0x70

	public virtual GroupCollection Groups
	{
		 get { } //Length: 140
	}

	internal MatchSparse(Regex regex, Hashtable caps, int capcount, string text, int begpos, int len, int startpos) { }

	public virtual GroupCollection get_Groups() { }

}

