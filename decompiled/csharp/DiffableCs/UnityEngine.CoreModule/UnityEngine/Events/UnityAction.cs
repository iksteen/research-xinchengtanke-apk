namespace UnityEngine.Events;

public sealed class UnityAction : MulticastDelegate
{

	public UnityAction(object object, IntPtr method) { }

	public override IAsyncResult BeginInvoke(AsyncCallback callback, object object) { }

	public override void EndInvoke(IAsyncResult result) { }

	public override void Invoke() { }

}

