namespace UnityEngine;

[Il2CppEagerStaticClassConstruction]
[NativeHeader(/*Cpp2IL Warning: missing at least one required parameter*/)]
[NativeHeader(/*Cpp2IL Warning: missing at least one required parameter*/)]
[NativeHeader(/*Cpp2IL Warning: missing at least one required parameter*/)]
[NativeHeader(/*Cpp2IL Warning: missing at least one required parameter*/)]
public struct Mathf
{
	public static readonly float Epsilon; //Field offset: 0x0

	private static Mathf() { }

	public static int Abs(int value) { }

	public static float Abs(float f) { }

	public static float Acos(float f) { }

	public static bool Approximately(float a, float b) { }

	public static float Atan(float f) { }

	public static float Atan2(float y, float x) { }

	public static float Ceil(float f) { }

	public static int CeilToInt(float f) { }

	public static float Clamp(float value, float min, float max) { }

	public static int Clamp(int value, int min, int max) { }

	public static float Clamp01(float value) { }

	public static float Cos(float f) { }

	public static float Floor(float f) { }

	public static int FloorToInt(float f) { }

	[FreeFunction]
	public static float GammaToLinearSpace(float value) { }

	public static float InverseLerp(float a, float b, float value) { }

	[FreeFunction]
	public static bool IsPowerOfTwo(int value) { }

	public static float Lerp(float a, float b, float t) { }

	public static float LerpUnclamped(float a, float b, float t) { }

	[FreeFunction]
	public static float LinearToGammaSpace(float value) { }

	public static float Log(float f, float p) { }

	public static float Log(float f) { }

	public static float Max(float a, float b) { }

	public static float Max(Single[] values) { }

	public static int Max(int a, int b) { }

	public static float Min(float a, float b) { }

	public static int Min(int a, int b) { }

	public static int Min(Int32[] values) { }

	public static float Min(Single[] values) { }

	[FreeFunction]
	public static int NextPowerOfTwo(int value) { }

	public static float PingPong(float t, float length) { }

	public static float Pow(float f, float p) { }

	public static float Repeat(float t, float length) { }

	public static float Round(float f) { }

	public static int RoundToInt(float f) { }

	public static float Sign(float f) { }

	public static float Sin(float f) { }

	[ExcludeFromDocs]
	public static float SmoothDamp(float current, float target, ref float currentVelocity, float smoothTime) { }

	public static float SmoothDamp(float current, float target, ref float currentVelocity, float smoothTime, float maxSpeed, float deltaTime) { }

	public static float SmoothStep(float from, float to, float t) { }

	public static float Sqrt(float f) { }

	public static float Tan(float f) { }

}

