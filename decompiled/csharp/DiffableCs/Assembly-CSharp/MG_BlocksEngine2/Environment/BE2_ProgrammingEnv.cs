namespace MG_BlocksEngine2.Environment;

public class BE2_ProgrammingEnv : MonoBehaviour, I_BE2_ProgrammingEnv
{
	private Transform _transform; //Field offset: 0x18
	private RectTransform _rectTransform; //Field offset: 0x20
	[CompilerGenerated]
	private List<I_BE2_Block> <BlocksList>k__BackingField; //Field offset: 0x28
	public BE2_TargetObject targetObject; //Field offset: 0x30
	[SerializeField]
	private bool _visible; //Field offset: 0x38
	private CanvasGroup _parentCanvasGroup; //Field offset: 0x40
	private GraphicRaycaster _parentGraphicRaycaster; //Field offset: 0x48

	public override List<I_BE2_Block> BlocksList
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	public override I_BE2_TargetObject TargetObject
	{
		 get { } //Length: 8
	}

	public override Transform Transform
	{
		 get { } //Length: 136
	}

	public override bool Visible
	{
		 get { } //Length: 8
		 set { } //Length: 256
	}

	public BE2_ProgrammingEnv() { }

	private void Awake() { }

	public override void ClearBlocks() { }

	[CompilerGenerated]
	public override List<I_BE2_Block> get_BlocksList() { }

	public override I_BE2_TargetObject get_TargetObject() { }

	public override Transform get_Transform() { }

	public override bool get_Visible() { }

	private void OnValidate() { }

	public void OpenContextMenu() { }

	[CompilerGenerated]
	public void set_BlocksList(List<I_BE2_Block> value) { }

	public override void set_Visible(bool value) { }

	private void Start() { }

	public override void UpdateBlocksList() { }

}

