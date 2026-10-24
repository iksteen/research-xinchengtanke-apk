namespace MG_BlocksEngine2.UI;

public class BE2_UI_VariableListViewer : MonoBehaviour
{
	[CompilerGenerated]
	private sealed class <C_UpdateViewerValues>d__13 : IEnumerator<Object>, IEnumerator, IDisposable
	{
		private int <>1__state; //Field offset: 0x10
		private object <>2__current; //Field offset: 0x18
		public BE2_UI_VariableListViewer <>4__this; //Field offset: 0x20

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
		public <C_UpdateViewerValues>d__13(int <>1__state) { }

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

	public string listName; //Field offset: 0x18
	private Transform _panelListOp; //Field offset: 0x20
	private Transform _panelList; //Field offset: 0x28
	private Button _removeListButton; //Field offset: 0x30
	private Toggle _showListToggle; //Field offset: 0x38
	private Button _createItemButton; //Field offset: 0x40
	public Transform panelListItem; //Field offset: 0x48

	public BE2_UI_VariableListViewer() { }

	[CompilerGenerated]
	private void <OnEnable>b__8_0() { }

	[CompilerGenerated]
	private void <OnEnable>b__8_1(bool <p0>) { }

	public void AddListItem(string value, bool select = false) { }

	private void Awake() { }

	[IteratorStateMachine(/*Cpp2IL Warning: missing at least one required parameter*/)]
	private IEnumerator C_UpdateViewerValues() { }

	private string GetVariableName() { }

	private void OnDisable() { }

	private void OnEnable() { }

	public void RefreshViewer() { }

	public void RemoveList() { }

	private void Start() { }

	public void UpdateListValues() { }

	private void UpdateViewerValues() { }

}

