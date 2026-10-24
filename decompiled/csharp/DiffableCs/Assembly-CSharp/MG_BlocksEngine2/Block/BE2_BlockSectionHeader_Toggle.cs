namespace MG_BlocksEngine2.Block;

public class BE2_BlockSectionHeader_Toggle : MonoBehaviour, I_BE2_BlockSectionHeaderItem, I_BE2_BlockSectionHeaderInput
{
	private Toggle _toggle; //Field offset: 0x18
	private RectTransform _rectTransform; //Field offset: 0x20
	[CompilerGenerated]
	private I_BE2_Spot <Spot>k__BackingField; //Field offset: 0x28
	[CompilerGenerated]
	private float <FloatValue>k__BackingField; //Field offset: 0x30
	[CompilerGenerated]
	private string <StringValue>k__BackingField; //Field offset: 0x38
	[CompilerGenerated]
	private BE2_InputValues <InputValues>k__BackingField; //Field offset: 0x40

	public override float FloatValue
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	public override BE2_InputValues InputValues
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	public override Vector2 Size
	{
		 get { } //Length: 164
	}

	public override I_BE2_Spot Spot
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	public override string StringValue
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	public override Transform Transform
	{
		 get { } //Length: 8
	}

	public BE2_BlockSectionHeader_Toggle() { }

	[CompilerGenerated]
	private void <OnEnable>b__24_0(bool <p0>) { }

	private void Awake() { }

	[CompilerGenerated]
	public override float get_FloatValue() { }

	[CompilerGenerated]
	public override BE2_InputValues get_InputValues() { }

	public override Vector2 get_Size() { }

	[CompilerGenerated]
	public override I_BE2_Spot get_Spot() { }

	[CompilerGenerated]
	public override string get_StringValue() { }

	public override Transform get_Transform() { }

	private void OnDisable() { }

	private void OnEnable() { }

	private void OnValidate() { }

	[CompilerGenerated]
	public void set_FloatValue(float value) { }

	[CompilerGenerated]
	public void set_InputValues(BE2_InputValues value) { }

	[CompilerGenerated]
	public void set_Spot(I_BE2_Spot value) { }

	[CompilerGenerated]
	public void set_StringValue(string value) { }

	private void Start() { }

	public override void UpdateValues() { }

}

