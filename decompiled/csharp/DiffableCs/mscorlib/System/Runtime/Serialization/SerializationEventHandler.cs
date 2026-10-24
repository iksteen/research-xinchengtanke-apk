namespace System.Runtime.Serialization;

internal sealed class SerializationEventHandler : MulticastDelegate
{

	public SerializationEventHandler(object object, IntPtr method) { }

	public override IAsyncResult BeginInvoke(StreamingContext context, AsyncCallback callback, object object) { }

	public override void EndInvoke(IAsyncResult result) { }

	public override void Invoke(StreamingContext context) { }

}

