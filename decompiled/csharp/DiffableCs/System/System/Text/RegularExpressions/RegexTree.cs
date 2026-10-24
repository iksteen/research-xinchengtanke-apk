namespace System.Text.RegularExpressions;

internal sealed class RegexTree
{
	internal RegexNode _root; //Field offset: 0x10
	internal Hashtable _caps; //Field offset: 0x18
	internal Int32[] _capnumlist; //Field offset: 0x20
	internal Hashtable _capnames; //Field offset: 0x28
	internal String[] _capslist; //Field offset: 0x30
	internal RegexOptions _options; //Field offset: 0x38
	internal int _captop; //Field offset: 0x3C

	internal RegexTree(RegexNode root, Hashtable caps, Int32[] capnumlist, int captop, Hashtable capnames, String[] capslist, RegexOptions opts) { }

}

