namespace UnityEngine.UI;

public interface IMeshModifier
{

	[Obsolete]
	public void ModifyMesh(Mesh mesh) { }

	public void ModifyMesh(VertexHelper verts) { }

}

