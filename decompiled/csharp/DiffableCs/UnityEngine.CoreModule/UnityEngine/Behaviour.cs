namespace UnityEngine;

[NativeHeader(/*Cpp2IL Warning: missing at least one required parameter*/)]
[UsedByNativeCode]
public class Behaviour : Component
{

	[NativeProperty]
	[RequiredByNativeCode]
	public bool enabled
	{
		 get { } //Length: 64
		 set { } //Length: 80
	}

	[NativeProperty]
	public bool isActiveAndEnabled
	{
		[NativeMethod]
		 get { } //Length: 64
	}

	public Behaviour() { }

	public bool get_enabled() { }

	[NativeMethod]
	public bool get_isActiveAndEnabled() { }

	public void set_enabled(bool value) { }

}

