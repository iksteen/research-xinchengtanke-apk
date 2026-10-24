namespace System.Runtime.CompilerServices;

public sealed class RuntimeWrappedException : Exception
{
	private object m_wrappedException; //Field offset: 0x88

	private RuntimeWrappedException(object thrownObject) { }

	internal RuntimeWrappedException(SerializationInfo info, StreamingContext context) { }

	internal RuntimeWrappedException() { }

	public virtual void GetObjectData(SerializationInfo info, StreamingContext context) { }

}

