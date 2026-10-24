namespace MG_BlocksEngine2.EditorScript;

public class BE2_Inspector : MonoBehaviour
{
	[CompilerGenerated]
	private sealed class <C_AddBlockToSelectionMenu>d__38 : IEnumerator<Object>, IEnumerator, IDisposable
	{
		private int <>1__state; //Field offset: 0x10
		private object <>2__current; //Field offset: 0x18
		public Transform blockTransform; //Field offset: 0x20

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
		public <C_AddBlockToSelectionMenu>d__38(int <>1__state) { }

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

	private static BE2_Inspector _instance; //Field offset: 0x0
	public GameObject BlockTemplate; //Field offset: 0x18
	public GameObject SimpleTemplate; //Field offset: 0x20
	public GameObject TriggerTemplate; //Field offset: 0x28
	public GameObject OperationTemplate; //Field offset: 0x30
	public GameObject SectionTemplate; //Field offset: 0x38
	public GameObject HeaderTemplate; //Field offset: 0x40
	public GameObject HeaderMiddleTemplate; //Field offset: 0x48
	public GameObject BodyEndTemplate; //Field offset: 0x50
	public GameObject BodyMiddleTemplate; //Field offset: 0x58
	public GameObject OuterAreaTemplate; //Field offset: 0x60
	public GameObject DropdownTemplate; //Field offset: 0x68
	public GameObject InputFieldTemplate; //Field offset: 0x70
	public GameObject LabelTextTemplate; //Field offset: 0x78
	public string instructionName; //Field offset: 0x80
	public BlockTypeEnum blockType; //Field offset: 0x88
	public Color blockColor; //Field offset: 0x8C
	public string blockHeaderMarkup; //Field offset: 0xA0
	public String[] inputValues; //Field offset: 0xA8
	public string newInstructionPath; //Field offset: 0xB0
	public string newBlockPrefabPath; //Field offset: 0xB8
	public bool usePersistentPathOnBuild; //Field offset: 0xC0
	public string savedCodesPath; //Field offset: 0xC8
	[SerializeField]
	private Camera _camera; //Field offset: 0xD0
	[SerializeField]
	private RenderMode _canvasRenderMode; //Field offset: 0xD8
	public bool autoSetDragDropDetectionDistance; //Field offset: 0xDC

	public Camera Camera
	{
		 get { } //Length: 140
		 set { } //Length: 8
	}

	public RenderMode CanvasRenderMode
	{
		 get { } //Length: 8
		 set { } //Length: 332
	}

	public static BE2_Inspector Instance
	{
		 get { } //Length: 232
		 set { } //Length: 84
	}

	public BE2_Inspector() { }

	public void AddBlockToSelectionMenu(Transform blockTransform) { }

	public List<Int32> AllIndexesOf(string str, string value) { }

	public Transform BuildAndInstantiateBlock(string instructionName) { }

	[IteratorStateMachine(/*Cpp2IL Warning: missing at least one required parameter*/)]
	private IEnumerator C_AddBlockToSelectionMenu(Transform blockTransform) { }

	public string CreateInstructionScript(string instructionName) { }

	public Camera get_Camera() { }

	public RenderMode get_CanvasRenderMode() { }

	public static BE2_Inspector get_Instance() { }

	public void set_Camera(Camera value) { }

	public void set_CanvasRenderMode(RenderMode value) { }

	public static void set_Instance(BE2_Inspector value) { }

	public void TryAddInstructionToBlock(string className, GameObject blockGO) { }

	public Type TryGetType(string typeName) { }

}

