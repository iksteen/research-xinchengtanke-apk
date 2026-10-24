//Type is in global namespace

[AddComponentMenu(/*Cpp2IL Warning: missing at least one required parameter*/)]
public class UIEventListener : MonoBehaviour
{
	internal sealed class BoolDelegate : MulticastDelegate
	{

		public BoolDelegate(object object, IntPtr method) { }

		public override IAsyncResult BeginInvoke(GameObject go, bool state, AsyncCallback callback, object object) { }

		public override void EndInvoke(IAsyncResult result) { }

		public override void Invoke(GameObject go, bool state) { }

	}

	internal sealed class FloatDelegate : MulticastDelegate
	{

		public FloatDelegate(object object, IntPtr method) { }

		public override IAsyncResult BeginInvoke(GameObject go, float delta, AsyncCallback callback, object object) { }

		public override void EndInvoke(IAsyncResult result) { }

		public override void Invoke(GameObject go, float delta) { }

	}

	internal sealed class KeyCodeDelegate : MulticastDelegate
	{

		public KeyCodeDelegate(object object, IntPtr method) { }

		public override IAsyncResult BeginInvoke(GameObject go, KeyCode key, AsyncCallback callback, object object) { }

		public override void EndInvoke(IAsyncResult result) { }

		public override void Invoke(GameObject go, KeyCode key) { }

	}

	internal sealed class ObjectDelegate : MulticastDelegate
	{

		public ObjectDelegate(object object, IntPtr method) { }

		public override IAsyncResult BeginInvoke(GameObject go, GameObject obj, AsyncCallback callback, object object) { }

		public override void EndInvoke(IAsyncResult result) { }

		public override void Invoke(GameObject go, GameObject obj) { }

	}

	internal sealed class VectorDelegate : MulticastDelegate
	{

		public VectorDelegate(object object, IntPtr method) { }

		public override IAsyncResult BeginInvoke(GameObject go, Vector2 delta, AsyncCallback callback, object object) { }

		public override void EndInvoke(IAsyncResult result) { }

		public override void Invoke(GameObject go, Vector2 delta) { }

	}

	internal sealed class VoidDelegate : MulticastDelegate
	{

		public VoidDelegate(object object, IntPtr method) { }

		public override IAsyncResult BeginInvoke(GameObject go, AsyncCallback callback, object object) { }

		public override void EndInvoke(IAsyncResult result) { }

		public override void Invoke(GameObject go) { }

	}

	public object parameter; //Field offset: 0x18
	public VoidDelegate onSubmit; //Field offset: 0x20
	public VoidDelegate onClick; //Field offset: 0x28
	public VoidDelegate onDoubleClick; //Field offset: 0x30
	public BoolDelegate onHover; //Field offset: 0x38
	public BoolDelegate onPress; //Field offset: 0x40
	public BoolDelegate onSelect; //Field offset: 0x48
	public FloatDelegate onScroll; //Field offset: 0x50
	public VoidDelegate onDragStart; //Field offset: 0x58
	public VectorDelegate onDrag; //Field offset: 0x60
	public VoidDelegate onDragOver; //Field offset: 0x68
	public VoidDelegate onDragOut; //Field offset: 0x70
	public VoidDelegate onDragEnd; //Field offset: 0x78
	public ObjectDelegate onDrop; //Field offset: 0x80
	public KeyCodeDelegate onKey; //Field offset: 0x88
	public BoolDelegate onTooltip; //Field offset: 0x90
	public bool needsActiveCollider; //Field offset: 0x98

	private bool isColliderEnabled
	{
		private get { } //Length: 324
	}

	public UIEventListener() { }

	public void Clear() { }

	public static UIEventListener Get(GameObject go) { }

	private bool get_isColliderEnabled() { }

	private void OnClick() { }

	private void OnDoubleClick() { }

	private void OnDrag(Vector2 delta) { }

	private void OnDragEnd() { }

	private void OnDragOut() { }

	private void OnDragOver() { }

	private void OnDragStart() { }

	private void OnDrop(GameObject go) { }

	private void OnHover(bool isOver) { }

	private void OnKey(KeyCode key) { }

	private void OnPress(bool isPressed) { }

	private void OnScroll(float delta) { }

	private void OnSelect(bool selected) { }

	private void OnSubmit() { }

	private void OnTooltip(bool show) { }

}

