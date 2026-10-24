namespace System.Text;

public sealed class EncoderReplacementFallback : EncoderFallback
{
	private string strDefault; //Field offset: 0x18

	public string DefaultString
	{
		 get { } //Length: 8
	}

	public virtual int MaxCharCount
	{
		 get { } //Length: 28
	}

	public EncoderReplacementFallback() { }

	public EncoderReplacementFallback(string replacement) { }

	public virtual EncoderFallbackBuffer CreateFallbackBuffer() { }

	public virtual bool Equals(object value) { }

	public string get_DefaultString() { }

	public virtual int get_MaxCharCount() { }

	public virtual int GetHashCode() { }

}

