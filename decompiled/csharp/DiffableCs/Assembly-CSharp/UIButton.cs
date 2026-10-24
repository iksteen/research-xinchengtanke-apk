//Type is in global namespace

[AddComponentMenu(/*Cpp2IL Warning: missing at least one required parameter*/)]
public class UIButton : UIButtonColor
{
	public static UIButton current; //Field offset: 0x0
	public bool dragHighlight; //Field offset: 0x84
	public string hoverSprite; //Field offset: 0x88
	public string pressedSprite; //Field offset: 0x90
	public string disabledSprite; //Field offset: 0x98
	public Sprite hoverSprite2D; //Field offset: 0xA0
	public Sprite pressedSprite2D; //Field offset: 0xA8
	public Sprite disabledSprite2D; //Field offset: 0xB0
	public bool pixelSnap; //Field offset: 0xB8
	public List<EventDelegate> onClick; //Field offset: 0xC0
	private UISprite mSprite; //Field offset: 0xC8
	private UI2DSprite mSprite2D; //Field offset: 0xD0
	private string mNormalSprite; //Field offset: 0xD8
	private Sprite mNormalSprite2D; //Field offset: 0xE0
	private int mIgnoreFrame; //Field offset: 0xE8

	public virtual bool isEnabled
	{
		 get { } //Length: 328
		 set { } //Length: 660
	}

	public string normalSprite
	{
		 get { } //Length: 56
		 set { } //Length: 376
	}

	public Sprite normalSprite2D
	{
		 get { } //Length: 56
		 set { } //Length: 408
	}

	public UIButton() { }

	public virtual bool get_isEnabled() { }

	public string get_normalSprite() { }

	public Sprite get_normalSprite2D() { }

	protected override void OnClick() { }

	protected virtual void OnDragOut() { }

	protected virtual void OnDragOver() { }

	protected virtual void OnEnable() { }

	protected virtual void OnInit() { }

	public virtual void set_isEnabled(bool value) { }

	public void set_normalSprite(string value) { }

	public void set_normalSprite2D(Sprite value) { }

	protected void SetSprite(string sp) { }

	protected void SetSprite(Sprite sp) { }

	public virtual void SetState(State state, bool immediate) { }

}

