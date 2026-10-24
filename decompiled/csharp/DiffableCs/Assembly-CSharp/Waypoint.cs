//Type is in global namespace

public class Waypoint : MonoBehaviour
{
	[CompilerGenerated]
	private sealed class <Slow>d__19 : IEnumerator<Object>, IEnumerator, IDisposable
	{
		private int <>1__state; //Field offset: 0x10
		private object <>2__current; //Field offset: 0x18
		public Waypoint <>4__this; //Field offset: 0x20

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
		public <Slow>d__19(int <>1__state) { }

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

	public float accel; //Field offset: 0x18
	public float inertia; //Field offset: 0x1C
	public float speedLimit; //Field offset: 0x20
	public float minSpeed; //Field offset: 0x24
	public float stopTime; //Field offset: 0x28
	private float currentSpeed; //Field offset: 0x2C
	private float functionState; //Field offset: 0x30
	private bool accelState; //Field offset: 0x34
	private bool slowState; //Field offset: 0x35
	private Transform waypoint; //Field offset: 0x38
	public float rotationDamping; //Field offset: 0x40
	public bool smoothRotation; //Field offset: 0x44
	public Transform[] waypoints; //Field offset: 0x48
	private int WPindexPointer; //Field offset: 0x50

	public Waypoint() { }

	private void Accell() { }

	private void OnDrawGizmosSelected() { }

	private void OnTriggerEnter() { }

	[IteratorStateMachine(/*Cpp2IL Warning: missing at least one required parameter*/)]
	private IEnumerator Slow() { }

	private void Start() { }

	private void Update() { }

}

