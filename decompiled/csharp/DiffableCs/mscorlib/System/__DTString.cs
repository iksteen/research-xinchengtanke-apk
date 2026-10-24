namespace System;

internal struct __DTString
{
	private static Char[] WhiteSpaceChecks; //Field offset: 0x0
	internal string Value; //Field offset: 0x0
	internal int Index; //Field offset: 0x8
	internal int len; //Field offset: 0xC
	internal char m_current; //Field offset: 0x10
	private CompareInfo m_info; //Field offset: 0x18
	private bool m_checkDigitToken; //Field offset: 0x20

	internal CompareInfo CompareInfo
	{
		internal get { } //Length: 8
	}

	private static __DTString() { }

	internal __DTString(string str, DateTimeFormatInfo dtfi, bool checkDigitToken) { }

	internal __DTString(string str, DateTimeFormatInfo dtfi) { }

	internal bool Advance(int count) { }

	internal bool AtEnd() { }

	internal void ConsumeSubString(DTSubString sub) { }

	internal CompareInfo get_CompareInfo() { }

	internal char GetChar() { }

	internal int GetDigit() { }

	internal bool GetNext() { }

	internal bool GetNextDigit() { }

	internal void GetRegularToken(out TokenType tokenType, out int tokenValue, DateTimeFormatInfo dtfi) { }

	internal int GetRepeatCount() { }

	internal TokenType GetSeparatorToken(DateTimeFormatInfo dtfi, out int indexBeforeSeparator, out char charBeforeSeparator) { }

	internal DTSubString GetSubString() { }

	internal bool Match(char ch) { }

	internal bool Match(string str) { }

	internal int MatchLongestWords(String[] words, ref int maxMatchStrLen) { }

	internal bool MatchSpecifiedWord(string target, int endIndex) { }

	internal bool MatchSpecifiedWord(string target) { }

	internal bool MatchSpecifiedWords(string target, bool checkWordBoundary, ref int matchLength) { }

	internal void RemoveLeadingInQuoteSpaces() { }

	internal void RemoveTrailingInQuoteSpaces() { }

	internal bool SkipWhiteSpaceCurrent() { }

	internal void SkipWhiteSpaces() { }

	internal void TrimTail() { }

}

