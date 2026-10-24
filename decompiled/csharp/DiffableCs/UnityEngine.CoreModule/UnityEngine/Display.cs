namespace UnityEngine;

[NativeHeader(/*Cpp2IL Warning: missing at least one required parameter*/)]
[UsedByNativeCode]
public class Display
{
	internal sealed class DisplaysUpdatedDelegate : MulticastDelegate
	{

		public DisplaysUpdatedDelegate(object object, IntPtr method) { }

		public override IAsyncResult BeginInvoke(AsyncCallback callback, object object) { }

		public override void EndInvoke(IAsyncResult result) { }

		public override void Invoke() { }

	}

	public static Display[] displays; //Field offset: 0x0
	private static Display _mainDisplay; //Field offset: 0x8
	private static int m_ActiveEditorGameViewTarget; //Field offset: 0x10
	[CompilerGenerated]
	[DebuggerBrowsable(/*Cpp2IL Warning: missing at least one required parameter*/)]
	private static DisplaysUpdatedDelegate onDisplaysUpdated; //Field offset: 0x18
	internal IntPtr nativeDisplay; //Field offset: 0x10

	public static Display main
	{
		 get { } //Length: 100
	}

	public int renderingHeight
	{
		 get { } //Length: 160
	}

	public int renderingWidth
	{
		 get { } //Length: 160
	}

	public int systemHeight
	{
		 get { } //Length: 160
	}

	public int systemWidth
	{
		 get { } //Length: 160
	}

	private static Display() { }

	internal Display() { }

	internal Display(IntPtr nativeDisplay) { }

	[RequiredByNativeCode]
	private static void FireDisplaysUpdated() { }

	public static Display get_main() { }

	public int get_renderingHeight() { }

	public int get_renderingWidth() { }

	public int get_systemHeight() { }

	public int get_systemWidth() { }

	[FreeFunction]
	private static void GetRenderingExtImpl(IntPtr nativeDisplay, out int w, out int h) { }

	[FreeFunction]
	private static void GetSystemExtImpl(IntPtr nativeDisplay, out int w, out int h) { }

	[RequiredByNativeCode]
	private static void RecreateDisplayList(IntPtr[] nativeDisplay) { }

	public static Vector3 RelativeMouseAt(Vector3 inputMouseCoordinates) { }

	[FreeFunction]
	private static int RelativeMouseAtImpl(int x, int y, out int rx, out int ry) { }

}

