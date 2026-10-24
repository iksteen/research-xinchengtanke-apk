namespace MG_BlocksEngine2.Horizontal.Block;

[ExecuteInEditMode]
public class BE2_BlockHorizontalLayout : MonoBehaviour, I_BE2_BlockLayout
{
	[CompilerGenerated]
	private sealed class <C_UpdateLayout>d__20 : IEnumerator<Object>, IEnumerator, IDisposable
	{
		private int <>1__state; //Field offset: 0x10
		private object <>2__current; //Field offset: 0x18
		public BE2_BlockHorizontalLayout <>4__this; //Field offset: 0x20

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
		public <C_UpdateLayout>d__20(int <>1__state) { }

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

	public Color blockColor; //Field offset: 0x18
	private RectTransform _rectTransform; //Field offset: 0x28
	private I_BE2_BlockSection[] _sectionsArray; //Field offset: 0x30

	public override Color Color
	{
		 get { } //Length: 12
		 set { } //Length: 12
	}

	public override RectTransform RectTransform
	{
		 get { } //Length: 8
		 set { } //Length: 8
	}

	public override I_BE2_BlockSection[] SectionsArray
	{
		 get { } //Length: 8
	}

	public override Vector2 Size
	{
		 get { } //Length: 408
	}

	public BE2_BlockHorizontalLayout() { }

	private void Awake() { }

	[IteratorStateMachine(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public IEnumerator C_UpdateLayout() { }

	public override Color get_Color() { }

	public override RectTransform get_RectTransform() { }

	public override I_BE2_BlockSection[] get_SectionsArray() { }

	public override Vector2 get_Size() { }

	public void Initialize() { }

	private void OnDisable() { }

	private void OnEnable() { }

	private void OnValidate() { }

	public override void set_Color(Color value) { }

	public override void set_RectTransform(RectTransform value) { }

	private void Start() { }

	public override void UpdateLayout() { }

}

