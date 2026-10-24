namespace System.Runtime.Serialization;

[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
public struct StreamingContext
{
	internal object m_additionalContext; //Field offset: 0x0
	internal StreamingContextStates m_state; //Field offset: 0x8

	public StreamingContextStates State
	{
		 get { } //Length: 8
	}

	public StreamingContext(StreamingContextStates state) { }

	public StreamingContext(StreamingContextStates state, object additional) { }

	public virtual bool Equals(object obj) { }

	public StreamingContextStates get_State() { }

	public virtual int GetHashCode() { }

}

