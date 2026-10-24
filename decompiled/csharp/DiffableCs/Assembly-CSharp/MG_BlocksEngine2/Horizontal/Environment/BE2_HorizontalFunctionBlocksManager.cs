namespace MG_BlocksEngine2.Horizontal.Environment;

public class BE2_HorizontalFunctionBlocksManager : BE2_FunctionBlocksManager
{
	[CompilerGenerated]
	private sealed class <>c
	{
		public static readonly <>c <>9; //Field offset: 0x0
		public static Predicate<I_BE2_ProgrammingEnv> <>9__3_0; //Field offset: 0x8

		private static <>c() { }

		public <>c() { }

		internal bool <CreateFunctionBlock>b__3_0(I_BE2_ProgrammingEnv x) { }

	}

	public List<Sprite> icons; //Field offset: 0x48
	[SerializeField]
	private Transform iconsPanel; //Field offset: 0x50

	public BE2_HorizontalFunctionBlocksManager() { }

	public virtual void CreateFunctionBlock(List<DefineItem> items) { }

	public virtual void CreateSelectionFunction(List<DefineItem> items, BE2_Ins_DefineFunction defineBlockIns) { }

	private void Start() { }

}

