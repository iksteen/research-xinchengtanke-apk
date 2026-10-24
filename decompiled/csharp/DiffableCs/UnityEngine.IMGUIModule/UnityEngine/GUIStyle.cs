namespace UnityEngine;

[NativeHeader(/*Cpp2IL Warning: missing at least one required parameter*/)]
[NativeHeader(/*Cpp2IL Warning: missing at least one required parameter*/)]
[RequiredByNativeCode]
public sealed class GUIStyle
{
	internal static bool showKeyboardFocus; //Field offset: 0x0
	private static GUIStyle s_None; //Field offset: 0x8
	internal IntPtr m_Ptr; //Field offset: 0x10
	private GUIStyleState m_Normal; //Field offset: 0x18
	private GUIStyleState m_Hover; //Field offset: 0x20
	private GUIStyleState m_Active; //Field offset: 0x28
	private GUIStyleState m_Focused; //Field offset: 0x30
	private GUIStyleState m_OnNormal; //Field offset: 0x38
	private GUIStyleState m_OnHover; //Field offset: 0x40
	private GUIStyleState m_OnActive; //Field offset: 0x48
	private GUIStyleState m_OnFocused; //Field offset: 0x50
	private RectOffset m_Border; //Field offset: 0x58
	private RectOffset m_Padding; //Field offset: 0x60
	private RectOffset m_Margin; //Field offset: 0x68
	private RectOffset m_Overflow; //Field offset: 0x70
	private string m_Name; //Field offset: 0x78

	[NativeProperty]
	public float fixedHeight
	{
		 get { } //Length: 64
	}

	[NativeProperty]
	public float fixedWidth
	{
		 get { } //Length: 64
	}

	public RectOffset margin
	{
		 get { } //Length: 188
	}

	public string name
	{
		 get { } //Length: 112
		 set { } //Length: 88
	}

	public static GUIStyle none
	{
		 get { } //Length: 164
	}

	public GUIStyleState normal
	{
		 get { } //Length: 128
	}

	public RectOffset padding
	{
		 get { } //Length: 188
	}

	[NativeProperty]
	internal string rawName
	{
		internal get { } //Length: 64
		internal set { } //Length: 80
	}

	[NativeProperty]
	public bool stretchHeight
	{
		 get { } //Length: 64
		 set { } //Length: 80
	}

	[NativeProperty]
	public bool stretchWidth
	{
		 get { } //Length: 64
	}

	private static GUIStyle() { }

	public GUIStyle() { }

	private void Draw(Rect position, GUIContent content, int controlId, bool isHover, bool isActive, bool on, bool hasKeyboardFocus) { }

	public void Draw(Rect position, GUIContent content, bool isHover, bool isActive, bool on, bool hasKeyboardFocus) { }

	protected virtual void Finalize() { }

	public float get_fixedHeight() { }

	public float get_fixedWidth() { }

	public RectOffset get_margin() { }

	public string get_name() { }

	public static GUIStyle get_none() { }

	public GUIStyleState get_normal() { }

	public RectOffset get_padding() { }

	internal string get_rawName() { }

	public bool get_stretchHeight() { }

	public bool get_stretchWidth() { }

	[FreeFunction]
	private IntPtr GetRectOffsetPtr(int idx) { }

	[FreeFunction]
	private IntPtr GetStyleStatePtr(int idx) { }

	[FreeFunction]
	private static IntPtr Internal_Create(GUIStyle self) { }

	[FreeFunction]
	private static void Internal_Destroy(IntPtr self) { }

	[FreeFunction]
	private void Internal_Draw(Rect screenRect, GUIContent content, bool isHover, bool isActive, bool on, bool hasKeyboardFocus) { }

	private void Internal_Draw_Injected(ref Rect screenRect, GUIContent content, bool isHover, bool isActive, bool on, bool hasKeyboardFocus) { }

	[FreeFunction]
	private void Internal_Draw2(Rect position, GUIContent content, int controlID, bool on) { }

	private void Internal_Draw2_Injected(ref Rect position, GUIContent content, int controlID, bool on) { }

	[FreeFunction]
	internal string Internal_GetSelectedRenderedText(Rect localPosition, GUIContent mContent, int selectIndex, int cursorIndex) { }

	private string Internal_GetSelectedRenderedText_Injected(ref Rect localPosition, GUIContent mContent, int selectIndex, int cursorIndex) { }

	[FreeFunction]
	internal static bool IsTooltipActive(string tooltip) { }

	public void set_name(string value) { }

	internal void set_rawName(string value) { }

	public void set_stretchHeight(bool value) { }

	[FreeFunction]
	internal static void SetDefaultFont(Font font) { }

	[FreeFunction]
	internal static void SetMouseTooltip(string tooltip, Rect screenRect) { }

	private static void SetMouseTooltip_Injected(string tooltip, ref Rect screenRect) { }

	public virtual string ToString() { }

}

