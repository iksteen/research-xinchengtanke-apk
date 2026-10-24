//Type is in global namespace

[AddComponentMenu(/*Cpp2IL Warning: missing at least one required parameter*/)]
[RequireComponent(/*Cpp2IL Warning: missing at least one required parameter*/)]
public class SpringPanel : MonoBehaviour
{
	internal sealed class OnFinished : MulticastDelegate
	{

		public OnFinished(object object, IntPtr method) { }

		public override IAsyncResult BeginInvoke(AsyncCallback callback, object object) { }

		public override void EndInvoke(IAsyncResult result) { }

		public override void Invoke() { }

	}

	public static SpringPanel current; //Field offset: 0x0
	public Vector3 target; //Field offset: 0x18
	public float strength; //Field offset: 0x24
	public OnFinished onFinished; //Field offset: 0x28
	private UIPanel mPanel; //Field offset: 0x30
	private Transform mTrans; //Field offset: 0x38
	private UIScrollView mDrag; //Field offset: 0x40
	private float mDelta; //Field offset: 0x48

	public SpringPanel() { }

	protected override void AdvanceTowardsPosition() { }

	public static SpringPanel Begin(GameObject go, Vector3 pos, float strength) { }

	private void Start() { }

	public static SpringPanel Stop(GameObject go) { }

	private void Update() { }

}

