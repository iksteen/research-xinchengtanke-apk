namespace MG_BlocksEngine2.Block;

[ExecuteInEditMode]
public class BE2_BlockNoViewLayout : MonoBehaviour, I_BE2_BlockLayout
{
	private RectTransform _rectTransform; //Field offset: 0x18
	private I_BE2_BlockSection[] _sectionsArray; //Field offset: 0x20
	[CompilerGenerated]
	private Color <Color>k__BackingField; //Field offset: 0x28

	public override Color Color
	{
		[CompilerGenerated]
		 get { } //Length: 12
		[CompilerGenerated]
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
		 get { } //Length: 8
	}

	public BE2_BlockNoViewLayout() { }

	private void Awake() { }

	[CompilerGenerated]
	public override Color get_Color() { }

	public override RectTransform get_RectTransform() { }

	public override I_BE2_BlockSection[] get_SectionsArray() { }

	public override Vector2 get_Size() { }

	public void Initialize() { }

	private void OnValidate() { }

	[CompilerGenerated]
	public override void set_Color(Color value) { }

	public override void set_RectTransform(RectTransform value) { }

	public override void UpdateLayout() { }

}

