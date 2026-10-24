namespace MG_BlocksEngine2.Block;

[ExecuteInEditMode]
public class BE2_BlockVerticalLayout : MonoBehaviour, I_BE2_BlockLayout
{
	public Color blockColor; //Field offset: 0x18
	private RectTransform _rectTransform; //Field offset: 0x28
	private I_BE2_BlockSection[] _sectionsArray; //Field offset: 0x30

	public override Color Color
	{
		 get { } //Length: 12
		 set { } //Length: 12
	}

	public override RectTransform RectTransform
	{
		 get { } //Length: 8
		 set { } //Length: 8
	}

	public override I_BE2_BlockSection[] SectionsArray
	{
		 get { } //Length: 8
	}

	public override Vector2 Size
	{
		 get { } //Length: 528
	}

	public BE2_BlockVerticalLayout() { }

	private void Awake() { }

	public override Color get_Color() { }

	public override RectTransform get_RectTransform() { }

	public override I_BE2_BlockSection[] get_SectionsArray() { }

	public override Vector2 get_Size() { }

	public void Initialize() { }

	private void OnDisable() { }

	private void OnEnable() { }

	private void OnValidate() { }

	public override void set_Color(Color value) { }

	public override void set_RectTransform(RectTransform value) { }

	private void Start() { }

	public override void UpdateLayout() { }

}

