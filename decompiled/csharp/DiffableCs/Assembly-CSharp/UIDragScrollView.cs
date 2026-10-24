//Type is in global namespace

[AddComponentMenu(/*Cpp2IL Warning: missing at least one required parameter*/)]
public class UIDragScrollView : MonoBehaviour
{
	public UIScrollView scrollView; //Field offset: 0x18
	[HideInInspector]
	[SerializeField]
	private UIScrollView draggablePanel; //Field offset: 0x20
	private Transform mTrans; //Field offset: 0x28
	private UIScrollView mScroll; //Field offset: 0x30
	private bool mAutoFind; //Field offset: 0x38
	private bool mStarted; //Field offset: 0x39
	private bool mPressed; //Field offset: 0x3A

	public UIDragScrollView() { }

	private void FindScrollView() { }

	private void OnDisable() { }

	private void OnDrag(Vector2 delta) { }

	private void OnEnable() { }

	public void OnPan(Vector2 delta) { }

	private void OnPress(bool pressed) { }

	private void OnScroll(float delta) { }

	private void Start() { }

}

