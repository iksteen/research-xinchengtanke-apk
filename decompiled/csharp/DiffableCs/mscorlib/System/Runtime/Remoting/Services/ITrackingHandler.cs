namespace System.Runtime.Remoting.Services;

[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
public interface ITrackingHandler
{

	public void DisconnectedObject(object obj) { }

	public void MarshaledObject(object obj, ObjRef or) { }

	public void UnmarshaledObject(object obj, ObjRef or) { }

}

