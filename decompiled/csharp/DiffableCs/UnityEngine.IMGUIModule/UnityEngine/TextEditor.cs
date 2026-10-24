namespace UnityEngine;

public class TextEditor
{
	internal enum DblClickSnapping
	{
		WORDS = 0,
		PARAGRAPHS = 1,
	}

	public TouchScreenKeyboard keyboardOnScreen; //Field offset: 0x10
	public int controlID; //Field offset: 0x18
	public GUIStyle style; //Field offset: 0x20
	public bool multiline; //Field offset: 0x28
	public bool hasHorizontalCursorPos; //Field offset: 0x29
	public bool isPasswordField; //Field offset: 0x2A
	internal bool m_HasFocus; //Field offset: 0x2B
	public Vector2 scrollOffset; //Field offset: 0x2C
	private GUIContent m_Content; //Field offset: 0x38
	private Rect m_Position; //Field offset: 0x40
	private int m_CursorIndex; //Field offset: 0x50
	private int m_SelectIndex; //Field offset: 0x54
	private bool m_RevealCursor; //Field offset: 0x58
	private bool m_MouseDragSelectsWholeWords; //Field offset: 0x59
	private int m_DblClickInitPos; //Field offset: 0x5C
	private DblClickSnapping m_DblClickSnap; //Field offset: 0x60
	private bool m_bJustSelected; //Field offset: 0x61
	private int m_iAltCursorPos; //Field offset: 0x64

	public int cursorIndex
	{
		 get { } //Length: 8
		 set { } //Length: 104
	}

	internal override Rect localPosition
	{
		internal get { } //Length: 12
	}

	public Rect position
	{
		 get { } //Length: 12
	}

	public int selectIndex
	{
		 get { } //Length: 8
		 set { } //Length: 96
	}

	public string text
	{
		 get { } //Length: 28
		 set { } //Length: 140
	}

	[RequiredByNativeCode]
	public TextEditor() { }

	private void ClampTextIndex(ref int index) { }

	private void ClearCursorPos() { }

	public void Copy() { }

	public bool DeleteSelection() { }

	private void EnsureValidCodePointIndex(ref int index) { }

	public int get_cursorIndex() { }

	internal override Rect get_localPosition() { }

	public Rect get_position() { }

	public int get_selectIndex() { }

	public string get_text() { }

	private bool IsValidCodePointIndex(int index) { }

	private int NextCodePointIndex(int index) { }

	internal override void OnCursorIndexChange() { }

	public void OnFocus() { }

	internal override void OnSelectIndexChange() { }

	public bool Paste() { }

	private static string ReplaceNewlinesWithSpaces(string value) { }

	public void ReplaceSelection(string replace) { }

	public void SelectAll() { }

	public void set_cursorIndex(int value) { }

	public void set_selectIndex(int value) { }

	public void set_text(string value) { }

}

