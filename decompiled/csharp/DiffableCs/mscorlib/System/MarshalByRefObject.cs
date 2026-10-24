namespace System;

[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
public abstract class MarshalByRefObject
{
	private object _identity; //Field offset: 0x10

	internal ServerIdentity ObjectIdentity
	{
		internal get { } //Length: 64
		internal set { } //Length: 64
	}

	protected MarshalByRefObject() { }

	public override ObjRef CreateObjRef(Type requestedType) { }

	internal ServerIdentity get_ObjectIdentity() { }

	public override object InitializeLifetimeService() { }

	internal void set_ObjectIdentity(ServerIdentity value) { }

}

