namespace System.Runtime.Remoting.Services;

[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
public class TrackingServices
{
	private static ArrayList _handlers; //Field offset: 0x0

	private static TrackingServices() { }

	internal static void NotifyDisconnectedObject(object obj) { }

	internal static void NotifyMarshaledObject(object obj, ObjRef or) { }

	internal static void NotifyUnmarshaledObject(object obj, ObjRef or) { }

}

