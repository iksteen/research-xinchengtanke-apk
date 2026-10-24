namespace TMPro.Examples;

public class TextMeshProFloatingText : MonoBehaviour
{
	[CompilerGenerated]
	private sealed class <DisplayTextMeshFloatingText>d__16 : IEnumerator<Object>, IEnumerator, IDisposable
	{
		private int <>1__state; //Field offset: 0x10
		private object <>2__current; //Field offset: 0x18
		public TextMeshProFloatingText <>4__this; //Field offset: 0x20
		private float <CountDuration>5__2; //Field offset: 0x28
		private float <starting_Count>5__3; //Field offset: 0x2C
		private float <current_Count>5__4; //Field offset: 0x30
		private Vector3 <start_pos>5__5; //Field offset: 0x34
		private Color32 <start_color>5__6; //Field offset: 0x40
		private float <alpha>5__7; //Field offset: 0x44
		private float <fadeDuration>5__8; //Field offset: 0x48

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
		public <DisplayTextMeshFloatingText>d__16(int <>1__state) { }

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

	[CompilerGenerated]
	private sealed class <DisplayTextMeshProFloatingText>d__15 : IEnumerator<Object>, IEnumerator, IDisposable
	{
		private int <>1__state; //Field offset: 0x10
		private object <>2__current; //Field offset: 0x18
		public TextMeshProFloatingText <>4__this; //Field offset: 0x20
		private float <CountDuration>5__2; //Field offset: 0x28
		private float <starting_Count>5__3; //Field offset: 0x2C
		private float <current_Count>5__4; //Field offset: 0x30
		private Vector3 <start_pos>5__5; //Field offset: 0x34
		private Color32 <start_color>5__6; //Field offset: 0x40
		private float <alpha>5__7; //Field offset: 0x44
		private float <fadeDuration>5__8; //Field offset: 0x48

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
		public <DisplayTextMeshProFloatingText>d__15(int <>1__state) { }

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

	private static WaitForEndOfFrame k_WaitForEndOfFrame; //Field offset: 0x0
	private static WaitForSeconds[] k_WaitForSecondsRandom; //Field offset: 0x8
	public Font TheFont; //Field offset: 0x18
	private GameObject m_floatingText; //Field offset: 0x20
	private TextMeshPro m_textMeshPro; //Field offset: 0x28
	private TextMesh m_textMesh; //Field offset: 0x30
	private Transform m_transform; //Field offset: 0x38
	private Transform m_floatingText_Transform; //Field offset: 0x40
	private Transform m_cameraTransform; //Field offset: 0x48
	private Vector3 lastPOS; //Field offset: 0x50
	private Quaternion lastRotation; //Field offset: 0x5C
	public int SpawnType; //Field offset: 0x6C
	public bool IsTextObjectScaleStatic; //Field offset: 0x70

	private static TextMeshProFloatingText() { }

	public TextMeshProFloatingText() { }

	private void Awake() { }

	[IteratorStateMachine(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public IEnumerator DisplayTextMeshFloatingText() { }

	[IteratorStateMachine(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public IEnumerator DisplayTextMeshProFloatingText() { }

	private void Start() { }

}

