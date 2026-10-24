namespace System;

[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
public class WeakReference : ISerializable
{
	private bool isLongReference; //Field offset: 0x10
	private GCHandle gcHandle; //Field offset: 0x14

	public override bool IsAlive
	{
		 get { } //Length: 36
	}

	public override object Target
	{
		 get { } //Length: 68
		 set { } //Length: 12
	}

	public override bool TrackResurrection
	{
		 get { } //Length: 8
	}

	protected WeakReference() { }

	public WeakReference(object target) { }

	public WeakReference(object target, bool trackResurrection) { }

	protected WeakReference(SerializationInfo info, StreamingContext context) { }

	private void AllocateHandle(object target) { }

	protected virtual void Finalize() { }

	public override bool get_IsAlive() { }

	public override object get_Target() { }

	public override bool get_TrackResurrection() { }

	public override void GetObjectData(SerializationInfo info, StreamingContext context) { }

	public override void set_Target(object value) { }

}

