namespace System;

internal static class DateTimeFormat
{
	internal static readonly TimeSpan NullOffset; //Field offset: 0x0
	internal static Char[] allStandardFormats; //Field offset: 0x8
	internal static String[] fixedNumberFormats; //Field offset: 0x10

	private static DateTimeFormat() { }

	private static string ExpandPredefinedFormat(string format, ref DateTime dateTime, ref DateTimeFormatInfo dtfi, ref TimeSpan offset) { }

	internal static string Format(DateTime dateTime, string format, DateTimeFormatInfo dtfi, TimeSpan offset) { }

	internal static string Format(DateTime dateTime, string format, DateTimeFormatInfo dtfi) { }

	private static string FormatCustomized(DateTime dateTime, string format, DateTimeFormatInfo dtfi, TimeSpan offset) { }

	private static void FormatCustomizedRoundripTimeZone(DateTime dateTime, TimeSpan offset, StringBuilder result) { }

	private static void FormatCustomizedTimeZone(DateTime dateTime, TimeSpan offset, string format, int tokenLen, bool timeOnly, StringBuilder result) { }

	private static string FormatDayOfWeek(int dayOfWeek, int repeat, DateTimeFormatInfo dtfi) { }

	internal static void FormatDigits(StringBuilder outputBuffer, int value, int len) { }

	internal static void FormatDigits(StringBuilder outputBuffer, int value, int len, bool overrideLengthLimit) { }

	private static string FormatHebrewMonthName(DateTime time, int month, int repeatCount, DateTimeFormatInfo dtfi) { }

	private static string FormatMonth(int month, int repeatCount, DateTimeFormatInfo dtfi) { }

	internal static string GetRealFormat(string format, DateTimeFormatInfo dtfi) { }

	private static void HebrewFormatDigits(StringBuilder outputBuffer, int digits) { }

	internal static void InvalidFormatForLocal(string format, DateTime dateTime) { }

	internal static void InvalidFormatForUtc(string format, DateTime dateTime) { }

	private static bool IsUseGenitiveForm(string format, int index, int tokenLen, char patternToMatch) { }

	internal static int ParseNextChar(string format, int pos) { }

	internal static int ParseQuoteString(string format, int pos, StringBuilder result) { }

	internal static int ParseRepeatPattern(string format, int pos, char patternChar) { }

}

