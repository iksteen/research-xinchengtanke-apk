namespace System;

public static class Math
{
	private static double doubleRoundLimit; //Field offset: 0x0
	private const int maxRoundingDigits = 15; //Field offset: 0x0
	public const double PI = 3.141592653589793; //Field offset: 0x0
	public const double E = 2.718281828459045; //Field offset: 0x0
	private static Double[] roundPower10Double; //Field offset: 0x8

	private static Math() { }

	public static double Abs(double value) { }

	public static float Abs(float value) { }

	public static int Abs(int value) { }

	private static int AbsHelper(int value) { }

	public static double Acos(double d) { }

	public static double Asin(double d) { }

	public static double Atan(double d) { }

	public static double Atan2(double y, double x) { }

	public static double Ceiling(double a) { }

	public static double Cos(double d) { }

	public static double Floor(double d) { }

	private static double InternalRound(double value, int digits, MidpointRounding mode) { }

	private static double InternalTruncate(double d) { }

	public static double Log(double a, double newBase) { }

	public static double Log(double d) { }

	[ReliabilityContract(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public static int Max(int val1, int val2) { }

	[ReliabilityContract(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public static float Max(float val1, float val2) { }

	[ReliabilityContract(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public static int Min(int val1, int val2) { }

	[ReliabilityContract(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public static float Min(float val1, float val2) { }

	public static double Pow(double x, double y) { }

	public static double Round(double value, int digits, MidpointRounding mode) { }

	public static double Round(double value, MidpointRounding mode) { }

	public static double Round(double a) { }

	public static int Sign(double value) { }

	public static double Sin(double a) { }

	private static double SplitFractionDouble(Double* value) { }

	[ReliabilityContract(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public static double Sqrt(double d) { }

	public static double Tan(double a) { }

	public static double Truncate(double d) { }

}

