namespace UnityEngine.UI;

[AddComponentMenu(/*Cpp2IL Warning: missing at least one required parameter*/)]
[DisallowMultipleComponent]
[ExecuteAlways]
[RequireComponent(/*Cpp2IL Warning: missing at least one required parameter*/)]
public class CanvasScaler : UIBehaviour
{
	internal enum ScaleMode
	{
		ConstantPixelSize = 0,
		ScaleWithScreenSize = 1,
		ConstantPhysicalSize = 2,
	}

	internal enum ScreenMatchMode
	{
		MatchWidthOrHeight = 0,
		Expand = 1,
		Shrink = 2,
	}

	internal enum Unit
	{
		Centimeters = 0,
		Millimeters = 1,
		Inches = 2,
		Points = 3,
		Picas = 4,
	}

	private const float kLogBase = 2; //Field offset: 0x0
	[SerializeField]
	[Tooltip(/*Cpp2IL Warning: missing at least one required parameter*/)]
	private ScaleMode m_UiScaleMode; //Field offset: 0x18
	[SerializeField]
	[Tooltip(/*Cpp2IL Warning: missing at least one required parameter*/)]
	protected float m_ReferencePixelsPerUnit; //Field offset: 0x1C
	[SerializeField]
	[Tooltip(/*Cpp2IL Warning: missing at least one required parameter*/)]
	protected float m_ScaleFactor; //Field offset: 0x20
	[SerializeField]
	[Tooltip(/*Cpp2IL Warning: missing at least one required parameter*/)]
	protected Vector2 m_ReferenceResolution; //Field offset: 0x24
	[SerializeField]
	[Tooltip(/*Cpp2IL Warning: missing at least one required parameter*/)]
	protected ScreenMatchMode m_ScreenMatchMode; //Field offset: 0x2C
	[Range(/*Cpp2IL Warning: missing at least one required parameter*/)]
	[SerializeField]
	[Tooltip(/*Cpp2IL Warning: missing at least one required parameter*/)]
	protected float m_MatchWidthOrHeight; //Field offset: 0x30
	[SerializeField]
	[Tooltip(/*Cpp2IL Warning: missing at least one required parameter*/)]
	protected Unit m_PhysicalUnit; //Field offset: 0x34
	[SerializeField]
	[Tooltip(/*Cpp2IL Warning: missing at least one required parameter*/)]
	protected float m_FallbackScreenDPI; //Field offset: 0x38
	[SerializeField]
	[Tooltip(/*Cpp2IL Warning: missing at least one required parameter*/)]
	protected float m_DefaultSpriteDPI; //Field offset: 0x3C
	[SerializeField]
	[Tooltip(/*Cpp2IL Warning: missing at least one required parameter*/)]
	protected float m_DynamicPixelsPerUnit; //Field offset: 0x40
	private Canvas m_Canvas; //Field offset: 0x48
	private float m_PrevScaleFactor; //Field offset: 0x50
	private float m_PrevReferencePixelsPerUnit; //Field offset: 0x54
	[SerializeField]
	protected bool m_PresetInfoIsWorld; //Field offset: 0x58

	public float defaultSpriteDPI
	{
		 get { } //Length: 8
		 set { } //Length: 48
	}

	public float dynamicPixelsPerUnit
	{
		 get { } //Length: 8
		 set { } //Length: 8
	}

	public float fallbackScreenDPI
	{
		 get { } //Length: 8
		 set { } //Length: 8
	}

	public float matchWidthOrHeight
	{
		 get { } //Length: 8
		 set { } //Length: 8
	}

	public Unit physicalUnit
	{
		 get { } //Length: 8
		 set { } //Length: 8
	}

	public float referencePixelsPerUnit
	{
		 get { } //Length: 8
		 set { } //Length: 8
	}

	public Vector2 referenceResolution
	{
		 get { } //Length: 8
		 set { } //Length: 136
	}

	public float scaleFactor
	{
		 get { } //Length: 8
		 set { } //Length: 52
	}

	public ScreenMatchMode screenMatchMode
	{
		 get { } //Length: 8
		 set { } //Length: 8
	}

	public ScaleMode uiScaleMode
	{
		 get { } //Length: 8
		 set { } //Length: 8
	}

	protected CanvasScaler() { }

	private void Canvas_preWillRenderCanvases() { }

	public float get_defaultSpriteDPI() { }

	public float get_dynamicPixelsPerUnit() { }

	public float get_fallbackScreenDPI() { }

	public float get_matchWidthOrHeight() { }

	public Unit get_physicalUnit() { }

	public float get_referencePixelsPerUnit() { }

	public Vector2 get_referenceResolution() { }

	public float get_scaleFactor() { }

	public ScreenMatchMode get_screenMatchMode() { }

	public ScaleMode get_uiScaleMode() { }

	protected override void Handle() { }

	protected override void HandleConstantPhysicalSize() { }

	protected override void HandleConstantPixelSize() { }

	protected override void HandleScaleWithScreenSize() { }

	protected override void HandleWorldCanvas() { }

	protected virtual void OnDisable() { }

	protected virtual void OnEnable() { }

	public void set_defaultSpriteDPI(float value) { }

	public void set_dynamicPixelsPerUnit(float value) { }

	public void set_fallbackScreenDPI(float value) { }

	public void set_matchWidthOrHeight(float value) { }

	public void set_physicalUnit(Unit value) { }

	public void set_referencePixelsPerUnit(float value) { }

	public void set_referenceResolution(Vector2 value) { }

	public void set_scaleFactor(float value) { }

	public void set_screenMatchMode(ScreenMatchMode value) { }

	public void set_uiScaleMode(ScaleMode value) { }

	protected void SetReferencePixelsPerUnit(float referencePixelsPerUnit) { }

	protected void SetScaleFactor(float scaleFactor) { }

}

