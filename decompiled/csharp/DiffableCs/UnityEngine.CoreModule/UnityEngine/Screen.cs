namespace UnityEngine;

[NativeHeader(/*Cpp2IL Warning: missing at least one required parameter*/)]
[NativeHeader(/*Cpp2IL Warning: missing at least one required parameter*/)]
[StaticAccessor(/*Cpp2IL Warning: missing at least one required parameter*/)]
public sealed class Screen
{

	public static float dpi
	{
		[NativeName(/*Cpp2IL Warning: missing at least one required parameter*/)]
		 get { } //Length: 52
	}

	public static bool fullScreen
	{
		[NativeName(/*Cpp2IL Warning: missing at least one required parameter*/)]
		 get { } //Length: 52
		[NativeName(/*Cpp2IL Warning: missing at least one required parameter*/)]
		 set { } //Length: 64
	}

	public static int height
	{
		[NativeMethod]
		 get { } //Length: 52
	}

	public static ScreenOrientation orientation
	{
		 set { } //Length: 168
	}

	[NativeProperty]
	public static int sleepTimeout
	{
		 set { } //Length: 64
	}

	public static int width
	{
		[NativeMethod]
		 get { } //Length: 52
	}

	[NativeName(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public static float get_dpi() { }

	[NativeName(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public static bool get_fullScreen() { }

	[NativeMethod]
	public static int get_height() { }

	[NativeMethod]
	public static int get_width() { }

	private static void RequestOrientation(ScreenOrientation orient) { }

	[NativeName(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public static void set_fullScreen(bool value) { }

	public static void set_orientation(ScreenOrientation value) { }

	public static void set_sleepTimeout(int value) { }

}

