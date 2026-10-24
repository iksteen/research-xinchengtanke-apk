namespace System;

public static class Convert
{
	internal static readonly RuntimeType[] ConvertTypes; //Field offset: 0x0
	private static readonly RuntimeType EnumType; //Field offset: 0x8
	internal static readonly Char[] base64Table; //Field offset: 0x10
	public static readonly object DBNull; //Field offset: 0x18

	private static Convert() { }

	public static object ChangeType(object value, TypeCode typeCode, IFormatProvider provider) { }

	public static object ChangeType(object value, Type conversionType) { }

	public static object ChangeType(object value, Type conversionType, IFormatProvider provider) { }

	private static int ConvertToBase64Array(Char* outChars, Byte* inData, int offset, int length, bool insertLineBreaks) { }

	internal static object DefaultToType(IConvertible value, Type targetType, IFormatProvider provider) { }

	private static int FromBase64_ComputeResultLength(Char* inputPtr, int inputLength) { }

	private static int FromBase64_Decode(Char* startInputPtr, int inputLength, Byte* startDestPtr, int destLength) { }

	private static Byte[] FromBase64CharPtr(Char* inputPtr, int inputLength) { }

	public static Byte[] FromBase64String(string s) { }

	public static TypeCode GetTypeCode(object value) { }

	private static int ToBase64_CalculateAndValidateOutputLength(int inputLength, bool insertLineBreaks) { }

	public static int ToBase64CharArray(Byte[] inArray, int offsetIn, int length, Char[] outArray, int offsetOut) { }

	[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public static int ToBase64CharArray(Byte[] inArray, int offsetIn, int length, Char[] outArray, int offsetOut, Base64FormattingOptions options) { }

	public static string ToBase64String(Byte[] inArray) { }

	public static string ToBase64String(Byte[] inArray, int offset, int length) { }

	[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public static string ToBase64String(Byte[] inArray, int offset, int length, Base64FormattingOptions options) { }

	[CLSCompliant(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public static bool ToBoolean(uint value) { }

	public static bool ToBoolean(int value) { }

	public static bool ToBoolean(short value) { }

	public static bool ToBoolean(byte value) { }

	[CLSCompliant(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public static bool ToBoolean(sbyte value) { }

	public static bool ToBoolean(object value, IFormatProvider provider) { }

	[CLSCompliant(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public static bool ToBoolean(ushort value) { }

	public static bool ToBoolean(decimal value) { }

	public static bool ToBoolean(long value) { }

	[CLSCompliant(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public static bool ToBoolean(ulong value) { }

	public static bool ToBoolean(string value, IFormatProvider provider) { }

	public static bool ToBoolean(float value) { }

	public static bool ToBoolean(double value) { }

	public static byte ToByte(object value, IFormatProvider provider) { }

	[CLSCompliant(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public static byte ToByte(sbyte value) { }

	public static byte ToByte(short value) { }

	[CLSCompliant(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public static byte ToByte(ushort value) { }

	public static byte ToByte(int value) { }

	public static byte ToByte(double value) { }

	[CLSCompliant(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public static byte ToByte(uint value) { }

	public static byte ToByte(long value) { }

	[CLSCompliant(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public static byte ToByte(ulong value) { }

	public static byte ToByte(float value) { }

	public static byte ToByte(decimal value) { }

	public static byte ToByte(string value) { }

	public static byte ToByte(string value, IFormatProvider provider) { }

	public static byte ToByte(bool value) { }

	public static byte ToByte(char value) { }

	public static char ToChar(int value) { }

	[CLSCompliant(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public static char ToChar(uint value) { }

	[CLSCompliant(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public static char ToChar(ulong value) { }

	public static char ToChar(object value, IFormatProvider provider) { }

	[CLSCompliant(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public static char ToChar(sbyte value) { }

	public static char ToChar(byte value) { }

	public static char ToChar(short value) { }

	[CLSCompliant(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public static char ToChar(ushort value) { }

	public static char ToChar(string value, IFormatProvider provider) { }

	public static char ToChar(string value) { }

	public static char ToChar(long value) { }

	public static DateTime ToDateTime(string value, IFormatProvider provider) { }

	[CLSCompliant(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public static decimal ToDecimal(ulong value) { }

	public static decimal ToDecimal(long value) { }

	[CLSCompliant(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public static decimal ToDecimal(uint value) { }

	public static decimal ToDecimal(int value) { }

	[CLSCompliant(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public static decimal ToDecimal(ushort value) { }

	public static decimal ToDecimal(bool value) { }

	public static decimal ToDecimal(byte value) { }

	[CLSCompliant(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public static decimal ToDecimal(sbyte value) { }

	public static decimal ToDecimal(float value) { }

	public static decimal ToDecimal(object value, IFormatProvider provider) { }

	public static decimal ToDecimal(short value) { }

	public static decimal ToDecimal(string value, IFormatProvider provider) { }

	public static decimal ToDecimal(double value) { }

	public static double ToDouble(bool value) { }

	public static double ToDouble(object value, IFormatProvider provider) { }

	[CLSCompliant(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public static double ToDouble(sbyte value) { }

	public static double ToDouble(byte value) { }

	public static double ToDouble(short value) { }

	[CLSCompliant(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public static double ToDouble(ushort value) { }

	public static double ToDouble(int value) { }

	[CLSCompliant(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public static double ToDouble(uint value) { }

	public static double ToDouble(long value) { }

	[CLSCompliant(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public static double ToDouble(ulong value) { }

	public static double ToDouble(float value) { }

	public static double ToDouble(decimal value) { }

	public static double ToDouble(string value, IFormatProvider provider) { }

	public static short ToInt16(decimal value) { }

	public static short ToInt16(object value, IFormatProvider provider) { }

	public static short ToInt16(bool value) { }

	[CLSCompliant(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public static short ToInt16(sbyte value) { }

	public static short ToInt16(byte value) { }

	[CLSCompliant(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public static short ToInt16(ushort value) { }

	public static short ToInt16(int value) { }

	[CLSCompliant(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public static short ToInt16(uint value) { }

	public static short ToInt16(long value) { }

	[CLSCompliant(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public static short ToInt16(ulong value) { }

	public static short ToInt16(float value) { }

	public static short ToInt16(string value, IFormatProvider provider) { }

	public static short ToInt16(double value) { }

	public static short ToInt16(char value) { }

	public static int ToInt32(string value, int fromBase) { }

	public static int ToInt32(string value, IFormatProvider provider) { }

	public static int ToInt32(double value) { }

	[CLSCompliant(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public static int ToInt32(ulong value) { }

	public static int ToInt32(long value) { }

	[CLSCompliant(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public static int ToInt32(uint value) { }

	[CLSCompliant(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public static int ToInt32(ushort value) { }

	public static int ToInt32(short value) { }

	public static int ToInt32(byte value) { }

	public static int ToInt32(char value) { }

	public static int ToInt32(bool value) { }

	public static int ToInt32(object value, IFormatProvider provider) { }

	public static int ToInt32(object value) { }

	public static int ToInt32(decimal value) { }

	public static int ToInt32(float value) { }

	public static long ToInt64(string value, IFormatProvider provider) { }

	public static long ToInt64(string value) { }

	public static long ToInt64(decimal value) { }

	public static long ToInt64(double value) { }

	public static long ToInt64(float value) { }

	[CLSCompliant(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public static long ToInt64(ulong value) { }

	public static long ToInt64(int value) { }

	[CLSCompliant(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public static long ToInt64(ushort value) { }

	[CLSCompliant(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public static long ToInt64(uint value) { }

	public static long ToInt64(byte value) { }

	[CLSCompliant(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public static long ToInt64(sbyte value) { }

	public static long ToInt64(char value) { }

	public static long ToInt64(bool value) { }

	public static long ToInt64(object value, IFormatProvider provider) { }

	public static long ToInt64(short value) { }

	[CLSCompliant(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public static sbyte ToSByte(object value, IFormatProvider provider) { }

	[CLSCompliant(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public static sbyte ToSByte(bool value) { }

	[CLSCompliant(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public static sbyte ToSByte(char value) { }

	[CLSCompliant(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public static sbyte ToSByte(byte value) { }

	[CLSCompliant(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public static sbyte ToSByte(short value) { }

	[CLSCompliant(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public static sbyte ToSByte(ushort value) { }

	[CLSCompliant(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public static sbyte ToSByte(double value) { }

	[CLSCompliant(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public static sbyte ToSByte(uint value) { }

	[CLSCompliant(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public static sbyte ToSByte(long value) { }

	[CLSCompliant(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public static sbyte ToSByte(ulong value) { }

	[CLSCompliant(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public static sbyte ToSByte(decimal value) { }

	[CLSCompliant(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public static sbyte ToSByte(string value, IFormatProvider provider) { }

	[CLSCompliant(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public static sbyte ToSByte(int value) { }

	[CLSCompliant(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public static sbyte ToSByte(float value) { }

	[CLSCompliant(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public static float ToSingle(uint value) { }

	public static float ToSingle(bool value) { }

	public static float ToSingle(string value, IFormatProvider provider) { }

	public static float ToSingle(decimal value) { }

	public static float ToSingle(double value) { }

	[CLSCompliant(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public static float ToSingle(ulong value) { }

	public static float ToSingle(long value) { }

	public static float ToSingle(int value) { }

	public static float ToSingle(short value) { }

	public static float ToSingle(byte value) { }

	[CLSCompliant(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public static float ToSingle(sbyte value) { }

	public static float ToSingle(object value, IFormatProvider provider) { }

	[CLSCompliant(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public static float ToSingle(ushort value) { }

	public static string ToString(int value, IFormatProvider provider) { }

	public static string ToString(char value, IFormatProvider provider) { }

	public static string ToString(object value, IFormatProvider provider) { }

	[CLSCompliant(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public static ushort ToUInt16(ulong value) { }

	[CLSCompliant(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public static ushort ToUInt16(long value) { }

	[CLSCompliant(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public static ushort ToUInt16(uint value) { }

	[CLSCompliant(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public static ushort ToUInt16(short value) { }

	[CLSCompliant(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public static ushort ToUInt16(char value) { }

	[CLSCompliant(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public static ushort ToUInt16(sbyte value) { }

	[CLSCompliant(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public static ushort ToUInt16(float value) { }

	[CLSCompliant(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public static ushort ToUInt16(bool value) { }

	[CLSCompliant(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public static ushort ToUInt16(object value, IFormatProvider provider) { }

	[CLSCompliant(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public static ushort ToUInt16(byte value) { }

	[CLSCompliant(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public static ushort ToUInt16(double value) { }

	[CLSCompliant(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public static ushort ToUInt16(int value) { }

	[CLSCompliant(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public static ushort ToUInt16(string value, IFormatProvider provider) { }

	[CLSCompliant(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public static ushort ToUInt16(decimal value) { }

	[CLSCompliant(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public static uint ToUInt32(object value) { }

	[CLSCompliant(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public static uint ToUInt32(object value, IFormatProvider provider) { }

	[CLSCompliant(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public static uint ToUInt32(bool value) { }

	[CLSCompliant(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public static uint ToUInt32(char value) { }

	[CLSCompliant(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public static uint ToUInt32(sbyte value) { }

	[CLSCompliant(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public static uint ToUInt32(short value) { }

	[CLSCompliant(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public static uint ToUInt32(ushort value) { }

	[CLSCompliant(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public static uint ToUInt32(int value) { }

	[CLSCompliant(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public static uint ToUInt32(long value) { }

	[CLSCompliant(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public static uint ToUInt32(ulong value) { }

	[CLSCompliant(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public static uint ToUInt32(float value) { }

	[CLSCompliant(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public static uint ToUInt32(double value) { }

	[CLSCompliant(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public static uint ToUInt32(byte value) { }

	[CLSCompliant(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public static uint ToUInt32(string value, IFormatProvider provider) { }

	[CLSCompliant(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public static uint ToUInt32(decimal value) { }

	[CLSCompliant(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public static ulong ToUInt64(decimal value) { }

	[CLSCompliant(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public static ulong ToUInt64(string value, IFormatProvider provider) { }

	[CLSCompliant(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public static ulong ToUInt64(float value) { }

	[CLSCompliant(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public static ulong ToUInt64(long value) { }

	[CLSCompliant(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public static ulong ToUInt64(uint value) { }

	[CLSCompliant(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public static ulong ToUInt64(int value) { }

	[CLSCompliant(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public static ulong ToUInt64(ushort value) { }

	[CLSCompliant(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public static ulong ToUInt64(short value) { }

	[CLSCompliant(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public static ulong ToUInt64(byte value) { }

	[CLSCompliant(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public static ulong ToUInt64(sbyte value) { }

	[CLSCompliant(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public static ulong ToUInt64(char value) { }

	[CLSCompliant(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public static ulong ToUInt64(bool value) { }

	[CLSCompliant(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public static ulong ToUInt64(object value, IFormatProvider provider) { }

	[CLSCompliant(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public static ulong ToUInt64(double value) { }

}

