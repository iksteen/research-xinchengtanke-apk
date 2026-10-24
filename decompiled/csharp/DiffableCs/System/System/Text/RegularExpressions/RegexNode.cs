namespace System.Text.RegularExpressions;

internal sealed class RegexNode
{
	internal int _type; //Field offset: 0x10
	internal List<RegexNode> _children; //Field offset: 0x18
	internal string _str; //Field offset: 0x20
	internal char _ch; //Field offset: 0x28
	internal int _m; //Field offset: 0x2C
	internal int _n; //Field offset: 0x30
	internal RegexOptions _options; //Field offset: 0x34
	internal RegexNode _next; //Field offset: 0x38

	internal RegexNode(int type, RegexOptions options) { }

	internal RegexNode(int type, RegexOptions options, char ch) { }

	internal RegexNode(int type, RegexOptions options, string str) { }

	internal RegexNode(int type, RegexOptions options, int m) { }

	internal RegexNode(int type, RegexOptions options, int m, int n) { }

	internal void AddChild(RegexNode newChild) { }

	internal RegexNode Child(int i) { }

	internal int ChildCount() { }

	internal RegexNode MakeQuantifier(bool lazy, int min, int max) { }

	internal void MakeRep(int type, int min, int max) { }

	internal RegexNode Reduce() { }

	internal RegexNode ReduceAlternation() { }

	internal RegexNode ReduceConcatenation() { }

	internal RegexNode ReduceGroup() { }

	internal RegexNode ReduceRep() { }

	internal RegexNode ReduceSet() { }

	internal RegexNode ReverseLeft() { }

	internal RegexNode StripEnation(int emptyType) { }

	internal int Type() { }

	internal bool UseOptionR() { }

}

