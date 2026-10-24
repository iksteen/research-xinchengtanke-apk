namespace System.Text.RegularExpressions;

internal sealed class RegexFC
{
	internal RegexCharClass _cc; //Field offset: 0x10
	internal bool _nullable; //Field offset: 0x18
	internal bool _caseInsensitive; //Field offset: 0x19

	internal RegexFC(bool nullable) { }

	internal RegexFC(char ch, bool not, bool nullable, bool caseInsensitive) { }

	internal RegexFC(string charClass, bool nullable, bool caseInsensitive) { }

	internal bool AddFC(RegexFC fc, bool concatenate) { }

	internal string GetFirstChars(CultureInfo culture) { }

	internal bool IsCaseInsensitive() { }

}

