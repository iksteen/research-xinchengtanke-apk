namespace MG_BlocksEngine2.Environment;

public abstract class BE2_FunctionBlocksManager : MonoBehaviour
{
	private static BE2_FunctionBlocksManager _instance; //Field offset: 0x0
	public GameObject DefineFunctionBlockTemplate; //Field offset: 0x18
	public GameObject templateSelectionBlock; //Field offset: 0x20
	public GameObject templateDefineLocalVariable; //Field offset: 0x28
	public GameObject templateDefineCustomHeaderItem; //Field offset: 0x30
	public Transform functionBlocksPanel; //Field offset: 0x38
	public Vector2 positionToInstantiate; //Field offset: 0x40

	public static BE2_FunctionBlocksManager Instance
	{
		 get { } //Length: 236
		 set { } //Length: 84
	}

	protected BE2_FunctionBlocksManager() { }

	public override void CreateFunctionBlock(List<DefineItem> items) { }

	public override void CreateSelectionFunction(List<DefineItem> items, BE2_Ins_DefineFunction defineBlockIns) { }

	public static BE2_FunctionBlocksManager get_Instance() { }

	public static void set_Instance(BE2_FunctionBlocksManager value) { }

}

