namespace System.Text.RegularExpressions;

internal sealed class RegexCode
{
	internal Int32[] _codes; //Field offset: 0x10
	internal String[] _strings; //Field offset: 0x18
	internal int _trackcount; //Field offset: 0x20
	internal Hashtable _caps; //Field offset: 0x28
	internal int _capsize; //Field offset: 0x30
	internal RegexPrefix _fcPrefix; //Field offset: 0x38
	internal RegexBoyerMoore _bmPrefix; //Field offset: 0x40
	internal int _anchors; //Field offset: 0x48
	internal bool _rightToLeft; //Field offset: 0x4C

	internal RegexCode(Int32[] codes, List<String> stringlist, int trackcount, Hashtable caps, int capsize, RegexBoyerMoore bmPrefix, RegexPrefix fcPrefix, int anchors, bool rightToLeft) { }

	internal static bool OpcodeBacktracks(int Op) { }

}

