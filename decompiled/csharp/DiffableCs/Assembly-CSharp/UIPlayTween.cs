//Type is in global namespace

[AddComponentMenu(/*Cpp2IL Warning: missing at least one required parameter*/)]
[ExecuteInEditMode]
public class UIPlayTween : MonoBehaviour
{
	public static UIPlayTween current; //Field offset: 0x0
	public GameObject tweenTarget; //Field offset: 0x18
	public int tweenGroup; //Field offset: 0x20
	public Trigger trigger; //Field offset: 0x24
	public Direction playDirection; //Field offset: 0x28
	public bool resetOnPlay; //Field offset: 0x2C
	public bool resetIfDisabled; //Field offset: 0x2D
	[Tooltip(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public bool setState; //Field offset: 0x2E
	[Range(/*Cpp2IL Warning: missing at least one required parameter*/)]
	[Tooltip(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public float startState; //Field offset: 0x30
	public EnableCondition ifDisabledOnPlay; //Field offset: 0x34
	public DisableCondition disableWhenFinished; //Field offset: 0x38
	public bool includeChildren; //Field offset: 0x3C
	public List<EventDelegate> onFinished; //Field offset: 0x40
	[HideInInspector]
	[SerializeField]
	private GameObject eventReceiver; //Field offset: 0x48
	[HideInInspector]
	[SerializeField]
	private string callWhenFinished; //Field offset: 0x50
	private UITweener[] mTweens; //Field offset: 0x58
	private bool mStarted; //Field offset: 0x60
	private int mActive; //Field offset: 0x64
	private bool mActivated; //Field offset: 0x68

	public bool isActive
	{
		 get { } //Length: 16
	}

	public UIPlayTween() { }

	private void Awake() { }

	private void CustomHoverListener(GameObject go, bool isOver) { }

	public bool get_isActive() { }

	private void OnClick() { }

	private void OnDisable() { }

	private void OnDoubleClick() { }

	private void OnDragOut() { }

	private void OnDragOver() { }

	private void OnEnable() { }

	private void OnFinished() { }

	private void OnHover(bool isOver) { }

	private void OnPress(bool isPressed) { }

	private void OnSelect(bool isSelected) { }

	private void OnToggle() { }

	[ContextMenu(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public void Play() { }

	public void Play(bool forward) { }

	[ContextMenu(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public void PlayReverse() { }

	private void Start() { }

	[ContextMenu(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public void Stop() { }

	private void Update() { }

}

