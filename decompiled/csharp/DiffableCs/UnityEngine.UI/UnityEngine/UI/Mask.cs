namespace UnityEngine.UI;

[AddComponentMenu(/*Cpp2IL Warning: missing at least one required parameter*/)]
[DisallowMultipleComponent]
[ExecuteAlways]
[RequireComponent(/*Cpp2IL Warning: missing at least one required parameter*/)]
public class Mask : UIBehaviour, ICanvasRaycastFilter, IMaterialModifier
{
	private RectTransform m_RectTransform; //Field offset: 0x18
	[SerializeField]
	private bool m_ShowMaskGraphic; //Field offset: 0x20
	private Graphic m_Graphic; //Field offset: 0x28
	private Material m_MaskMaterial; //Field offset: 0x30
	private Material m_UnmaskMaterial; //Field offset: 0x38

	public Graphic graphic
	{
		 get { } //Length: 124
	}

	public RectTransform rectTransform
	{
		 get { } //Length: 124
	}

	public bool showMaskGraphic
	{
		 get { } //Length: 8
		 set { } //Length: 212
	}

	protected Mask() { }

	public Graphic get_graphic() { }

	public RectTransform get_rectTransform() { }

	public bool get_showMaskGraphic() { }

	public override Material GetModifiedMaterial(Material baseMaterial) { }

	public override bool IsRaycastLocationValid(Vector2 sp, Camera eventCamera) { }

	public override bool MaskEnabled() { }

	protected virtual void OnDisable() { }

	protected virtual void OnEnable() { }

	[Obsolete]
	public override void OnSiblingGraphicEnabledDisabled() { }

	public void set_showMaskGraphic(bool value) { }

}

