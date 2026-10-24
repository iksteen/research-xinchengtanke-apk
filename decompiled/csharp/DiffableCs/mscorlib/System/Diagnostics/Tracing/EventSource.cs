namespace System.Diagnostics.Tracing;

public class EventSource : IDisposable
{
	[ThreadStatic]
	private static byte m_EventSourceExceptionRecurenceCount; //Field offset: 0x80000000
	private static readonly Byte[] namespaceBytes; //Field offset: 0x0
	private static readonly Guid AspNetEventSourceGuid; //Field offset: 0x8

	private static EventSource() { }

	protected EventSource() { }

	public override void Dispose() { }

	protected virtual void Finalize() { }

	public bool IsEnabled() { }

	public virtual string ToString() { }

}

