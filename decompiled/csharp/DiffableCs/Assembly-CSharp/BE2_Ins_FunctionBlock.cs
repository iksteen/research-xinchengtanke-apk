//Type is in global namespace

public class BE2_Ins_FunctionBlock : BE2_InstructionBase, I_BE2_Instruction
{
	[CompilerGenerated]
	private sealed class <C_RebuildFunctionInstance>d__10 : IEnumerator<Object>, IEnumerator, IDisposable
	{
		private int <>1__state; //Field offset: 0x10
		private object <>2__current; //Field offset: 0x18
		public BE2_Ins_FunctionBlock <>4__this; //Field offset: 0x20

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
		public <C_RebuildFunctionInstance>d__10(int <>1__state) { }

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
	private sealed class <C_SetLocalVarName>d__15 : IEnumerator<Object>, IEnumerator, IDisposable
	{
		private int <>1__state; //Field offset: 0x10
		private object <>2__current; //Field offset: 0x18
		public I_BE2_Block noViewBlock; //Field offset: 0x20
		public I_BE2_Block mirrorBlock; //Field offset: 0x28
		public BE2_Ins_FunctionBlock <>4__this; //Field offset: 0x30

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
		public <C_SetLocalVarName>d__15(int <>1__state) { }

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

	public string defineID; //Field offset: 0x78
	public BE2_Ins_DefineFunction defineInstruction; //Field offset: 0x80
	private bool _initialized; //Field offset: 0x88
	public BE2_Ins_FunctionBlock mirrorFunction; //Field offset: 0x90
	public List<BE2_Op_FunctionLocalVariable> localVariables; //Field offset: 0x98
	public List<String> localValues; //Field offset: 0xA0

	public BE2_Ins_FunctionBlock(BE2_Ins_DefineFunction defineInstruction) { }

	[IteratorStateMachine(/*Cpp2IL Warning: missing at least one required parameter*/)]
	private IEnumerator C_RebuildFunctionInstance() { }

	[IteratorStateMachine(/*Cpp2IL Warning: missing at least one required parameter*/)]
	private IEnumerator C_SetLocalVarName(I_BE2_Block noViewBlock, I_BE2_Block mirrorBlock) { }

	public override void Function() { }

	public void Initialize(BE2_Ins_DefineFunction defineInstruction) { }

	private void InstantiateNoViewBlockRecursive(I_BE2_Block mirrorBlock, Transform parent) { }

	protected virtual void OnDisableInstruction() { }

	protected virtual void OnEnableInstruction() { }

	public virtual void OnPrepareToPlay() { }

	protected virtual void OnStart() { }

	public void RebuildFunctionInstance() { }

	private void Remove(I_BE2_Block block) { }

}

