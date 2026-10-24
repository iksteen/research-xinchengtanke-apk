namespace System.Text.RegularExpressions;

internal sealed class RegexParser
{
	internal static readonly Byte[] _category; //Field offset: 0x0
	internal RegexNode _stack; //Field offset: 0x10
	internal RegexNode _group; //Field offset: 0x18
	internal RegexNode _alternation; //Field offset: 0x20
	internal RegexNode _concatenation; //Field offset: 0x28
	internal RegexNode _unit; //Field offset: 0x30
	internal string _pattern; //Field offset: 0x38
	internal int _currentPos; //Field offset: 0x40
	internal CultureInfo _culture; //Field offset: 0x48
	internal int _autocap; //Field offset: 0x50
	internal int _capcount; //Field offset: 0x54
	internal int _captop; //Field offset: 0x58
	internal int _capsize; //Field offset: 0x5C
	internal Hashtable _caps; //Field offset: 0x60
	internal Hashtable _capnames; //Field offset: 0x68
	internal Int32[] _capnumlist; //Field offset: 0x70
	internal List<String> _capnamelist; //Field offset: 0x78
	internal RegexOptions _options; //Field offset: 0x80
	internal List<RegexOptions> _optionsStack; //Field offset: 0x88
	internal bool _ignoreNextParen; //Field offset: 0x90

	private static RegexParser() { }

	private RegexParser(CultureInfo culture) { }

	internal void AddAlternate() { }

	internal void AddConcatenate(int pos, int cch, bool isReplacement) { }

	internal void AddConcatenate() { }

	internal void AddConcatenate(bool lazy, int min, int max) { }

	internal void AddGroup() { }

	internal void AddUnitNode(RegexNode node) { }

	internal void AddUnitNotone(char ch) { }

	internal void AddUnitOne(char ch) { }

	internal void AddUnitSet(string cc) { }

	internal void AddUnitType(int type) { }

	internal void AssignNameSlots() { }

	internal int CaptureSlotFromName(string capname) { }

	internal char CharAt(int i) { }

	internal int CharsRight() { }

	internal void CountCaptures() { }

	internal bool EmptyOptionsStack() { }

	internal bool EmptyStack() { }

	internal static int HexDigit(char ch) { }

	internal bool IsCaptureName(string capname) { }

	internal bool IsCaptureSlot(int i) { }

	internal bool IsOnlyTopOption(RegexOptions option) { }

	internal static bool IsQuantifier(char ch) { }

	internal static bool IsSpace(char ch) { }

	internal static bool IsSpecial(char ch) { }

	internal static bool IsStopperX(char ch) { }

	internal bool IsTrueQuantifier() { }

	internal ArgumentException MakeException(string message) { }

	internal void MoveLeft() { }

	internal void MoveRight(int i) { }

	internal void MoveRight() { }

	internal char MoveRightGetChar() { }

	internal void NoteCaptureName(string name, int pos) { }

	internal void NoteCaptures(Hashtable caps, int capsize, Hashtable capnames) { }

	internal void NoteCaptureSlot(int i, int pos) { }

	internal static RegexOptions OptionFromCode(char ch) { }

	internal static RegexTree Parse(string re, RegexOptions op) { }

	internal string ParseProperty() { }

	internal static RegexReplacement ParseReplacement(string rep, Hashtable caps, int capsize, Hashtable capnames, RegexOptions op) { }

	internal void PopGroup() { }

	internal void PopKeepOptions() { }

	internal void PopOptions() { }

	internal void PushGroup() { }

	internal void PushOptions() { }

	internal void Reset(RegexOptions topopts) { }

	internal char RightChar(int i) { }

	internal char RightChar() { }

	internal RegexNode ScanBackslash() { }

	internal RegexNode ScanBasicBackslash() { }

	internal void ScanBlank() { }

	internal string ScanCapname() { }

	internal RegexCharClass ScanCharClass(bool caseInsensitive) { }

	internal RegexCharClass ScanCharClass(bool caseInsensitive, bool scanOnly) { }

	internal char ScanCharEscape() { }

	internal char ScanControl() { }

	internal int ScanDecimal() { }

	internal RegexNode ScanDollar() { }

	internal RegexNode ScanGroupOpen() { }

	internal char ScanHex(int c) { }

	internal char ScanOctal() { }

	internal void ScanOptions() { }

	internal RegexNode ScanRegex() { }

	internal RegexNode ScanReplacement() { }

	internal void SetPattern(string Re) { }

	internal void StartGroup(RegexNode openGroup) { }

	internal int Textpos() { }

	internal void Textto(int pos) { }

	internal int TypeFromCode(char ch) { }

	internal RegexNode Unit() { }

	internal bool UseOptionE() { }

	internal bool UseOptionI() { }

	internal bool UseOptionM() { }

	internal bool UseOptionN() { }

	internal bool UseOptionS() { }

	internal bool UseOptionX() { }

}

