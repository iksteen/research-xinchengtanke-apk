namespace UnityEngine;

[NativeHeader(/*Cpp2IL Warning: missing at least one required parameter*/)]
[NativeHeader(/*Cpp2IL Warning: missing at least one required parameter*/)]
public class GUI
{
	internal sealed class WindowFunction : MulticastDelegate
	{

		public WindowFunction(object object, IntPtr method) { }

		public override IAsyncResult BeginInvoke(int id, AsyncCallback callback, object object) { }

		public override void EndInvoke(IAsyncResult result) { }

		public override void Invoke(int id) { }

	}

	private static int s_HotTextField; //Field offset: 0x0
	private static readonly int s_BoxHash; //Field offset: 0x4
	private static readonly int s_ButonHash; //Field offset: 0x8
	private static readonly int s_RepeatButtonHash; //Field offset: 0xC
	private static readonly int s_ToggleHash; //Field offset: 0x10
	private static readonly int s_ButtonGridHash; //Field offset: 0x14
	private static readonly int s_SliderHash; //Field offset: 0x18
	private static readonly int s_BeginGroupHash; //Field offset: 0x1C
	private static readonly int s_ScrollviewHash; //Field offset: 0x20
	[CompilerGenerated]
	[DebuggerBrowsable(/*Cpp2IL Warning: missing at least one required parameter*/)]
	private static DateTime <nextScrollStepTime>k__BackingField; //Field offset: 0x28
	private static GUISkin s_Skin; //Field offset: 0x30
	internal static Rect s_ToolTipRect; //Field offset: 0x38
	[CompilerGenerated]
	[DebuggerBrowsable(/*Cpp2IL Warning: missing at least one required parameter*/)]
	private static GenericStack <scrollViewStates>k__BackingField; //Field offset: 0x48

	public static bool changed
	{
		 set { } //Length: 64
	}

	public static Color color
	{
		 set { } //Length: 144
	}

	internal static DateTime nextScrollStepTime
	{
		[CompilerGenerated]
		internal set { } //Length: 104
	}

	internal static GenericStack scrollViewStates
	{
		[CompilerGenerated]
		internal get { } //Length: 100
	}

	public static GUISkin skin
	{
		 get { } //Length: 148
		 set { } //Length: 144
	}

	private static GUI() { }

	[RequiredByNativeCode]
	internal static void CallWindowDelegate(WindowFunction func, int id, int instanceID, GUISkin _skin, int forceRect, float width, float height, GUIStyle style) { }

	private static void DoLabel(Rect position, GUIContent content, GUIStyle style) { }

	internal static void DoSetSkin(GUISkin newSkin) { }

	[CompilerGenerated]
	internal static GenericStack get_scrollViewStates() { }

	public static GUISkin get_skin() { }

	public static void Label(Rect position, string text) { }

	public static void Label(Rect position, GUIContent content, GUIStyle style) { }

	public static void set_changed(bool value) { }

	public static void set_color(Color value) { }

	private static void set_color_Injected(ref Color value) { }

	[CompilerGenerated]
	internal static void set_nextScrollStepTime(DateTime value) { }

	public static void set_skin(GUISkin value) { }

}

