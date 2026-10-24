namespace UnityEngine;

[NativeHeader(/*Cpp2IL Warning: missing at least one required parameter*/)]
[StaticAccessor(/*Cpp2IL Warning: missing at least one required parameter*/)]
public sealed class Gizmos
{

	public static Color color
	{
		 set { } //Length: 80
	}

	[NativeThrows]
	public static void DrawLine(Vector3 from, Vector3 to) { }

	private static void DrawLine_Injected(ref Vector3 from, ref Vector3 to) { }

	public static void set_color(Color value) { }

	private static void set_color_Injected(ref Color value) { }

}

