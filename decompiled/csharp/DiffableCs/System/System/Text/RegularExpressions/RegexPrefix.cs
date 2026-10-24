namespace System.Text.RegularExpressions;

internal sealed class RegexPrefix
{
	internal static RegexPrefix _empty; //Field offset: 0x0
	internal string _prefix; //Field offset: 0x10
	internal bool _caseInsensitive; //Field offset: 0x18

	internal bool CaseInsensitive
	{
		internal get { } //Length: 8
	}

	internal static RegexPrefix Empty
	{
		internal get { } //Length: 100
	}

	internal string Prefix
	{
		internal get { } //Length: 8
	}

	private static RegexPrefix() { }

	internal RegexPrefix(string prefix, bool ci) { }

	internal bool get_CaseInsensitive() { }

	internal static RegexPrefix get_Empty() { }

	internal string get_Prefix() { }

}

