namespace UnityEngine;

[NativeHeader(/*Cpp2IL Warning: missing at least one required parameter*/)]
[RequireComponent(/*Cpp2IL Warning: missing at least one required parameter*/)]
public sealed class MeshFilter : Component
{

	public Mesh mesh
	{
		[NativeName(/*Cpp2IL Warning: missing at least one required parameter*/)]
		 get { } //Length: 64
		[NativeName(/*Cpp2IL Warning: missing at least one required parameter*/)]
		 set { } //Length: 80
	}

	public Mesh sharedMesh
	{
		 set { } //Length: 80
	}

	[RequiredByNativeCode]
	private void DontStripMeshFilter() { }

	[NativeName(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public Mesh get_mesh() { }

	[NativeName(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public void set_mesh(Mesh value) { }

	public void set_sharedMesh(Mesh value) { }

}

