namespace System.Text.RegularExpressions;

internal sealed class RegexBoyerMoore
{
	internal Int32[] _positive; //Field offset: 0x10
	internal Int32[] _negativeASCII; //Field offset: 0x18
	internal Int32[][] _negativeUnicode; //Field offset: 0x20
	internal string _pattern; //Field offset: 0x28
	internal int _lowASCII; //Field offset: 0x30
	internal int _highASCII; //Field offset: 0x34
	internal bool _rightToLeft; //Field offset: 0x38
	internal bool _caseInsensitive; //Field offset: 0x39
	internal CultureInfo _culture; //Field offset: 0x40

	internal RegexBoyerMoore(string pattern, bool caseInsensitive, bool rightToLeft, CultureInfo culture) { }

	internal bool IsMatch(string text, int index, int beglimit, int endlimit) { }

	private bool MatchPattern(string text, int index) { }

	internal int Scan(string text, int index, int beglimit, int endlimit) { }

	public virtual string ToString() { }

}

