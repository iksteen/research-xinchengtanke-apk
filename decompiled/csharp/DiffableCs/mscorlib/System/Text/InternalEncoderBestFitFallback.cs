namespace System.Text;

internal class InternalEncoderBestFitFallback : EncoderFallback
{
	internal Encoding encoding; //Field offset: 0x18
	internal Char[] arrayBestFit; //Field offset: 0x20

	public virtual int MaxCharCount
	{
		 get { } //Length: 8
	}

	internal InternalEncoderBestFitFallback(Encoding encoding) { }

	public virtual EncoderFallbackBuffer CreateFallbackBuffer() { }

	public virtual bool Equals(object value) { }

	public virtual int get_MaxCharCount() { }

	public virtual int GetHashCode() { }

}

