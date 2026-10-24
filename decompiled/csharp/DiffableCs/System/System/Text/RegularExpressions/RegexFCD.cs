namespace System.Text.RegularExpressions;

internal sealed class RegexFCD
{
	private Int32[] _intStack; //Field offset: 0x10
	private int _intDepth; //Field offset: 0x18
	private RegexFC[] _fcStack; //Field offset: 0x20
	private int _fcDepth; //Field offset: 0x28
	private bool _skipAllChildren; //Field offset: 0x2C
	private bool _skipchild; //Field offset: 0x2D
	private bool _failed; //Field offset: 0x2E

	private RegexFCD() { }

	private static int AnchorFromType(int type) { }

	internal static int Anchors(RegexTree tree) { }

	private void CalculateFC(int NodeType, RegexNode node, int CurIndex) { }

	private bool FCIsEmpty() { }

	internal static RegexPrefix FirstChars(RegexTree t) { }

	private bool IntIsEmpty() { }

	private RegexFC PopFC() { }

	private int PopInt() { }

	internal static RegexPrefix Prefix(RegexTree tree) { }

	private void PushFC(RegexFC fc) { }

	private void PushInt(int I) { }

	private RegexFC RegexFCFromRegexTree(RegexTree tree) { }

	private void SkipChild() { }

	private RegexFC TopFC() { }

}

