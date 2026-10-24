namespace System;

internal struct UnSafeCharBuffer
{
	private Char* m_buffer; //Field offset: 0x0
	private int m_totalSize; //Field offset: 0x8
	private int m_length; //Field offset: 0xC

	public UnSafeCharBuffer(Char* buffer, int bufferSize) { }

	public void AppendString(string stringToAppend) { }

}

