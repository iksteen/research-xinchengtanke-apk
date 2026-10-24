namespace System.Text.RegularExpressions;

internal sealed class RegexInterpreter : RegexRunner
{
	internal int runoperator; //Field offset: 0x80
	internal Int32[] runcodes; //Field offset: 0x88
	internal int runcodepos; //Field offset: 0x90
	internal String[] runstrings; //Field offset: 0x98
	internal RegexCode runcode; //Field offset: 0xA0
	internal RegexPrefix runfcPrefix; //Field offset: 0xA8
	internal RegexBoyerMoore runbmPrefix; //Field offset: 0xB0
	internal int runanchors; //Field offset: 0xB8
	internal bool runrtl; //Field offset: 0xBC
	internal bool runci; //Field offset: 0xBD
	internal CultureInfo runculture; //Field offset: 0xC0

	internal RegexInterpreter(RegexCode code, CultureInfo culture) { }

	private void Advance() { }

	private void Advance(int i) { }

	private void Backtrack() { }

	private void Backwardnext() { }

	private int Bump() { }

	private char CharAt(int j) { }

	protected virtual bool FindFirstChar() { }

	private char Forwardcharnext() { }

	private int Forwardchars() { }

	protected virtual void Go() { }

	private void Goto(int newpos) { }

	protected virtual void InitTrackCount() { }

	private int Leftchars() { }

	private int Operand(int i) { }

	private int Operator() { }

	private bool Refmatch(int index, int len) { }

	private int Rightchars() { }

	private void SetOperator(int op) { }

	private int StackPeek(int i) { }

	private int StackPeek() { }

	private void StackPop() { }

	private void StackPop(int framesize) { }

	private void StackPush(int I1) { }

	private void StackPush(int I1, int I2) { }

	private bool Stringmatch(string str) { }

	private int Textpos() { }

	private int Textstart() { }

	private void Textto(int newpos) { }

	private int TrackPeek() { }

	private int TrackPeek(int i) { }

	private void TrackPop(int framesize) { }

	private void TrackPop() { }

	private int Trackpos() { }

	private void TrackPush(int I1, int I2, int I3) { }

	private void TrackPush(int I1, int I2) { }

	private void TrackPush() { }

	private void TrackPush(int I1) { }

	private void TrackPush2(int I1, int I2) { }

	private void TrackPush2(int I1) { }

	private void Trackto(int newpos) { }

}

