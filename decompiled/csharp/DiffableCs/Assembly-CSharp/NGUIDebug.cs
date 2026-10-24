//Type is in global namespace

[AddComponentMenu(/*Cpp2IL Warning: missing at least one required parameter*/)]
public class NGUIDebug : MonoBehaviour
{
	private static bool mRayDebug; //Field offset: 0x0
	private static List<String> mLines; //Field offset: 0x8
	private static NGUIDebug mInstance; //Field offset: 0x10

	public static bool debugRaycast
	{
		 get { } //Length: 100
		 set { } //Length: 160
	}

	private static NGUIDebug() { }

	public NGUIDebug() { }

	public static void Clear() { }

	public static void CreateInstance() { }

	public static void DrawBounds(Bounds b) { }

	public static bool get_debugRaycast() { }

	public static void Log(Object[] objs) { }

	public static void Log(string s) { }

	private static void LogString(string text) { }

	private void OnGUI() { }

	public static void set_debugRaycast(bool value) { }

}

