namespace System.Text.RegularExpressions;

internal sealed class RegexWriter
{
	internal Int32[] _intStack; //Field offset: 0x10
	internal int _depth; //Field offset: 0x18
	internal Int32[] _emitted; //Field offset: 0x20
	internal int _curpos; //Field offset: 0x28
	internal Dictionary<String, Int32> _stringhash; //Field offset: 0x30
	internal List<String> _stringtable; //Field offset: 0x38
	internal bool _counting; //Field offset: 0x40
	internal int _count; //Field offset: 0x44
	internal int _trackcount; //Field offset: 0x48
	internal Hashtable _caps; //Field offset: 0x50

	private RegexWriter() { }

	internal int CurPos() { }

	internal void Emit(int op) { }

	internal void Emit(int op, int opd1) { }

	internal void Emit(int op, int opd1, int opd2) { }

	internal void EmitFragment(int nodetype, RegexNode node, int CurIndex) { }

	internal bool EmptyStack() { }

	internal ArgumentException MakeException(string message) { }

	internal int MapCapnum(int capnum) { }

	internal void PatchJump(int Offset, int jumpDest) { }

	internal int PopInt() { }

	internal void PushInt(int I) { }

	internal RegexCode RegexCodeFromRegexTree(RegexTree tree) { }

	internal int StringCode(string str) { }

	internal static RegexCode Write(RegexTree t) { }

}

