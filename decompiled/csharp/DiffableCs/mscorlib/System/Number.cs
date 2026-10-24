namespace System;

[FriendAccessAllowed]
internal class Number
{
	[FriendAccessAllowed]
	public struct NumberBuffer
	{
		public static readonly int NumberBufferBytes; //Field offset: 0x0
		private Byte* baseAddress; //Field offset: 0x0
		public Char* digits; //Field offset: 0x8
		public int precision; //Field offset: 0x10
		public int scale; //Field offset: 0x14
		public bool sign; //Field offset: 0x18

		private static NumberBuffer() { }

		public NumberBuffer(Byte* stackBuffer) { }

		public Byte* PackForNative() { }

	}


	public static string FormatDecimal(decimal value, string format, NumberFormatInfo info) { }

	public static string FormatDouble(double value, string format, NumberFormatInfo info) { }

	public static string FormatInt32(int value, string format, NumberFormatInfo info) { }

	public static string FormatInt64(long value, string format, NumberFormatInfo info) { }

	public static string FormatSingle(float value, string format, NumberFormatInfo info) { }

	public static string FormatUInt32(uint value, string format, NumberFormatInfo info) { }

	public static string FormatUInt64(ulong value, string format, NumberFormatInfo info) { }

	private static bool HexNumberToInt32(ref NumberBuffer number, ref int value) { }

	private static bool HexNumberToInt64(ref NumberBuffer number, ref long value) { }

	private static bool HexNumberToUInt32(ref NumberBuffer number, ref uint value) { }

	private static bool HexNumberToUInt64(ref NumberBuffer number, ref ulong value) { }

	private static bool IsWhite(char ch) { }

	private static Char* MatchChars(Char* p, Char* str) { }

	private static Char* MatchChars(Char* p, string str) { }

	public static bool NumberBufferToDecimal(Byte* number, ref decimal value) { }

	internal static bool NumberBufferToDouble(Byte* number, ref double value) { }

	private static bool NumberToInt32(ref NumberBuffer number, ref int value) { }

	private static bool NumberToInt64(ref NumberBuffer number, ref long value) { }

	private static bool NumberToUInt32(ref NumberBuffer number, ref uint value) { }

	private static bool NumberToUInt64(ref NumberBuffer number, ref ulong value) { }

	internal static decimal ParseDecimal(string value, NumberStyles options, NumberFormatInfo numfmt) { }

	internal static double ParseDouble(string value, NumberStyles options, NumberFormatInfo numfmt) { }

	internal static int ParseInt32(string s, NumberStyles style, NumberFormatInfo info) { }

	internal static long ParseInt64(string value, NumberStyles options, NumberFormatInfo numfmt) { }

	private static bool ParseNumber(ref Char* str, NumberStyles options, ref NumberBuffer number, StringBuilder sb, NumberFormatInfo numfmt, bool parseDecimal) { }

	internal static float ParseSingle(string value, NumberStyles options, NumberFormatInfo numfmt) { }

	internal static uint ParseUInt32(string value, NumberStyles options, NumberFormatInfo numfmt) { }

	internal static ulong ParseUInt64(string value, NumberStyles options, NumberFormatInfo numfmt) { }

	private static void StringToNumber(string str, NumberStyles options, ref NumberBuffer number, NumberFormatInfo info, bool parseDecimal) { }

	private static bool TrailingZeros(string s, int index) { }

	internal static bool TryParseDecimal(string value, NumberStyles options, NumberFormatInfo numfmt, out decimal result) { }

	internal static bool TryParseDouble(string value, NumberStyles options, NumberFormatInfo numfmt, out double result) { }

	internal static bool TryParseInt32(string s, NumberStyles style, NumberFormatInfo info, out int result) { }

	internal static bool TryParseInt64(string s, NumberStyles style, NumberFormatInfo info, out long result) { }

	internal static bool TryParseSingle(string value, NumberStyles options, NumberFormatInfo numfmt, out float result) { }

	internal static bool TryParseUInt32(string s, NumberStyles style, NumberFormatInfo info, out uint result) { }

	internal static bool TryParseUInt64(string s, NumberStyles style, NumberFormatInfo info, out ulong result) { }

	internal static bool TryStringToNumber(string str, NumberStyles options, ref NumberBuffer number, NumberFormatInfo numfmt, bool parseDecimal) { }

	[FriendAccessAllowed]
	internal static bool TryStringToNumber(string str, NumberStyles options, ref NumberBuffer number, StringBuilder sb, NumberFormatInfo numfmt, bool parseDecimal) { }

}

