namespace System.Globalization;

public static class CharUnicodeInfo
{
	public static class Debug
	{

		internal static void Assert(bool condition, string message) { }

	}

	private static UInt16[] s_pCategoryLevel1Index; //Field offset: 0x0
	private static Byte[] s_pCategoriesValue; //Field offset: 0x8
	private static UInt16[] s_pNumericLevel1Index; //Field offset: 0x10
	private static Byte[] s_pNumericValues; //Field offset: 0x18
	private static UInt16[] s_pDigitValues; //Field offset: 0x20

	private static CharUnicodeInfo() { }

	public static UnicodeCategory GetUnicodeCategory(char ch) { }

	public static UnicodeCategory GetUnicodeCategory(string s, int index) { }

	internal static int InternalConvertToUtf32(string s, int index) { }

	internal static byte InternalGetCategoryValue(int ch, int offset) { }

	internal static UnicodeCategory InternalGetUnicodeCategory(int ch) { }

	internal static UnicodeCategory InternalGetUnicodeCategory(string value, int index) { }

	internal static bool IsWhiteSpace(char c) { }

}

