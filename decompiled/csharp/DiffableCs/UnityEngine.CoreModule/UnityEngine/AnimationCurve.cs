namespace UnityEngine;

[DefaultMember(/*Cpp2IL Warning: missing at least one required parameter*/)]
[NativeHeader(/*Cpp2IL Warning: missing at least one required parameter*/)]
[RequiredByNativeCode]
public class AnimationCurve : IEquatable<AnimationCurve>
{
	internal IntPtr m_Ptr; //Field offset: 0x10

	public Keyframe[] keys
	{
		 get { } //Length: 64
		 set { } //Length: 80
	}

	public WrapMode postWrapMode
	{
		[NativeMethod]
		 set { } //Length: 80
	}

	public WrapMode preWrapMode
	{
		[NativeMethod]
		 set { } //Length: 80
	}

	public AnimationCurve(Keyframe[] keys) { }

	[RequiredByNativeCode]
	public AnimationCurve() { }

	public virtual bool Equals(object o) { }

	public override bool Equals(AnimationCurve other) { }

	[ThreadSafe]
	public float Evaluate(float time) { }

	protected virtual void Finalize() { }

	public Keyframe[] get_keys() { }

	public virtual int GetHashCode() { }

	[FreeFunction]
	private Keyframe[] GetKeys() { }

	[FreeFunction]
	private static IntPtr Internal_Create(Keyframe[] keys) { }

	[FreeFunction]
	private static void Internal_Destroy(IntPtr ptr) { }

	[FreeFunction]
	private bool Internal_Equals(IntPtr other) { }

	public void set_keys(Keyframe[] value) { }

	[NativeMethod]
	public void set_postWrapMode(WrapMode value) { }

	[NativeMethod]
	public void set_preWrapMode(WrapMode value) { }

	[FreeFunction]
	private void SetKeys(Keyframe[] keys) { }

}

