namespace UnityEngine.UI;

[AddComponentMenu(/*Cpp2IL Warning: missing at least one required parameter*/)]
[RequireComponent(/*Cpp2IL Warning: missing at least one required parameter*/)]
public class RawImage : MaskableGraphic
{
	[FormerlySerializedAs(/*Cpp2IL Warning: missing at least one required parameter*/)]
	[SerializeField]
	private Texture m_Texture; //Field offset: 0xD0
	[SerializeField]
	private Rect m_UVRect; //Field offset: 0xD8

	public virtual Texture mainTexture
	{
		 get { } //Length: 392
	}

	public Texture texture
	{
		 get { } //Length: 8
		 set { } //Length: 200
	}

	public Rect uvRect
	{
		 get { } //Length: 12
		 set { } //Length: 144
	}

	protected RawImage() { }

	public virtual Texture get_mainTexture() { }

	public Texture get_texture() { }

	public Rect get_uvRect() { }

	protected virtual void OnDidApplyAnimationProperties() { }

	protected virtual void OnPopulateMesh(VertexHelper vh) { }

	public void set_texture(Texture value) { }

	public void set_uvRect(Rect value) { }

	public virtual void SetNativeSize() { }

}

