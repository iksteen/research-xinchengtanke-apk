namespace UnityEngine;

[NativeHeader(/*Cpp2IL Warning: missing at least one required parameter*/)]
[NativeHeader(/*Cpp2IL Warning: missing at least one required parameter*/)]
[NativeHeader(/*Cpp2IL Warning: missing at least one required parameter*/)]
[UsedByNativeCode]
public class Animator : Behaviour
{

	public bool hasBoundPlayables
	{
		[NativeMethod]
		 get { } //Length: 64
	}

	[NativeMethod]
	public bool get_hasBoundPlayables() { }

	private void GetAnimatorStateInfo(int layerIndex, StateInfoIndex stateInfoIndex, out AnimatorStateInfo info) { }

	public AnimatorStateInfo GetCurrentAnimatorStateInfo(int layerIndex) { }

	public void Play(string stateName, int layer, float normalizedTime) { }

	[FreeFunction]
	public void Play(int stateNameHash, int layer, float normalizedTime) { }

	public void ResetTrigger(string name) { }

	[FreeFunction]
	private void ResetTriggerString(string name) { }

	public void SetTrigger(string name) { }

	[FreeFunction]
	private void SetTriggerString(string name) { }

	[NativeMethod]
	public static int StringToHash(string name) { }

	[NativeMethod]
	public void Update(float deltaTime) { }

}

