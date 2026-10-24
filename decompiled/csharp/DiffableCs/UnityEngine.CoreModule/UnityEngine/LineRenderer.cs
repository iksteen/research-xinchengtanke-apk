namespace UnityEngine;

[NativeHeader(/*Cpp2IL Warning: missing at least one required parameter*/)]
[NativeHeader(/*Cpp2IL Warning: missing at least one required parameter*/)]
public sealed class LineRenderer : Renderer
{

	public float endWidth
	{
		 set { } //Length: 80
	}

	[NativeProperty]
	public int positionCount
	{
		 set { } //Length: 80
	}

	public float startWidth
	{
		 set { } //Length: 80
	}

	public void set_endWidth(float value) { }

	public void set_positionCount(int value) { }

	public void set_startWidth(float value) { }

	public void SetPosition(int index, Vector3 position) { }

	private void SetPosition_Injected(int index, ref Vector3 position) { }

	[FreeFunction]
	public void SetPositions(Vector3[] positions) { }

}

