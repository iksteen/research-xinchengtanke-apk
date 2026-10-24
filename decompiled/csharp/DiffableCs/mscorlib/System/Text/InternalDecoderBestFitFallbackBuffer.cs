namespace System.Text;

internal sealed class InternalDecoderBestFitFallbackBuffer : DecoderFallbackBuffer
{
	private static object s_InternalSyncObject; //Field offset: 0x0
	internal char cBestFit; //Field offset: 0x20
	internal int iCount; //Field offset: 0x24
	internal int iSize; //Field offset: 0x28
	private InternalDecoderBestFitFallback oFallback; //Field offset: 0x30

	private static object InternalSyncObject
	{
		private get { } //Length: 152
	}

	public virtual int Remaining
	{
		 get { } //Length: 12
	}

	public InternalDecoderBestFitFallbackBuffer(InternalDecoderBestFitFallback fallback) { }

	public virtual bool Fallback(Byte[] bytesUnknown, int index) { }

	private static object get_InternalSyncObject() { }

	public virtual int get_Remaining() { }

	public virtual char GetNextChar() { }

	internal virtual int InternalFallback(Byte[] bytes, Byte* pBytes) { }

	public virtual void Reset() { }

	private char TryBestFit(Byte[] bytesCheck) { }

}

