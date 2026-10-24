//Type is in global namespace

public class AnimateTiledTexture : MonoBehaviour
{
	[CompilerGenerated]
	private sealed class <updateTiling>d__27 : IEnumerator<Object>, IEnumerator, IDisposable
	{
		private int <>1__state; //Field offset: 0x10
		private object <>2__current; //Field offset: 0x18
		public AnimateTiledTexture <>4__this; //Field offset: 0x20
		private int <checkAgainst>5__2; //Field offset: 0x28

		private override object System.Collections.Generic.IEnumerator<System.Object>.Current
		{
			[DebuggerHidden]
			private get { } //Length: 8
		}

		private override object System.Collections.IEnumerator.Current
		{
			[DebuggerHidden]
			private get { } //Length: 8
		}

		[DebuggerHidden]
		public <updateTiling>d__27(int <>1__state) { }

		private override bool MoveNext() { }

		[DebuggerHidden]
		private override object System.Collections.Generic.IEnumerator<System.Object>.get_Current() { }

		[DebuggerHidden]
		private override object System.Collections.IEnumerator.get_Current() { }

		[DebuggerHidden]
		private override void System.Collections.IEnumerator.Reset() { }

		[DebuggerHidden]
		private override void System.IDisposable.Dispose() { }

	}

	internal sealed class VoidEvent : MulticastDelegate
	{

		public VoidEvent(object object, IntPtr method) { }

		public override IAsyncResult BeginInvoke(AsyncCallback callback, object object) { }

		public override void EndInvoke(IAsyncResult result) { }

		public override void Invoke() { }

	}

	public int _columns; //Field offset: 0x18
	public int _rows; //Field offset: 0x1C
	public Vector2 _scale; //Field offset: 0x20
	public Vector2 _offset; //Field offset: 0x28
	public Vector2 _buffer; //Field offset: 0x30
	public float _framesPerSecond; //Field offset: 0x38
	public bool _playOnce; //Field offset: 0x3C
	public bool _disableUponCompletion; //Field offset: 0x3D
	public bool _enableEvents; //Field offset: 0x3E
	public bool _playOnEnable; //Field offset: 0x3F
	public bool _newMaterialInstance; //Field offset: 0x40
	private int _index; //Field offset: 0x44
	private Vector2 _textureSize; //Field offset: 0x48
	private Material _materialInstance; //Field offset: 0x50
	private bool _hasMaterialInstance; //Field offset: 0x58
	private bool _isPlaying; //Field offset: 0x59
	private List<VoidEvent> _voidEventCallbackList; //Field offset: 0x60

	public AnimateTiledTexture() { }

	private void ApplyOffset() { }

	private void Awake() { }

	private void CalcTextureSize() { }

	public void ChangeMaterial(Material newMaterial, bool newInstance = false) { }

	private void HandleCallbacks(List<VoidEvent> cbList) { }

	private void OnDestroy() { }

	private void OnEnable() { }

	public void Play() { }

	public void RegisterCallback(VoidEvent cbFunction) { }

	public void UnRegisterCallback(VoidEvent cbFunction) { }

	[IteratorStateMachine(/*Cpp2IL Warning: missing at least one required parameter*/)]
	private IEnumerator updateTiling() { }

}

