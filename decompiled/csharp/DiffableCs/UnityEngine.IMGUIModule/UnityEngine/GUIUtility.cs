namespace UnityEngine;

[NativeHeader(/*Cpp2IL Warning: missing at least one required parameter*/)]
[NativeHeader(/*Cpp2IL Warning: missing at least one required parameter*/)]
[NativeHeader(/*Cpp2IL Warning: missing at least one required parameter*/)]
[NativeHeader(/*Cpp2IL Warning: missing at least one required parameter*/)]
[NativeHeader(/*Cpp2IL Warning: missing at least one required parameter*/)]
[NativeHeader(/*Cpp2IL Warning: missing at least one required parameter*/)]
public class GUIUtility
{
	internal static int s_ControlCount; //Field offset: 0x0
	internal static int s_SkinMode; //Field offset: 0x4
	internal static int s_OriginalID; //Field offset: 0x8
	internal static Action takeCapture; //Field offset: 0x10
	internal static Action releaseCapture; //Field offset: 0x18
	internal static Func<Int32, IntPtr, Boolean> processEvent; //Field offset: 0x20
	internal static Func<Exception, Boolean> endContainerGUIFromException; //Field offset: 0x28
	internal static Action guiChanged; //Field offset: 0x30
	[CompilerGenerated]
	[DebuggerBrowsable(/*Cpp2IL Warning: missing at least one required parameter*/)]
	private static bool <guiIsExiting>k__BackingField; //Field offset: 0x38

	[NativeProperty]
	internal static int guiDepth
	{
		internal get { } //Length: 52
	}

	internal static bool guiIsExiting
	{
		[CompilerGenerated]
		internal set { } //Length: 108
	}

	[NativeProperty]
	internal static float pixelsPerPoint
	{
		internal get { } //Length: 52
	}

	public static string systemCopyBuffer
	{
		[FreeFunction]
		 get { } //Length: 52
		[FreeFunction]
		 set { } //Length: 64
	}

	private static GUIUtility() { }

	[RequiredByNativeCode]
	internal static void BeginGUI(int skinMode, int instanceID, int useGUILayout) { }

	internal static void CheckOnGUI() { }

	[RequiredByNativeCode]
	internal static bool EndContainerGUIFromException(Exception exception) { }

	[RequiredByNativeCode]
	internal static void EndGUI(int layoutType) { }

	[RequiredByNativeCode]
	internal static bool EndGUIFromException(Exception exception) { }

	internal static int get_guiDepth() { }

	internal static float get_pixelsPerPoint() { }

	[FreeFunction]
	public static string get_systemCopyBuffer() { }

	internal static GUISkin GetDefaultSkin() { }

	private static void Internal_ExitGUI() { }

	private static object Internal_GetDefaultSkin(int skinMode) { }

	internal static bool IsExitGUIException(Exception exception) { }

	[RequiredByNativeCode]
	private static void MarkGUIChanged() { }

	[RequiredByNativeCode]
	internal static void ProcessEvent(int instanceID, IntPtr nativeEventPtr, out bool result) { }

	[RequiredByNativeCode]
	internal static void RemoveCapture() { }

	internal static void ResetGlobalState() { }

	[CompilerGenerated]
	internal static void set_guiIsExiting(bool value) { }

	[FreeFunction]
	public static void set_systemCopyBuffer(string value) { }

	internal static bool ShouldRethrowException(Exception exception) { }

	[RequiredByNativeCode]
	internal static void TakeCapture() { }

}

