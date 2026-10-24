//Type is in global namespace

[AddComponentMenu(/*Cpp2IL Warning: missing at least one required parameter*/)]
public class SpringPosition : MonoBehaviour
{
	internal sealed class OnFinished : MulticastDelegate
	{

		public OnFinished(object object, IntPtr method) { }

		public override IAsyncResult BeginInvoke(AsyncCallback callback, object object) { }

		public override void EndInvoke(IAsyncResult result) { }

		public override void Invoke() { }

	}

	public static SpringPosition current; //Field offset: 0x0
	public Vector3 target; //Field offset: 0x18
	public float strength; //Field offset: 0x24
	public bool worldSpace; //Field offset: 0x28
	public bool ignoreTimeScale; //Field offset: 0x29
	public bool updateScrollView; //Field offset: 0x2A
	public OnFinished onFinished; //Field offset: 0x30
	[HideInInspector]
	[SerializeField]
	private GameObject eventReceiver; //Field offset: 0x38
	[HideInInspector]
	[SerializeField]
	public string callWhenFinished; //Field offset: 0x40
	private Transform mTrans; //Field offset: 0x48
	private float mThreshold; //Field offset: 0x50
	private UIScrollView mSv; //Field offset: 0x58

	public SpringPosition() { }

	public static SpringPosition Begin(GameObject go, Vector3 pos, float strength) { }

	public void Finish() { }

	private void NotifyListeners() { }

	private void Start() { }

	private void Update() { }

}

