namespace MG_BlocksEngine2.Environment;

public class BE2_TargetObjectSpacecraft3D : BE2_TargetObject
{
	[CompilerGenerated]
	private sealed class <C_DestroyTime>d__5 : IEnumerator<Object>, IEnumerator, IDisposable
	{
		private int <>1__state; //Field offset: 0x10
		private object <>2__current; //Field offset: 0x18
		public GameObject go; //Field offset: 0x20

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
		public <C_DestroyTime>d__5(int <>1__state) { }

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

	private GameObject _bullet; //Field offset: 0x20

	public Transform Transform
	{
		 get { } //Length: 8
	}

	public BE2_TargetObjectSpacecraft3D() { }

	private void Awake() { }

	[IteratorStateMachine(/*Cpp2IL Warning: missing at least one required parameter*/)]
	private IEnumerator C_DestroyTime(GameObject go) { }

	public Transform get_Transform() { }

	public void Shoot() { }

}

