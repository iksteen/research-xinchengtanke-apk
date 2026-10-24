namespace System;

[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
public static class Buffer
{

	private static int _ByteLength(Array array) { }

	public static void BlockCopy(Array src, int srcOffset, Array dst, int dstOffset, int count) { }

	public static int ByteLength(Array array) { }

	internal static int IndexOfByte(Byte* src, byte value, int index, int count) { }

	internal static bool InternalBlockCopy(Array src, int srcOffsetBytes, Array dst, int dstOffsetBytes, int byteCount) { }

	[ReliabilityContract(/*Cpp2IL Warning: missing at least one required parameter*/)]
	internal static void Memcpy(Byte[] dest, int destIndex, Byte* src, int srcIndex, int len) { }

	[ReliabilityContract(/*Cpp2IL Warning: missing at least one required parameter*/)]
	internal static void Memcpy(Byte* pDest, int destIndex, Byte[] src, int srcIndex, int len) { }

	internal static void Memcpy(Byte* dest, Byte* src, int size) { }

	private static void memcpy1(Byte* dest, Byte* src, int size) { }

	internal static void memcpy2(Byte* dest, Byte* src, int size) { }

	internal static void memcpy4(Byte* dest, Byte* src, int size) { }

	internal static void ZeroMemory(Byte* src, long len) { }

}

