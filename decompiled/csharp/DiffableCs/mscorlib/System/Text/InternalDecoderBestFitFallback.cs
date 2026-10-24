namespace System.Text;

internal sealed class InternalDecoderBestFitFallback : DecoderFallback
{
	internal Encoding encoding; //Field offset: 0x18
	internal Char[] arrayBestFit; //Field offset: 0x20
	internal char cReplacement; //Field offset: 0x28

	public virtual int MaxCharCount
	{
		 get { } //Length: 8
	}

	internal InternalDecoderBestFitFallback(Encoding encoding) { }

	public virtual DecoderFallbackBuffer CreateFallbackBuffer() { }

	public virtual bool Equals(object value) { }

	public virtual int get_MaxCharCount() { }

	public virtual int GetHashCode() { }

}

