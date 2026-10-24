//Type is in global namespace

[AddComponentMenu(/*Cpp2IL Warning: missing at least one required parameter*/)]
[ExecuteInEditMode]
public class UIPlayAnimation : MonoBehaviour
{
	public static UIPlayAnimation current; //Field offset: 0x0
	public Animation target; //Field offset: 0x18
	public Animator animator; //Field offset: 0x20
	public string clipName; //Field offset: 0x28
	public Trigger trigger; //Field offset: 0x30
	public Direction playDirection; //Field offset: 0x34
	public bool resetOnPlay; //Field offset: 0x38
	public bool clearSelection; //Field offset: 0x39
	public EnableCondition ifDisabledOnPlay; //Field offset: 0x3C
	public DisableCondition disableWhenFinished; //Field offset: 0x40
	public List<EventDelegate> onFinished; //Field offset: 0x48
	[HideInInspector]
	[SerializeField]
	private GameObject eventReceiver; //Field offset: 0x50
	[HideInInspector]
	[SerializeField]
	private string callWhenFinished; //Field offset: 0x58
	private bool mStarted; //Field offset: 0x60
	private bool mActivated; //Field offset: 0x61
	private bool dragHighlight; //Field offset: 0x62

	private bool dualState
	{
		private get { } //Length: 20
	}

	private static UIPlayAnimation() { }

	public UIPlayAnimation() { }

	private void Awake() { }

	private bool get_dualState() { }

	private void OnClick() { }

	private void OnDisable() { }

	private void OnDoubleClick() { }

	private void OnDragOut() { }

	private void OnDragOver() { }

	private void OnDrop(GameObject go) { }

	private void OnEnable() { }

	private void OnFinished() { }

	private void OnHover(bool isOver) { }

	private void OnPress(bool isPressed) { }

	private void OnSelect(bool isSelected) { }

	private void OnToggle() { }

	public void Play(bool forward) { }

	public void Play(bool forward, bool onlyIfDifferent) { }

	public void PlayForward() { }

	public void PlayReverse() { }

	private void Start() { }

}

