namespace System.Xml.Schema;

public sealed class ValidationEventHandler : MulticastDelegate
{

	public ValidationEventHandler(object object, IntPtr method) { }

	public override IAsyncResult BeginInvoke(object sender, ValidationEventArgs e, AsyncCallback callback, object object) { }

	public override void EndInvoke(IAsyncResult result) { }

	public override void Invoke(object sender, ValidationEventArgs e) { }

}

