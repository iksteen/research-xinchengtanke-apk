namespace MG_BlocksEngine2.Serializer;

public static class BE2_BlocksSerializer
{
	[CompilerGenerated]
	private sealed class <>c
	{
		public static readonly <>c <>9; //Field offset: 0x0
		public static Func<Boolean> <>9__11_0; //Field offset: 0x8

		private static <>c() { }

		public <>c() { }

		internal bool <C_InitializeFunctionInstruction>b__11_0() { }

	}

	[CompilerGenerated]
	private sealed class <C_AddInputs>d__9 : IEnumerator<Object>, IEnumerator, IDisposable
	{
		private int <>1__state; //Field offset: 0x10
		private object <>2__current; //Field offset: 0x18
		public I_BE2_Block block; //Field offset: 0x20
		public BE2_SerializableBlock serializableBlock; //Field offset: 0x28
		public I_BE2_ProgrammingEnv programmingEnv; //Field offset: 0x30

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
		public <C_AddInputs>d__9(int <>1__state) { }

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
	private sealed class <C_InitializeFunctionInstruction>d__11 : IEnumerator<Object>, IEnumerator, IDisposable
	{
		private int <>1__state; //Field offset: 0x10
		private object <>2__current; //Field offset: 0x18
		public BE2_Ins_FunctionBlock functionInstruction; //Field offset: 0x20
		public BE2_Ins_DefineFunction defineInstruction; //Field offset: 0x28

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
		public <C_InitializeFunctionInstruction>d__11(int <>1__state) { }

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

	private static int counterForEndOfDeserialization; //Field offset: 0x0

	private static BE2_BlocksSerializer() { }

	public static string BlocksCodeToXML(I_BE2_ProgrammingEnv targetProgrammingEnv) { }

	public static BE2_SerializableBlock BlockToSerializable(I_BE2_Block block) { }

	[IteratorStateMachine(/*Cpp2IL Warning: missing at least one required parameter*/)]
	private static IEnumerator C_AddInputs(I_BE2_Block block, BE2_SerializableBlock serializableBlock, I_BE2_ProgrammingEnv programmingEnv) { }

	[IteratorStateMachine(/*Cpp2IL Warning: missing at least one required parameter*/)]
	private static IEnumerator C_InitializeFunctionInstruction(BE2_Ins_FunctionBlock functionInstruction, BE2_Ins_DefineFunction defineInstruction) { }

	public static bool LoadCode(string path, I_BE2_ProgrammingEnv targetProgrammingEnv) { }

	private static int OrderOnType(I_BE2_Block block) { }

	public static void SaveCode(string path, I_BE2_ProgrammingEnv targetProgrammingEnv) { }

	public static I_BE2_Block SerializableToBlock(BE2_SerializableBlock serializableBlock, I_BE2_ProgrammingEnv programmingEnv) { }

	public static string SerializableToXML(BE2_SerializableBlock serializableBlock) { }

	public static void XMLToBlocksCode(string xmlString, I_BE2_ProgrammingEnv targetProgrammingEnv) { }

	public static BE2_SerializableBlock XMLToSerializable(string blockString) { }

}

