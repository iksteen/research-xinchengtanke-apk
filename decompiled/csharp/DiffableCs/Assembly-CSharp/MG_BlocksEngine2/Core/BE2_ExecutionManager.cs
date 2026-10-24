namespace MG_BlocksEngine2.Core;

public class BE2_ExecutionManager : MonoBehaviour
{
	[CompilerGenerated]
	private sealed class <>c__DisplayClass25_0
	{
		public I_BE2_BlocksStack blocksStack; //Field offset: 0x10

		public <>c__DisplayClass25_0() { }

		internal bool <AddToBlocksStackArray>b__0(I_BE2_BlocksStack x) { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass26_0
	{
		public I_BE2_BlocksStack blocksStack; //Field offset: 0x10

		public <>c__DisplayClass26_0() { }

		internal bool <RemoveFromBlocksStackList>b__0(I_BE2_BlocksStack x) { }

	}

	private static BE2_ExecutionManager _instance; //Field offset: 0x0
	private List<I_BE2_TargetObject> _targetObjectsList; //Field offset: 0x18
	private List<I_BE2_ProgrammingEnv> _programmingEnvsList; //Field offset: 0x20
	public I_BE2_BlocksStack[] blocksStacksArray; //Field offset: 0x28
	private BE2_Pointer _pointer; //Field offset: 0x30
	private I_BE2_InputManager _inputManager; //Field offset: 0x38
	private List<UnityAction> _actions; //Field offset: 0x40
	private UnityEvent OnUpdate; //Field offset: 0x48
	private UnityEvent OnLateUpdate; //Field offset: 0x50

	public static BE2_ExecutionManager Instance
	{
		 get { } //Length: 236
		 set { } //Length: 84
	}

	public List<I_BE2_ProgrammingEnv> ProgrammingEnvsList
	{
		 get { } //Length: 8
	}

	public BE2_ExecutionManager() { }

	public void AddToBlocksStackArray(I_BE2_BlocksStack blocksStack, I_BE2_TargetObject targetObject) { }

	public void AddToLateUpdate(UnityAction action) { }

	public void AddToUpdate(UnityAction action) { }

	private void Awake() { }

	public static BE2_ExecutionManager get_Instance() { }

	public List<I_BE2_ProgrammingEnv> get_ProgrammingEnvsList() { }

	private void LateUpdate() { }

	public void Play() { }

	public void RemoveFromBlocksStackList(I_BE2_BlocksStack blocksStack) { }

	public void RemoveFromLateUpdate(UnityAction action) { }

	public void RemoveFromUpdate(UnityAction action) { }

	public static void set_Instance(BE2_ExecutionManager value) { }

	private void Start() { }

	public void Stop() { }

	private void Update() { }

	public void UpdateBlocksStackList() { }

	public void UpdateProgrammingEnvsList() { }

	private void UpdateTargetObjects() { }

}

