namespace System;

internal static class ParseNumbers
{

	private static StringBuilder ConvertToBase16(Byte[] value) { }

	private static StringBuilder ConvertToBase2(Byte[] value) { }

	private static StringBuilder ConvertToBase8(Byte[] value) { }

	private static void EndianSwap(ref Byte[] value) { }

	public static string IntToString(int value, int toBase, int width, char paddingChar, int flags) { }

	public static int StringToInt(string value, int fromBase, int flags) { }

	public static int StringToInt(string value, int fromBase, int flags, Int32* parsePos) { }

	public static long StringToLong(string value, int fromBase, int flags, Int32* parsePos) { }

}

