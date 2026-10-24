namespace MG_BlocksEngine2.DragDrop;

public class BE2_DragDropManager : MonoBehaviour
{
	[CompilerGenerated]
	private sealed class <C_HandleDragEvents>d__40 : IEnumerator<Object>, IEnumerator, IDisposable
	{
		private int <>1__state; //Field offset: 0x10
		private object <>2__current; //Field offset: 0x18
		public I_BE2_Block block; //Field offset: 0x20
		private I_BE2_BlockSectionHeader <parentHeader>5__2; //Field offset: 0x28

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
		public <C_HandleDragEvents>d__40(int <>1__state) { }

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
	private sealed class <C_HandleDropEvents>d__39 : IEnumerator<Object>, IEnumerator, IDisposable
	{
		private int <>1__state; //Field offset: 0x10
		private object <>2__current; //Field offset: 0x18
		public I_BE2_Block block; //Field offset: 0x20

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
		public <C_HandleDropEvents>d__39(int <>1__state) { }

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

	private static BE2_DragDropManager _instance; //Field offset: 0x0
	private static Canvas _dragDropComponentsCanvas; //Field offset: 0x8
	private BE2_UI_ContextMenuManager _contextMenuManager; //Field offset: 0x18
	[CompilerGenerated]
	private I_BE2_Raycaster <Raycaster>k__BackingField; //Field offset: 0x20
	public Transform draggedObjectsTransform; //Field offset: 0x28
	[CompilerGenerated]
	private I_BE2_Drag <CurrentDrag>k__BackingField; //Field offset: 0x30
	[CompilerGenerated]
	private I_BE2_Spot <CurrentSpot>k__BackingField; //Field offset: 0x38
	private List<I_BE2_Spot> _spotsList; //Field offset: 0x40
	[SerializeField]
	private Transform _ghostBlock; //Field offset: 0x48
	public bool isDragging; //Field offset: 0x50
	public float detectionDistance; //Field offset: 0x54

	public I_BE2_Drag CurrentDrag
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	public I_BE2_Spot CurrentSpot
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	public static Canvas DragDropComponentsCanvas
	{
		 get { } //Length: 220
	}

	public Transform DraggedObjectsTransform
	{
		 get { } //Length: 8
	}

	public Transform GhostBlockTransform
	{
		 get { } //Length: 8
	}

	public static BE2_DragDropManager Instance
	{
		 get { } //Length: 232
		 set { } //Length: 84
	}

	public I_BE2_Raycaster Raycaster
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	public List<I_BE2_Spot> SpotsList
	{
		 get { } //Length: 136
		 set { } //Length: 8
	}

	public BE2_DragDropManager() { }

	public void AddToSpotsList(I_BE2_Spot spot) { }

	private void Awake() { }

	[IteratorStateMachine(/*Cpp2IL Warning: missing at least one required parameter*/)]
	private IEnumerator C_HandleDragEvents(I_BE2_Block block) { }

	[IteratorStateMachine(/*Cpp2IL Warning: missing at least one required parameter*/)]
	private IEnumerator C_HandleDropEvents(I_BE2_Block block) { }

	[CompilerGenerated]
	public I_BE2_Drag get_CurrentDrag() { }

	[CompilerGenerated]
	public I_BE2_Spot get_CurrentSpot() { }

	public static Canvas get_DragDropComponentsCanvas() { }

	public Transform get_DraggedObjectsTransform() { }

	public Transform get_GhostBlockTransform() { }

	public static BE2_DragDropManager get_Instance() { }

	[CompilerGenerated]
	public I_BE2_Raycaster get_Raycaster() { }

	public List<I_BE2_Spot> get_SpotsList() { }

	private void OnDrag() { }

	private void OnEnable() { }

	private void OnPointerDown() { }

	private void OnPointerUp() { }

	private void OnRightPointerDownOrHold() { }

	public void RemoveFromSpotsList(I_BE2_Spot spot) { }

	[CompilerGenerated]
	public void set_CurrentDrag(I_BE2_Drag value) { }

	[CompilerGenerated]
	public void set_CurrentSpot(I_BE2_Spot value) { }

	public static void set_Instance(BE2_DragDropManager value) { }

	[CompilerGenerated]
	public void set_Raycaster(I_BE2_Raycaster value) { }

	public void set_SpotsList(List<I_BE2_Spot> value) { }

	private void Start() { }

}

