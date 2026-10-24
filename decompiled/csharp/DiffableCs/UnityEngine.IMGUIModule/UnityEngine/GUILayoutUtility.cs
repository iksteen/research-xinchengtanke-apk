namespace UnityEngine;

[NativeHeader(/*Cpp2IL Warning: missing at least one required parameter*/)]
public class GUILayoutUtility
{
	[DebuggerDisplay(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public sealed class LayoutCache
	{
		[CompilerGenerated]
		[DebuggerBrowsable(/*Cpp2IL Warning: missing at least one required parameter*/)]
		private int <id>k__BackingField; //Field offset: 0x10
		internal GUILayoutGroup topLevel; //Field offset: 0x18
		internal GenericStack layoutGroups; //Field offset: 0x20
		internal GUILayoutGroup windows; //Field offset: 0x28

		private int id
		{
			[CompilerGenerated]
			private set { } //Length: 8
		}

		internal LayoutCache(int instanceID = -1) { }

		[CompilerGenerated]
		private void set_id(int value) { }

	}

	private static readonly Dictionary<Int32, LayoutCache> s_StoredLayouts; //Field offset: 0x0
	private static readonly Dictionary<Int32, LayoutCache> s_StoredWindows; //Field offset: 0x8
	internal static LayoutCache current; //Field offset: 0x10
	internal static readonly Rect kDummyRect; //Field offset: 0x18

	private static GUILayoutUtility() { }

	internal static void Begin(int instanceID) { }

	internal static void BeginWindow(int windowID, GUIStyle style, GUILayoutOption[] options) { }

	private static Rect Internal_GetWindowRect(int windowID) { }

	private static void Internal_GetWindowRect_Injected(int windowID, out Rect ret) { }

	private static void Internal_MoveWindow(int windowID, Rect r) { }

	private static void Internal_MoveWindow_Injected(int windowID, ref Rect r) { }

	internal static void Layout() { }

	internal static void LayoutFreeGroup(GUILayoutGroup toplevel) { }

	internal static void LayoutFromEditorWindow() { }

	private static void LayoutSingleGroup(GUILayoutGroup i) { }

	internal static LayoutCache SelectIDList(int instanceID, bool isWindow) { }

}

