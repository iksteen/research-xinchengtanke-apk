namespace UnityEngine;

public sealed class AndroidJavaException : Exception
{
	private string mJavaStackTrace; //Field offset: 0x88

	public virtual string StackTrace
	{
		 get { } //Length: 48
	}

	internal AndroidJavaException(string message, string javaStackTrace) { }

	public virtual string get_StackTrace() { }

}

