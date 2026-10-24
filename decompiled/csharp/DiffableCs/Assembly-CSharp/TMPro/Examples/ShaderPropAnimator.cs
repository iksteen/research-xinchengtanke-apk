namespace TMPro.Examples;

public class ShaderPropAnimator : MonoBehaviour
{
	[CompilerGenerated]
	private sealed class <AnimateProperties>d__6 : IEnumerator<Object>, IEnumerator, IDisposable
	{
		private int <>1__state; //Field offset: 0x10
		private object <>2__current; //Field offset: 0x18
		public ShaderPropAnimator <>4__this; //Field offset: 0x20

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
		public <AnimateProperties>d__6(int <>1__state) { }

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

	private Renderer m_Renderer; //Field offset: 0x18
	private Material m_Material; //Field offset: 0x20
	public AnimationCurve GlowCurve; //Field offset: 0x28
	public float m_frame; //Field offset: 0x30

	public ShaderPropAnimator() { }

	[IteratorStateMachine(/*Cpp2IL Warning: missing at least one required parameter*/)]
	private IEnumerator AnimateProperties() { }

	private void Awake() { }

	private void Start() { }

}

