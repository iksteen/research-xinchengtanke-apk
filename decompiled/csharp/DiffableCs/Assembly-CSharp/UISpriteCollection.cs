//Type is in global namespace

[AddComponentMenu(/*Cpp2IL Warning: missing at least one required parameter*/)]
[ExecuteInEditMode]
public class UISpriteCollection : UIBasicSprite
{
	internal sealed class OnClickCB : MulticastDelegate
	{

		public OnClickCB(object object, IntPtr method) { }

		public override IAsyncResult BeginInvoke(object obj, AsyncCallback callback, object object) { }

		public override void EndInvoke(IAsyncResult result) { }

		public override void Invoke(object obj) { }

	}

	internal sealed class OnDragCB : MulticastDelegate
	{

		public OnDragCB(object object, IntPtr method) { }

		public override IAsyncResult BeginInvoke(object obj, Vector2 delta, AsyncCallback callback, object object) { }

		public override void EndInvoke(IAsyncResult result) { }

		public override void Invoke(object obj, Vector2 delta) { }

	}

	internal sealed class OnHoverCB : MulticastDelegate
	{

		public OnHoverCB(object object, IntPtr method) { }

		public override IAsyncResult BeginInvoke(object obj, bool isOver, AsyncCallback callback, object object) { }

		public override void EndInvoke(IAsyncResult result) { }

		public override void Invoke(object obj, bool isOver) { }

	}

	internal sealed class OnPressCB : MulticastDelegate
	{

		public OnPressCB(object object, IntPtr method) { }

		public override IAsyncResult BeginInvoke(object obj, bool isPressed, AsyncCallback callback, object object) { }

		public override void EndInvoke(IAsyncResult result) { }

		public override void Invoke(object obj, bool isPressed) { }

	}

	internal sealed class OnTooltipCB : MulticastDelegate
	{

		public OnTooltipCB(object object, IntPtr method) { }

		public override IAsyncResult BeginInvoke(object obj, bool show, AsyncCallback callback, object object) { }

		public override void EndInvoke(IAsyncResult result) { }

		public override void Invoke(object obj, bool show) { }

	}

	internal struct Sprite
	{
		public UISpriteData sprite; //Field offset: 0x0
		public Vector2 pos; //Field offset: 0x8
		public float rot; //Field offset: 0x10
		public float width; //Field offset: 0x14
		public float height; //Field offset: 0x18
		public Color32 color; //Field offset: 0x1C
		public Vector2 pivot; //Field offset: 0x20
		public Type type; //Field offset: 0x28
		public Flip flip; //Field offset: 0x2C
		public bool enabled; //Field offset: 0x30

		public Vector4 GetDrawingDimensions(float pixelSize) { }

	}

	[HideInInspector]
	[SerializeField]
	private object mAtlas; //Field offset: 0x200
	private Dictionary<Object, Sprite> mSprites; //Field offset: 0x208
	private UISpriteData mSprite; //Field offset: 0x210
	public OnHoverCB onHover; //Field offset: 0x218
	public OnPressCB onPress; //Field offset: 0x220
	public OnClickCB onClick; //Field offset: 0x228
	public OnDragCB onDrag; //Field offset: 0x230
	public OnTooltipCB onTooltip; //Field offset: 0x238
	private object mLastHover; //Field offset: 0x240
	private object mLastPress; //Field offset: 0x248
	private object mLastTooltip; //Field offset: 0x250

	public INGUIAtlas atlas
	{
		 get { } //Length: 76
		 set { } //Length: 276
	}

	public virtual Vector4 border
	{
		 get { } //Length: 100
	}

	public virtual Texture mainTexture
	{
		 get { } //Length: 280
		 set { } //Length: 8
	}

	public virtual Material material
	{
		 get { } //Length: 264
		 set { } //Length: 8
	}

	protected virtual Vector4 padding
	{
		 get { } //Length: 124
	}

	public virtual float pixelSize
	{
		 get { } //Length: 196
	}

	public virtual bool premultipliedAlpha
	{
		 get { } //Length: 192
	}

	public UISpriteCollection() { }

	public void Add(object obj, string spriteName, Vector2 pos, float width, float height, Color32 color) { }

	public void Add(object obj, string spriteName, Vector2 pos, float width, float height) { }

	public void AddSprite(object id, string spriteName, Vector2 pos, float width, float height, Color32 color, Vector2 pivot, float rot = 0, Type type = 0, Flip flip = 0, bool enabled = true) { }

	[ContextMenu(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public void Clear() { }

	public INGUIAtlas get_atlas() { }

	public virtual Vector4 get_border() { }

	public virtual Texture get_mainTexture() { }

	public virtual Material get_material() { }

	protected virtual Vector4 get_padding() { }

	public virtual float get_pixelSize() { }

	public virtual bool get_premultipliedAlpha() { }

	public Nullable<Sprite> GetCurrentSprite(Vector3 worldPos) { }

	public Nullable<Sprite> GetCurrentSprite() { }

	public object GetCurrentSpriteID(Vector3 worldPos) { }

	public object GetCurrentSpriteID() { }

	public Nullable<Sprite> GetSprite(object id) { }

	public bool IsActive(object id) { }

	protected void OnClick() { }

	protected void OnDrag(Vector2 delta) { }

	public virtual void OnFill(List<Vector3> verts, List<Vector2> uvs, List<Color> cols) { }

	protected void OnHover(bool isOver) { }

	protected void OnMove(Vector2 delta) { }

	protected void OnPress(bool isPressed) { }

	protected void OnTooltip(bool show) { }

	public bool RemoveSprite(object id) { }

	private static Vector2 Rotate(Vector2 pos, float rot) { }

	public void set_atlas(INGUIAtlas value) { }

	public virtual void set_mainTexture(Texture value) { }

	public virtual void set_material(Material value) { }

	public bool SetActive(object id, bool visible) { }

	public bool SetPosition(object id, Vector2 pos, bool visible = true) { }

	public bool SetSprite(object id, Sprite sp) { }

}

