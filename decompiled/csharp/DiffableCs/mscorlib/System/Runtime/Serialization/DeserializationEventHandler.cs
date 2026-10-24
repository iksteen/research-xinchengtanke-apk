namespace System.Runtime.Serialization;

internal sealed class DeserializationEventHandler : MulticastDelegate
{

	public DeserializationEventHandler(object object, IntPtr method) { }

	public override IAsyncResult BeginInvoke(object sender, AsyncCallback callback, object object) { }

	public override void EndInvoke(IAsyncResult result) { }

	public override void Invoke(object sender) { }

}

