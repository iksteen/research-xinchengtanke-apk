namespace UnityEngine;

[NativeClass(/*Cpp2IL Warning: missing at least one required parameter*/)]
[NativeHeader(/*Cpp2IL Warning: missing at least one required parameter*/)]
public sealed class CanvasGroup : Behaviour, ICanvasRaycastFilter
{

	[NativeProperty]
	public float alpha
	{
		 get { } //Length: 64
		 set { } //Length: 80
	}

	[NativeProperty]
	public bool blocksRaycasts
	{
		 get { } //Length: 64
		 set { } //Length: 80
	}

	[NativeProperty]
	public bool ignoreParentGroups
	{
		 get { } //Length: 64
	}

	[NativeProperty]
	public bool interactable
	{
		 get { } //Length: 64
	}

	public float get_alpha() { }

	public bool get_blocksRaycasts() { }

	public bool get_ignoreParentGroups() { }

	public bool get_interactable() { }

	public override bool IsRaycastLocationValid(Vector2 sp, Camera eventCamera) { }

	public void set_alpha(float value) { }

	public void set_blocksRaycasts(bool value) { }

}

