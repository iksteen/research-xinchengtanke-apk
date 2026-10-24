namespace System.Text.RegularExpressions;

internal sealed class RegexReplacement
{
	internal string _rep; //Field offset: 0x10
	internal List<String> _strings; //Field offset: 0x18
	internal List<Int32> _rules; //Field offset: 0x20

	internal string Pattern
	{
		internal get { } //Length: 8
	}

	internal RegexReplacement(string rep, RegexNode concat, Hashtable _caps) { }

	internal string get_Pattern() { }

	internal string Replace(Regex regex, string input, int count, int startat) { }

	private void ReplacementImpl(StringBuilder sb, Match match) { }

	private void ReplacementImplRTL(List<String> al, Match match) { }

}

