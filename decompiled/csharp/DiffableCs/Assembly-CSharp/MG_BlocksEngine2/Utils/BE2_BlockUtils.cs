namespace MG_BlocksEngine2.Utils;

[Extension]
public static class BE2_BlockUtils
{
	[CompilerGenerated]
	private sealed class <InvokeRoutine>d__13 : IEnumerator<Object>, IEnumerator, IDisposable
	{
		private int <>1__state; //Field offset: 0x10
		private object <>2__current; //Field offset: 0x18
		public Action action; //Field offset: 0x20

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
		public <InvokeRoutine>d__13(int <>1__state) { }

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


	public static void AddSelectionMenuComponents(Transform blockTransform) { }

	[Extension]
	public static bool BlockIsFunction(I_BE2_Block block) { }

	[Extension]
	public static bool BlockIsVariable(I_BE2_Block block) { }

	[Extension]
	public static void CallOnEndOfFrame(MonoBehaviour monoBehaviour, Action action) { }

	public static GameObject CreatePrefab(I_BE2_Block block) { }

	public static void DuplicateBlock(I_BE2_Block block) { }

	public static I_BE2_Instruction GetParentInstructionOfType(I_BE2_Instruction thisInstruction, BlockTypeEnum blockType) { }

	public static List<I_BE2_Instruction> GetParentInstructionOfTypeAll(I_BE2_Instruction thisInstruction, BlockTypeEnum blockType) { }

	public static I_BE2_Block GetRootBlock(I_BE2_Block block) { }

	[Extension]
	public static I_BE2_Block InstantiateNoViewBlock(I_BE2_Block block) { }

	[Extension]
	public static I_BE2_Block InstantiateNoViewBlock(I_BE2_Block block) { }

	[IteratorStateMachine(/*Cpp2IL Warning: missing at least one required parameter*/)]
	private static IEnumerator InvokeRoutine(Action action) { }

	public static GameObject LoadPrefabBlock(string prefabName) { }

	public static void RemoveBlock(I_BE2_Block block) { }

	public static void RemoveEngineComponents(Transform blockTransform) { }

	public static void UnloadPrefab() { }

}

