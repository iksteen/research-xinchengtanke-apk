namespace UnityEngine;

[NativeHeader(/*Cpp2IL Warning: missing at least one required parameter*/)]
public class Input
{
	private static Gyroscope s_MainGyro; //Field offset: 0x0

	[NativeThrows]
	public static bool anyKeyDown
	{
		 get { } //Length: 52
	}

	public static Vector2 compositionCursorPos
	{
		 get { } //Length: 72
		 set { } //Length: 68
	}

	public static string compositionString
	{
		 get { } //Length: 52
	}

	public static Gyroscope gyro
	{
		 get { } //Length: 208
	}

	public static IMECompositionMode imeCompositionMode
	{
		 get { } //Length: 52
		 set { } //Length: 64
	}

	[NativeThrows]
	public static string inputString
	{
		 get { } //Length: 52
	}

	[NativeThrows]
	public static Vector3 mousePosition
	{
		 get { } //Length: 88
	}

	public static bool mousePresent
	{
		[FreeFunction]
		 get { } //Length: 52
	}

	[NativeThrows]
	public static Vector2 mouseScrollDelta
	{
		 get { } //Length: 72
	}

	public static bool simulateMouseWithTouches
	{
		 set { } //Length: 64
	}

	public static int touchCount
	{
		[FreeFunction]
		 get { } //Length: 52
	}

	public static Touch[] touches
	{
		 get { } //Length: 340
	}

	public static bool touchSupported
	{
		[FreeFunction]
		 get { } //Length: 52
	}

	public static bool get_anyKeyDown() { }

	public static Vector2 get_compositionCursorPos() { }

	private static void get_compositionCursorPos_Injected(out Vector2 ret) { }

	public static string get_compositionString() { }

	public static Gyroscope get_gyro() { }

	public static IMECompositionMode get_imeCompositionMode() { }

	public static string get_inputString() { }

	public static Vector3 get_mousePosition() { }

	private static void get_mousePosition_Injected(out Vector3 ret) { }

	[FreeFunction]
	public static bool get_mousePresent() { }

	public static Vector2 get_mouseScrollDelta() { }

	private static void get_mouseScrollDelta_Injected(out Vector2 ret) { }

	[FreeFunction]
	public static int get_touchCount() { }

	public static Touch[] get_touches() { }

	[FreeFunction]
	public static bool get_touchSupported() { }

	[NativeThrows]
	public static float GetAxis(string axisName) { }

	[NativeThrows]
	public static float GetAxisRaw(string axisName) { }

	[NativeThrows]
	public static bool GetButtonDown(string buttonName) { }

	[FreeFunction]
	private static int GetGyroInternal() { }

	public static bool GetKey(KeyCode key) { }

	public static bool GetKeyDown(KeyCode key) { }

	public static bool GetKeyDown(string name) { }

	[NativeThrows]
	private static bool GetKeyDownInt(KeyCode key) { }

	[NativeThrows]
	private static bool GetKeyDownString(string name) { }

	[NativeThrows]
	private static bool GetKeyInt(KeyCode key) { }

	public static bool GetKeyUp(KeyCode key) { }

	[NativeThrows]
	private static bool GetKeyUpInt(KeyCode key) { }

	[NativeThrows]
	public static bool GetMouseButton(int button) { }

	[NativeThrows]
	public static bool GetMouseButtonDown(int button) { }

	[NativeThrows]
	public static bool GetMouseButtonUp(int button) { }

	[NativeThrows]
	public static Touch GetTouch(int index) { }

	private static void GetTouch_Injected(int index, out Touch ret) { }

	public static void set_compositionCursorPos(Vector2 value) { }

	private static void set_compositionCursorPos_Injected(ref Vector2 value) { }

	public static void set_imeCompositionMode(IMECompositionMode value) { }

	public static void set_simulateMouseWithTouches(bool value) { }

}

