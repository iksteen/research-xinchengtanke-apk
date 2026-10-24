namespace UnityEngine.UI;

[AddComponentMenu(/*Cpp2IL Warning: missing at least one required parameter*/)]
[DisallowMultipleComponent]
[ExecuteAlways]
[RequireComponent(/*Cpp2IL Warning: missing at least one required parameter*/)]
public class RectMask2D : UIBehaviour, IClipper, ICanvasRaycastFilter
{
	private readonly RectangularVertexClipper m_VertexClipper; //Field offset: 0x18
	private RectTransform m_RectTransform; //Field offset: 0x20
	private HashSet<MaskableGraphic> m_MaskableTargets; //Field offset: 0x28
	private HashSet<IClippable> m_ClipTargets; //Field offset: 0x30
	private bool m_ShouldRecalculateClipRects; //Field offset: 0x38
	private List<RectMask2D> m_Clippers; //Field offset: 0x40
	private Rect m_LastClipRectCanvasSpace; //Field offset: 0x48
	private bool m_ForceClip; //Field offset: 0x58
	[SerializeField]
	private Vector4 m_Padding; //Field offset: 0x5C
	[SerializeField]
	private Vector2Int m_Softness; //Field offset: 0x6C
	private Canvas m_Canvas; //Field offset: 0x78
	private Vector3[] m_Corners; //Field offset: 0x80

	internal Canvas Canvas
	{
		internal get { } //Length: 400
	}

	public Rect canvasRect
	{
		 get { } //Length: 76
	}

	public Vector4 padding
	{
		 get { } //Length: 12
		 set { } //Length: 12
	}

	public RectTransform rectTransform
	{
		 get { } //Length: 124
	}

	private Rect rootCanvasRect
	{
		private get { } //Length: 308
	}

	public Vector2Int softness
	{
		 get { } //Length: 8
		 set { } //Length: 72
	}

	protected RectMask2D() { }

	public void AddClippable(IClippable clippable) { }

	internal Canvas get_Canvas() { }

	public Rect get_canvasRect() { }

	public Vector4 get_padding() { }

	public RectTransform get_rectTransform() { }

	private Rect get_rootCanvasRect() { }

	public Vector2Int get_softness() { }

	public override bool IsRaycastLocationValid(Vector2 sp, Camera eventCamera) { }

	protected virtual void OnCanvasHierarchyChanged() { }

	protected virtual void OnDestroy() { }

	protected virtual void OnDisable() { }

	protected virtual void OnEnable() { }

	protected virtual void OnTransformParentChanged() { }

	public override void PerformClipping() { }

	public void RemoveClippable(IClippable clippable) { }

	public void set_padding(Vector4 value) { }

	public void set_softness(Vector2Int value) { }

	public override void UpdateClipSoftness() { }

}

