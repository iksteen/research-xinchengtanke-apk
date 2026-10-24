//Type is in global namespace

public class ContainerScreenLoadingUIController : UIControllerBase
{
	[CompilerGenerated]
	private sealed class <LoadNewScene>d__6 : IEnumerator<Object>, IEnumerator, IDisposable
	{
		private int <>1__state; //Field offset: 0x10
		private object <>2__current; //Field offset: 0x18
		public ContainerScreenLoadingUIController <>4__this; //Field offset: 0x20
		private float <maxSpeed>5__2; //Field offset: 0x28
		private AsyncOperation <op>5__3; //Field offset: 0x30

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
		public <LoadNewScene>d__6(int <>1__state) { }

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

	public static string screenstr; //Field offset: 0x0
	private bool isstart; //Field offset: 0x18
	public int iindex; //Field offset: 0x1C
	public float processValue; //Field offset: 0x20
	public GameObject background; //Field offset: 0x28
	public Vector3 UIOriginalPositionbackground; //Field offset: 0x30
	public GameObject ProgressLoading; //Field offset: 0x40
	public Vector3 UIOriginalPositionProgressLoading; //Field offset: 0x48

	private static ContainerScreenLoadingUIController() { }

	public ContainerScreenLoadingUIController() { }

	private void Awake() { }

	[IteratorStateMachine(/*Cpp2IL Warning: missing at least one required parameter*/)]
	private IEnumerator LoadNewScene() { }

	private void Start() { }

	private void Update() { }

}

