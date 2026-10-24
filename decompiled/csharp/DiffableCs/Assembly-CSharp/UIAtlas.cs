//Type is in global namespace

public class UIAtlas : MonoBehaviour, INGUIAtlas
{
	[CompilerGenerated]
	private sealed class <>c
	{
		public static readonly <>c <>9; //Field offset: 0x0
		public static Comparison<UISpriteData> <>9__28_0; //Field offset: 0x8

		private static <>c() { }

		public <>c() { }

		internal int <SortAlphabetically>b__28_0(UISpriteData s1, UISpriteData s2) { }

	}

	private enum Coordinates
	{
		Pixels = 0,
		TexCoords = 1,
	}

	private class Sprite
	{
		public string name; //Field offset: 0x10
		public Rect outer; //Field offset: 0x18
		public Rect inner; //Field offset: 0x28
		public bool rotated; //Field offset: 0x38
		public float paddingLeft; //Field offset: 0x3C
		public float paddingRight; //Field offset: 0x40
		public float paddingTop; //Field offset: 0x44
		public float paddingBottom; //Field offset: 0x48

		public bool hasPadding
		{
			 get { } //Length: 60
		}

		public Sprite() { }

		public bool get_hasPadding() { }

	}

	[HideInInspector]
	[SerializeField]
	private Material material; //Field offset: 0x18
	[HideInInspector]
	[SerializeField]
	private List<UISpriteData> mSprites; //Field offset: 0x20
	[HideInInspector]
	[SerializeField]
	private float mPixelSize; //Field offset: 0x28
	[HideInInspector]
	[SerializeField]
	private object mReplacement; //Field offset: 0x30
	[HideInInspector]
	[SerializeField]
	private Coordinates mCoordinates; //Field offset: 0x38
	[HideInInspector]
	[SerializeField]
	private List<Sprite> sprites; //Field offset: 0x40
	private int mPMA; //Field offset: 0x48
	private Dictionary<String, Int32> mSpriteIndices; //Field offset: 0x50

	public override float pixelSize
	{
		 get { } //Length: 196
		 set { } //Length: 264
	}

	public override bool premultipliedAlpha
	{
		 get { } //Length: 452
	}

	public override INGUIAtlas replacement
	{
		 get { } //Length: 76
		 set { } //Length: 524
	}

	public override List<UISpriteData> spriteList
	{
		 get { } //Length: 236
		 set { } //Length: 224
	}

	public override Material spriteMaterial
	{
		 get { } //Length: 192
		 set { } //Length: 352
	}

	public override Texture texture
	{
		 get { } //Length: 292
	}

	public UIAtlas() { }

	public override float get_pixelSize() { }

	public override bool get_premultipliedAlpha() { }

	public override INGUIAtlas get_replacement() { }

	public override List<UISpriteData> get_spriteList() { }

	public override Material get_spriteMaterial() { }

	public override Texture get_texture() { }

	public override BetterList<String> GetListOfSprites() { }

	public override BetterList<String> GetListOfSprites(string match) { }

	public override UISpriteData GetSprite(string name) { }

	public override void MarkAsChanged() { }

	public void MarkSpriteListAsChanged() { }

	public override bool References(INGUIAtlas atlas) { }

	public override void set_pixelSize(float value) { }

	public override void set_replacement(INGUIAtlas value) { }

	public override void set_spriteList(List<UISpriteData> value) { }

	public override void set_spriteMaterial(Material value) { }

	public override void SortAlphabetically() { }

	private bool Upgrade() { }

}

