//Type is in global namespace

[Extension]
public static class NGUIMath
{
	private static List<UIWidget> s_widgets; //Field offset: 0x0

	private static NGUIMath() { }

	public static int AdjustByDPI(float height) { }

	public static void AdjustWidget(UIWidget w, float left, float bottom, float right, float top, int minWidth, int minHeight, int maxWidth, int maxHeight) { }

	public static void AdjustWidget(UIWidget w, float left, float bottom, float right, float top, int minWidth, int minHeight) { }

	public static void AdjustWidget(UIWidget w, float left, float bottom, float right, float top) { }

	public static Bounds CalculateAbsoluteWidgetBounds(Transform trans) { }

	[DebuggerHidden]
	[DebuggerStepThrough]
	private static void CalculateRelativeWidgetBounds(Transform content, bool considerInactive, bool isRoot, ref Matrix4x4 toLocal, ref Vector3 vMin, ref Vector3 vMax, ref bool isSet, bool considerChildren) { }

	public static Bounds CalculateRelativeWidgetBounds(Transform relativeTo, Transform content, bool considerInactive, bool considerChildren = true) { }

	public static Bounds CalculateRelativeWidgetBounds(Transform relativeTo, Transform content) { }

	public static Bounds CalculateRelativeWidgetBounds(Transform trans, bool considerInactive) { }

	public static Bounds CalculateRelativeWidgetBounds(Transform trans) { }

	[DebuggerHidden]
	[DebuggerStepThrough]
	public static int ClampIndex(int val, int max) { }

	[DebuggerHidden]
	[DebuggerStepThrough]
	public static int ColorToInt(Color c) { }

	public static Vector2 ConstrainRect(Vector2 minRect, Vector2 maxRect, Vector2 minArea, Vector2 maxArea) { }

	public static Rect ConvertToPixels(Rect rect, int width, int height, bool round) { }

	public static Rect ConvertToTexCoords(Rect rect, int width, int height) { }

	[DebuggerHidden]
	[DebuggerStepThrough]
	public static string DecimalToHex24(int num) { }

	[DebuggerHidden]
	[DebuggerStepThrough]
	public static string DecimalToHex32(int num) { }

	[DebuggerHidden]
	[DebuggerStepThrough]
	public static string DecimalToHex8(int num) { }

	[DebuggerHidden]
	[DebuggerStepThrough]
	public static char DecimalToHexChar(int num) { }

	private static float DistancePointToLineSegment(Vector2 point, Vector2 a, Vector2 b) { }

	public static float DistanceToRectangle(Vector3[] worldPoints, Vector2 mousePos, Camera cam) { }

	public static float DistanceToRectangle(Vector2[] screenPoints, Vector2 mousePos) { }

	public static Pivot GetPivot(Vector2 offset) { }

	public static Vector2 GetPivotOffset(Pivot pv) { }

	[DebuggerHidden]
	[DebuggerStepThrough]
	public static Color HexToColor(uint val) { }

	[DebuggerHidden]
	[DebuggerStepThrough]
	public static int HexToDecimal(char ch, int defVal = 15) { }

	[DebuggerHidden]
	[DebuggerStepThrough]
	public static string IntToBinary(int val, int bits) { }

	[DebuggerHidden]
	[DebuggerStepThrough]
	public static Color IntToColor(int val) { }

	[DebuggerHidden]
	[DebuggerStepThrough]
	public static float Lerp(float from, float to, float factor) { }

	public static Rect MakePixelPerfect(Rect rect, int width, int height) { }

	public static Rect MakePixelPerfect(Rect rect) { }

	public static void MoveRect(UIRect rect, float x, float y) { }

	public static void MoveWidget(UIRect w, float x, float y) { }

	[Extension]
	public static void OverlayPosition(Transform trans, Vector3 worldPos, Camera worldCam) { }

	[Extension]
	public static void OverlayPosition(Transform trans, Vector3 worldPos, Camera worldCam, Camera myCam) { }

	[Extension]
	public static void OverlayPosition(Transform trans, Transform target) { }

	[DebuggerHidden]
	[DebuggerStepThrough]
	public static int RepeatIndex(int val, int max) { }

	public static void ResizeWidget(UIWidget w, Pivot pivot, float x, float y, int minWidth, int minHeight, int maxWidth, int maxHeight) { }

	public static void ResizeWidget(UIWidget w, Pivot pivot, float x, float y, int minWidth, int minHeight) { }

	public static float RotateTowards(float from, float to, float maxAngle) { }

	public static Vector2 ScreenToParentPixels(Vector2 pos, Transform relativeTo) { }

	public static Vector2 ScreenToPixels(Vector2 pos, Transform relativeTo) { }

	public static Vector2 SpringDampen(ref Vector2 velocity, float strength, float deltaTime) { }

	public static Vector3 SpringDampen(ref Vector3 velocity, float strength, float deltaTime) { }

	public static Vector2 SpringLerp(Vector2 from, Vector2 to, float strength, float deltaTime) { }

	public static float SpringLerp(float strength, float deltaTime) { }

	public static float SpringLerp(float from, float to, float strength, float deltaTime) { }

	public static Quaternion SpringLerp(Quaternion from, Quaternion to, float strength, float deltaTime) { }

	public static Vector3 SpringLerp(Vector3 from, Vector3 to, float strength, float deltaTime) { }

	public static Vector3 WorldToLocalPoint(Vector3 worldPos, Camera worldCam, Camera uiCam, Transform relativeTo = null) { }

	[DebuggerHidden]
	[DebuggerStepThrough]
	public static float Wrap01(float val) { }

	[DebuggerHidden]
	[DebuggerStepThrough]
	public static float WrapAngle(float angle) { }

}

