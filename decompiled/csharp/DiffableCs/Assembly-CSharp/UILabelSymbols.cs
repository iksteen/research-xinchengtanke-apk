//Type is in global namespace

[HideInInspector]
public class UILabelSymbols : UIWidget
{
	public UILabel label; //Field offset: 0x190
	public int fillFrame; //Field offset: 0x198
	public List<Vector3> cacheVerts; //Field offset: 0x1A0
	public List<Vector2> cacheUVs; //Field offset: 0x1A8
	public List<Color> cacheCols; //Field offset: 0x1B0
	public List<Vector3> symbolVerts; //Field offset: 0x1B8
	public List<Vector2> symbolUVs; //Field offset: 0x1C0
	public List<Color> symbolCols; //Field offset: 0x1C8

	public virtual bool isSelectable
	{
		 get { } //Length: 8
	}

	public virtual Material material
	{
		 get { } //Length: 308
	}

	public UILabelSymbols() { }

	public void ClearCache() { }

	public virtual bool get_isSelectable() { }

	public virtual Material get_material() { }

	protected virtual void OnDisable() { }

	public virtual void OnFill(List<Vector3> verts, List<Vector2> uvs, List<Color> cols) { }

}

