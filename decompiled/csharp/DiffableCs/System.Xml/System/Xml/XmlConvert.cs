namespace System.Xml;

public class XmlConvert
{
	private static XmlCharType xmlCharType; //Field offset: 0x0
	internal static Char[] crt; //Field offset: 0x8
	private static readonly int c_EncodedCharLength; //Field offset: 0x10
	internal static readonly Char[] WhitespaceChars; //Field offset: 0x18

	private static XmlConvert() { }

	internal static Exception CreateException(string res, String[] args, ExceptionType exceptionType, int lineNo, int linePos) { }

	internal static Exception CreateException(string res, String[] args, ExceptionType exceptionType) { }

	internal static Exception CreateException(string res, string arg, ExceptionType exceptionType, int lineNo, int linePos) { }

	internal static Exception CreateInvalidCharException(char invChar, char nextChar, ExceptionType exceptionType) { }

	internal static Exception CreateInvalidCharException(char invChar, char nextChar) { }

	internal static Exception CreateInvalidHighSurrogateCharException(char hi, ExceptionType exceptionType, int lineNo, int linePos) { }

	internal static Exception CreateInvalidHighSurrogateCharException(char hi, ExceptionType exceptionType) { }

	internal static Exception CreateInvalidHighSurrogateCharException(char hi) { }

	internal static ArgumentException CreateInvalidNameArgumentException(string name, string argumentName) { }

	internal static Exception CreateInvalidNameCharException(string name, int index, ExceptionType exceptionType) { }

	internal static Exception CreateInvalidSurrogatePairException(char low, char hi, ExceptionType exceptionType, int lineNo, int linePos) { }

	internal static Exception CreateInvalidSurrogatePairException(char low, char hi, ExceptionType exceptionType) { }

	internal static Exception CreateInvalidSurrogatePairException(char low, char hi) { }

	private static long DoubleToInt64Bits(double value) { }

	internal static Byte[] FromBinHexString(string s, bool allowOddCount) { }

	internal static bool IsNegativeZero(double value) { }

	internal static String[] SplitString(string value) { }

	internal static bool StrEqual(Char[] chars, int strPos1, int strLen1, string str2) { }

	private static DateTime SwitchToLocalTime(DateTime value) { }

	private static DateTime SwitchToUtcTime(DateTime value) { }

	internal static string ToBinHexString(Byte[] inArray) { }

	public static bool ToBoolean(string s) { }

	public static char ToChar(string s) { }

	public static decimal ToDecimal(string s) { }

	public static double ToDouble(string s) { }

	public static Guid ToGuid(string s) { }

	public static int ToInt32(string s) { }

	public static long ToInt64(string s) { }

	internal static decimal ToInteger(string s) { }

	public static float ToSingle(string s) { }

	[CLSCompliant(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public static string ToString(sbyte value) { }

	public static string ToString(bool value) { }

	public static string ToString(short value) { }

	public static string ToString(decimal value) { }

	public static string ToString(int value) { }

	[CLSCompliant(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public static string ToString(ulong value) { }

	public static string ToString(long value) { }

	public static string ToString(DateTimeOffset value) { }

	public static string ToString(DateTime value, XmlDateTimeSerializationMode dateTimeOption) { }

	public static string ToString(byte value) { }

	public static string ToString(TimeSpan value) { }

	public static string ToString(double value) { }

	[CLSCompliant(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public static string ToString(ushort value) { }

	public static string ToString(float value) { }

	[CLSCompliant(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public static string ToString(uint value) { }

	internal static Uri ToUri(string s) { }

	internal static double ToXPathDouble(object o) { }

	internal static string TrimString(string value) { }

	internal static string TrimStringEnd(string value) { }

	internal static string TrimStringStart(string value) { }

	internal static Exception TryToBoolean(string s, out bool result) { }

	internal static Exception TryToByte(string s, out byte result) { }

	internal static Exception TryToChar(string s, out char result) { }

	internal static Exception TryToDecimal(string s, out decimal result) { }

	internal static Exception TryToDouble(string s, out double result) { }

	internal static Exception TryToGuid(string s, out Guid result) { }

	internal static Exception TryToInt16(string s, out short result) { }

	internal static Exception TryToInt32(string s, out int result) { }

	internal static Exception TryToInt64(string s, out long result) { }

	internal static Exception TryToInteger(string s, out decimal result) { }

	internal static Exception TryToSByte(string s, out sbyte result) { }

	internal static Exception TryToSingle(string s, out float result) { }

	internal static Exception TryToTimeSpan(string s, out TimeSpan result) { }

	internal static Exception TryToUInt16(string s, out ushort result) { }

	internal static Exception TryToUInt32(string s, out uint result) { }

	internal static Exception TryToUInt64(string s, out ulong result) { }

	internal static Exception TryToUri(string s, out Uri result) { }

	internal static Exception TryVerifyName(string name) { }

	internal static Exception TryVerifyNCName(string name) { }

	internal static Exception TryVerifyNMTOKEN(string name) { }

	internal static Exception TryVerifyNormalizedString(string str) { }

	internal static Exception TryVerifyTOKEN(string token) { }

	public static string VerifyName(string name) { }

	internal static string VerifyNCName(string name, ExceptionType exceptionType) { }

	public static string VerifyNCName(string name) { }

	internal static string VerifyQName(string name, ExceptionType exceptionType) { }

	public static string VerifyTOKEN(string token) { }

}

