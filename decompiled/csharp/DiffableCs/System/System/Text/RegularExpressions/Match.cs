namespace System.Text.RegularExpressions;

public class Match : Group
{
	internal static Match _empty; //Field offset: 0x0
	internal GroupCollection _groupcoll; //Field offset: 0x38
	internal Regex _regex; //Field offset: 0x40
	internal int _textbeg; //Field offset: 0x48
	internal int _textpos; //Field offset: 0x4C
	internal int _textend; //Field offset: 0x50
	internal int _textstart; //Field offset: 0x54
	internal Int32[][] _matches; //Field offset: 0x58
	internal Int32[] _matchcount; //Field offset: 0x60
	internal bool _balancing; //Field offset: 0x68

	public static Match Empty
	{
		 get { } //Length: 100
	}

	public override GroupCollection Groups
	{
		 get { } //Length: 136
	}

	private static Match() { }

	internal Match(Regex regex, int capcount, string text, int begpos, int len, int startpos) { }

	internal Match() { }

	internal override void AddMatch(int cap, int start, int len) { }

	internal override void BalanceMatch(int cap) { }

	public static Match get_Empty() { }

	public override GroupCollection get_Groups() { }

	internal override string GroupToStringImpl(int groupnum) { }

	internal override bool IsMatched(int cap) { }

	internal string LastGroupToStringImpl() { }

	internal override int MatchIndex(int cap) { }

	internal override int MatchLength(int cap) { }

	public Match NextMatch() { }

	internal override void RemoveMatch(int cap) { }

	internal override void Reset(Regex regex, string text, int textbeg, int textend, int textstart) { }

	internal override void Tidy(int textpos) { }

}

