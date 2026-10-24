namespace UnityEngine.UI;

[AddComponentMenu(/*Cpp2IL Warning: missing at least one required parameter*/)]
[DisallowMultipleComponent]
[ExecuteAlways]
[RequireComponent(/*Cpp2IL Warning: missing at least one required parameter*/)]
[SelectionBase]
public class ScrollRect : UIBehaviour, IInitializePotentialDragHandler, IEventSystemHandler, IBeginDragHandler, IEndDragHandler, IDragHandler, IScrollHandler, ICanvasElement, ILayoutElement, ILayoutGroup, ILayoutController
{
	internal enum MovementType
	{
		Unrestricted = 0,
		Elastic = 1,
		Clamped = 2,
	}

	internal enum ScrollbarVisibility
	{
		Permanent = 0,
		AutoHide = 1,
		AutoHideAndExpandViewport = 2,
	}

	internal class ScrollRectEvent : UnityEvent<Vector2>
	{

		public ScrollRectEvent() { }

	}

	[SerializeField]
	private RectTransform m_Content; //Field offset: 0x18
	[SerializeField]
	private bool m_Horizontal; //Field offset: 0x20
	[SerializeField]
	private bool m_Vertical; //Field offset: 0x21
	[SerializeField]
	private MovementType m_MovementType; //Field offset: 0x24
	[SerializeField]
	private float m_Elasticity; //Field offset: 0x28
	[SerializeField]
	private bool m_Inertia; //Field offset: 0x2C
	[SerializeField]
	private float m_DecelerationRate; //Field offset: 0x30
	[SerializeField]
	private float m_ScrollSensitivity; //Field offset: 0x34
	[SerializeField]
	private RectTransform m_Viewport; //Field offset: 0x38
	[SerializeField]
	private Scrollbar m_HorizontalScrollbar; //Field offset: 0x40
	[SerializeField]
	private Scrollbar m_VerticalScrollbar; //Field offset: 0x48
	[SerializeField]
	private ScrollbarVisibility m_HorizontalScrollbarVisibility; //Field offset: 0x50
	[SerializeField]
	private ScrollbarVisibility m_VerticalScrollbarVisibility; //Field offset: 0x54
	[SerializeField]
	private float m_HorizontalScrollbarSpacing; //Field offset: 0x58
	[SerializeField]
	private float m_VerticalScrollbarSpacing; //Field offset: 0x5C
	[SerializeField]
	private ScrollRectEvent m_OnValueChanged; //Field offset: 0x60
	private Vector2 m_PointerStartLocalCursor; //Field offset: 0x68
	protected Vector2 m_ContentStartPosition; //Field offset: 0x70
	private RectTransform m_ViewRect; //Field offset: 0x78
	protected Bounds m_ContentBounds; //Field offset: 0x80
	private Bounds m_ViewBounds; //Field offset: 0x98
	private Vector2 m_Velocity; //Field offset: 0xB0
	private bool m_Dragging; //Field offset: 0xB8
	private bool m_Scrolling; //Field offset: 0xB9
	private Vector2 m_PrevPosition; //Field offset: 0xBC
	private Bounds m_PrevContentBounds; //Field offset: 0xC4
	private Bounds m_PrevViewBounds; //Field offset: 0xDC
	private bool m_HasRebuiltLayout; //Field offset: 0xF4
	private bool m_HSliderExpand; //Field offset: 0xF5
	private bool m_VSliderExpand; //Field offset: 0xF6
	private float m_HSliderHeight; //Field offset: 0xF8
	private float m_VSliderWidth; //Field offset: 0xFC
	private RectTransform m_Rect; //Field offset: 0x100
	private RectTransform m_HorizontalScrollbarRect; //Field offset: 0x108
	private RectTransform m_VerticalScrollbarRect; //Field offset: 0x110
	private DrivenRectTransformTracker m_Tracker; //Field offset: 0x118
	private readonly Vector3[] m_Corners; //Field offset: 0x120

	public RectTransform content
	{
		 get { } //Length: 8
		 set { } //Length: 8
	}

	public float decelerationRate
	{
		 get { } //Length: 8
		 set { } //Length: 8
	}

	public float elasticity
	{
		 get { } //Length: 8
		 set { } //Length: 8
	}

	public override float flexibleHeight
	{
		 get { } //Length: 8
	}

	public override float flexibleWidth
	{
		 get { } //Length: 8
	}

	public bool horizontal
	{
		 get { } //Length: 8
		 set { } //Length: 12
	}

	public float horizontalNormalizedPosition
	{
		 get { } //Length: 260
		 set { } //Length: 20
	}

	public Scrollbar horizontalScrollbar
	{
		 get { } //Length: 8
		 set { } //Length: 448
	}

	public float horizontalScrollbarSpacing
	{
		 get { } //Length: 8
		 set { } //Length: 8
	}

	public ScrollbarVisibility horizontalScrollbarVisibility
	{
		 get { } //Length: 8
		 set { } //Length: 8
	}

	private bool hScrollingNeeded
	{
		private get { } //Length: 104
	}

	public bool inertia
	{
		 get { } //Length: 8
		 set { } //Length: 12
	}

	public override int layoutPriority
	{
		 get { } //Length: 8
	}

	public override float minHeight
	{
		 get { } //Length: 8
	}

	public override float minWidth
	{
		 get { } //Length: 8
	}

	public MovementType movementType
	{
		 get { } //Length: 8
		 set { } //Length: 8
	}

	public Vector2 normalizedPosition
	{
		 get { } //Length: 60
		 set { } //Length: 84
	}

	public ScrollRectEvent onValueChanged
	{
		 get { } //Length: 8
		 set { } //Length: 8
	}

	public override float preferredHeight
	{
		 get { } //Length: 8
	}

	public override float preferredWidth
	{
		 get { } //Length: 8
	}

	private RectTransform rectTransform
	{
		private get { } //Length: 180
	}

	public float scrollSensitivity
	{
		 get { } //Length: 8
		 set { } //Length: 8
	}

	public Vector2 velocity
	{
		 get { } //Length: 8
		 set { } //Length: 8
	}

	public bool vertical
	{
		 get { } //Length: 8
		 set { } //Length: 12
	}

	public float verticalNormalizedPosition
	{
		 get { } //Length: 256
		 set { } //Length: 20
	}

	public Scrollbar verticalScrollbar
	{
		 get { } //Length: 8
		 set { } //Length: 448
	}

	public float verticalScrollbarSpacing
	{
		 get { } //Length: 8
		 set { } //Length: 8
	}

	public ScrollbarVisibility verticalScrollbarVisibility
	{
		 get { } //Length: 8
		 set { } //Length: 8
	}

	public RectTransform viewport
	{
		 get { } //Length: 8
		 set { } //Length: 40
	}

	protected RectTransform viewRect
	{
		 get { } //Length: 276
	}

	private bool vScrollingNeeded
	{
		private get { } //Length: 104
	}

	protected ScrollRect() { }

	internal static void AdjustBounds(ref Bounds viewBounds, ref Vector2 contentPivot, ref Vector3 contentSize, ref Vector3 contentPos) { }

	public override void CalculateLayoutInputHorizontal() { }

	public override void CalculateLayoutInputVertical() { }

	private Vector2 CalculateOffset(Vector2 delta) { }

	private void EnsureLayoutHasRebuilt() { }

	public RectTransform get_content() { }

	public float get_decelerationRate() { }

	public float get_elasticity() { }

	public override float get_flexibleHeight() { }

	public override float get_flexibleWidth() { }

	public bool get_horizontal() { }

	public float get_horizontalNormalizedPosition() { }

	public Scrollbar get_horizontalScrollbar() { }

	public float get_horizontalScrollbarSpacing() { }

	public ScrollbarVisibility get_horizontalScrollbarVisibility() { }

	private bool get_hScrollingNeeded() { }

	public bool get_inertia() { }

	public override int get_layoutPriority() { }

	public override float get_minHeight() { }

	public override float get_minWidth() { }

	public MovementType get_movementType() { }

	public Vector2 get_normalizedPosition() { }

	public ScrollRectEvent get_onValueChanged() { }

	public override float get_preferredHeight() { }

	public override float get_preferredWidth() { }

	private RectTransform get_rectTransform() { }

	public float get_scrollSensitivity() { }

	public Vector2 get_velocity() { }

	public bool get_vertical() { }

	public float get_verticalNormalizedPosition() { }

	public Scrollbar get_verticalScrollbar() { }

	public float get_verticalScrollbarSpacing() { }

	public ScrollbarVisibility get_verticalScrollbarVisibility() { }

	public RectTransform get_viewport() { }

	protected RectTransform get_viewRect() { }

	private bool get_vScrollingNeeded() { }

	private Bounds GetBounds() { }

	public override void GraphicUpdateComplete() { }

	internal static Vector2 InternalCalculateOffset(ref Bounds viewBounds, ref Bounds contentBounds, bool horizontal, bool vertical, MovementType movementType, ref Vector2 delta) { }

	internal static Bounds InternalGetBounds(Vector3[] corners, ref Matrix4x4 viewWorldToLocalMatrix) { }

	public virtual bool IsActive() { }

	protected override void LateUpdate() { }

	public override void LayoutComplete() { }

	public override void OnBeginDrag(PointerEventData eventData) { }

	protected virtual void OnDisable() { }

	public override void OnDrag(PointerEventData eventData) { }

	protected virtual void OnEnable() { }

	public override void OnEndDrag(PointerEventData eventData) { }

	public override void OnInitializePotentialDrag(PointerEventData eventData) { }

	protected virtual void OnRectTransformDimensionsChange() { }

	public override void OnScroll(PointerEventData data) { }

	public override void Rebuild(CanvasUpdate executing) { }

	private static float RubberDelta(float overStretching, float viewSize) { }

	public void set_content(RectTransform value) { }

	public void set_decelerationRate(float value) { }

	public void set_elasticity(float value) { }

	public void set_horizontal(bool value) { }

	public void set_horizontalNormalizedPosition(float value) { }

	public void set_horizontalScrollbar(Scrollbar value) { }

	public void set_horizontalScrollbarSpacing(float value) { }

	public void set_horizontalScrollbarVisibility(ScrollbarVisibility value) { }

	public void set_inertia(bool value) { }

	public void set_movementType(MovementType value) { }

	public void set_normalizedPosition(Vector2 value) { }

	public void set_onValueChanged(ScrollRectEvent value) { }

	public void set_scrollSensitivity(float value) { }

	public void set_velocity(Vector2 value) { }

	public void set_vertical(bool value) { }

	public void set_verticalNormalizedPosition(float value) { }

	public void set_verticalScrollbar(Scrollbar value) { }

	public void set_verticalScrollbarSpacing(float value) { }

	public void set_verticalScrollbarVisibility(ScrollbarVisibility value) { }

	public void set_viewport(RectTransform value) { }

	protected override void SetContentAnchoredPosition(Vector2 position) { }

	protected void SetDirty() { }

	protected void SetDirtyCaching() { }

	private void SetHorizontalNormalizedPosition(float value) { }

	public override void SetLayoutHorizontal() { }

	public override void SetLayoutVertical() { }

	protected override void SetNormalizedPosition(float value, int axis) { }

	private void SetVerticalNormalizedPosition(float value) { }

	public override void StopMovement() { }

	private override Transform UnityEngine.UI.ICanvasElement.get_transform() { }

	protected void UpdateBounds() { }

	private void UpdateCachedData() { }

	private static void UpdateOneScrollbarVisibility(bool xScrollingNeeded, bool xAxisEnabled, ScrollbarVisibility scrollbarVisibility, Scrollbar scrollbar) { }

	protected void UpdatePrevData() { }

	private void UpdateScrollbarLayout() { }

	private void UpdateScrollbars(Vector2 offset) { }

	private void UpdateScrollbarVisibility() { }

}

