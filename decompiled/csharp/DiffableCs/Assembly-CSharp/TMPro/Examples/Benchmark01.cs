namespace TMPro.Examples;

public class Benchmark01 : MonoBehaviour
{
	[CompilerGenerated]
	private sealed class <Start>d__10 : IEnumerator<Object>, IEnumerator, IDisposable
	{
		private int <>1__state; //Field offset: 0x10
		private object <>2__current; //Field offset: 0x18
		public Benchmark01 <>4__this; //Field offset: 0x20
		private int <i>5__2; //Field offset: 0x28

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
		public <Start>d__10(int <>1__state) { }

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

	private const string label01 = "The <#0050FF>count is: </color>{0}"; //Field offset: 0x0
	private const string label02 = "The <color=#0050FF>count is: </color>"; //Field offset: 0x0
	public int BenchmarkType; //Field offset: 0x18
	public TMP_FontAsset TMProFont; //Field offset: 0x20
	public Font TextMeshFont; //Field offset: 0x28
	private TextMeshPro m_textMeshPro; //Field offset: 0x30
	private TextContainer m_textContainer; //Field offset: 0x38
	private TextMesh m_textMesh; //Field offset: 0x40
	private Material m_material01; //Field offset: 0x48
	private Material m_material02; //Field offset: 0x50

	public Benchmark01() { }

	[IteratorStateMachine(/*Cpp2IL Warning: missing at least one required parameter*/)]
	private IEnumerator Start() { }

}

