//Type is in global namespace

[AddComponentMenu(/*Cpp2IL Warning: missing at least one required parameter*/)]
public class UICenterOnChild : MonoBehaviour
{
	internal sealed class OnCenterCallback : MulticastDelegate
	{

		public OnCenterCallback(object object, IntPtr method) { }

		public override IAsyncResult BeginInvoke(GameObject centeredObject, AsyncCallback callback, object object) { }

		public override void EndInvoke(IAsyncResult result) { }

		public override void Invoke(GameObject centeredObject) { }

	}

	public float springStrength; //Field offset: 0x18
	public float nextPageThreshold; //Field offset: 0x1C
	public OnFinished onFinished; //Field offset: 0x20
	public OnCenterCallback onCenter; //Field offset: 0x28
	private UIScrollView mScrollView; //Field offset: 0x30
	private GameObject mCenteredObject; //Field offset: 0x38

	public GameObject centeredObject
	{
		 get { } //Length: 8
	}

	public UICenterOnChild() { }

	private void CenterOn(Transform target, Vector3 panelCenter) { }

	public void CenterOn(Transform target) { }

	public GameObject get_centeredObject() { }

	private void OnDisable() { }

	private void OnDragFinished() { }

	private void OnEnable() { }

	private void OnValidate() { }

	[ContextMenu(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public void Recenter() { }

	private void Start() { }

}

