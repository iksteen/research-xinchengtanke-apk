namespace UnityEngine.UI;

[Obsolete]
public abstract class BaseVertexEffect
{

	protected BaseVertexEffect() { }

	[EditorBrowsable(/*Cpp2IL Warning: missing at least one required parameter*/)]
	[Obsolete]
	public abstract void ModifyVertices(List<UIVertex> vertices) { }

}

