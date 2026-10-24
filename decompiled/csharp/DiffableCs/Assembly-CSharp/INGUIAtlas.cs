//Type is in global namespace

public interface INGUIAtlas
{

	public float pixelSize
	{
		 get { } //Length: 0
		 set { } //Length: 0
	}

	public bool premultipliedAlpha
	{
		 get { } //Length: 0
	}

	public INGUIAtlas replacement
	{
		 get { } //Length: 0
		 set { } //Length: 0
	}

	public List<UISpriteData> spriteList
	{
		 get { } //Length: 0
		 set { } //Length: 0
	}

	public Material spriteMaterial
	{
		 get { } //Length: 0
		 set { } //Length: 0
	}

	public Texture texture
	{
		 get { } //Length: 0
	}

	public float get_pixelSize() { }

	public bool get_premultipliedAlpha() { }

	public INGUIAtlas get_replacement() { }

	public List<UISpriteData> get_spriteList() { }

	public Material get_spriteMaterial() { }

	public Texture get_texture() { }

	public BetterList<String> GetListOfSprites() { }

	public BetterList<String> GetListOfSprites(string match) { }

	public UISpriteData GetSprite(string name) { }

	public void MarkAsChanged() { }

	public bool References(INGUIAtlas atlas) { }

	public void set_pixelSize(float value) { }

	public void set_replacement(INGUIAtlas value) { }

	public void set_spriteList(List<UISpriteData> value) { }

	public void set_spriteMaterial(Material value) { }

	public void SortAlphabetically() { }

}

