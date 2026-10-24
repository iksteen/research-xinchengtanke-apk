//Type is in global namespace

public abstract class UIRect : MonoBehaviour
{
	internal class AnchorPoint
	{
		public Transform target; //Field offset: 0x10
		public float relative; //Field offset: 0x18
		public int absolute; //Field offset: 0x1C
		public UIRect rect; //Field offset: 0x20
		public Camera targetCam; //Field offset: 0x28

		public AnchorPoint() { }

		public AnchorPoint(float relative) { }

		public Vector3[] GetSides(Transform relativeTo) { }

		public void Set(float relative, float absolute) { }

		public void Set(Transform target, float relative, float absolute) { }

		public void SetHorizontal(Transform parent, float localPos) { }

		public void SetToNearest(float abs0, float abs1, float abs2) { }

		public void SetToNearest(float rel0, float rel1, float rel2, float abs0, float abs1, float abs2) { }

		public void SetVertical(Transform parent, float localPos) { }

	}

	[DoNotObfuscateNGUI]
	internal enum AnchorUpdate
	{
		OnEnable = 0,
		OnUpdate = 1,
		OnStart = 2,
	}

	protected static Vector3[] mSides; //Field offset: 0x0
	public AnchorPoint leftAnchor; //Field offset: 0x18
	public AnchorPoint rightAnchor; //Field offset: 0x20
	public AnchorPoint bottomAnchor; //Field offset: 0x28
	public AnchorPoint topAnchor; //Field offset: 0x30
	public AnchorUpdate updateAnchors; //Field offset: 0x38
	protected GameObject mGo; //Field offset: 0x40
	protected Transform mTrans; //Field offset: 0x48
	protected BetterList<UIRect> mChildren; //Field offset: 0x50
	protected bool mChanged; //Field offset: 0x58
	protected bool mParentFound; //Field offset: 0x59
	private bool mUpdateAnchors; //Field offset: 0x5A
	private int mUpdateFrame; //Field offset: 0x5C
	private bool mAnchorsCached; //Field offset: 0x60
	private UIRoot mRoot; //Field offset: 0x68
	private UIRect mParent; //Field offset: 0x70
	private bool mRootSet; //Field offset: 0x78
	protected Camera mCam; //Field offset: 0x80
	protected bool mStarted; //Field offset: 0x88
	public float finalAlpha; //Field offset: 0x8C

	public abstract float alpha
	{
		 get { } //Length: 0
		 set { } //Length: 0
	}

	public Camera anchorCamera
	{
		 get { } //Length: 132
	}

	public GameObject cachedGameObject
	{
		 get { } //Length: 160
	}

	public Transform cachedTransform
	{
		 get { } //Length: 160
	}

	protected float cameraRayDistance
	{
		 get { } //Length: 632
	}

	public override bool canBeAnchored
	{
		 get { } //Length: 8
	}

	public bool isAnchored
	{
		 get { } //Length: 320
	}

	public override bool isAnchoredHorizontally
	{
		 get { } //Length: 196
	}

	public override bool isAnchoredVertically
	{
		 get { } //Length: 196
	}

	public bool isFullyAnchored
	{
		 get { } //Length: 300
	}

	public abstract Vector3[] localCorners
	{
		 get { } //Length: 0
	}

	public UIRect parent
	{
		 get { } //Length: 200
	}

	public UIRoot root
	{
		 get { } //Length: 288
	}

	public abstract Vector3[] worldCorners
	{
		 get { } //Length: 0
	}

	private static UIRect() { }

	protected UIRect() { }

	protected override void Awake() { }

	public abstract float CalculateFinalAlpha(int frameID) { }

	private void FindCameraFor(AnchorPoint ap) { }

	public abstract float get_alpha() { }

	public Camera get_anchorCamera() { }

	public GameObject get_cachedGameObject() { }

	public Transform get_cachedTransform() { }

	protected float get_cameraRayDistance() { }

	public override bool get_canBeAnchored() { }

	public bool get_isAnchored() { }

	public override bool get_isAnchoredHorizontally() { }

	public override bool get_isAnchoredVertically() { }

	public bool get_isFullyAnchored() { }

	public abstract Vector3[] get_localCorners() { }

	public UIRect get_parent() { }

	public UIRoot get_root() { }

	public abstract Vector3[] get_worldCorners() { }

	protected Vector3 GetLocalPos(AnchorPoint ac, Transform trans) { }

	public override Vector3[] GetSides(Transform relativeTo) { }

	public override void Invalidate(bool includeChildren) { }

	protected abstract void OnAnchor() { }

	protected override void OnDisable() { }

	protected override void OnEnable() { }

	protected override void OnInit() { }

	protected abstract void OnStart() { }

	protected override void OnUpdate() { }

	public override void ParentHasChanged() { }

	public void ResetAnchors() { }

	public void ResetAndUpdateAnchors() { }

	public abstract void set_alpha(float value) { }

	public void SetAnchor(GameObject go, float left, int leftOffset, float bottom, int bottomOffset, float right, int rightOffset, float top, int topOffset) { }

	public void SetAnchor(GameObject go, int left, int bottom, int right, int top) { }

	public void SetAnchor(GameObject go) { }

	public void SetAnchor(Transform t) { }

	public void SetAnchor(GameObject go, float left, float bottom, float right, float top) { }

	public void SetAnchor(float left, int leftOffset, float bottom, int bottomOffset, float right, int rightOffset, float top, int topOffset) { }

	public abstract void SetRect(float x, float y, float width, float height) { }

	public void SetScreenRect(int left, int top, int width, int height) { }

	public void Start() { }

	public void Update() { }

	public void UpdateAnchors() { }

	protected void UpdateAnchorsInternal(int frame) { }

}

