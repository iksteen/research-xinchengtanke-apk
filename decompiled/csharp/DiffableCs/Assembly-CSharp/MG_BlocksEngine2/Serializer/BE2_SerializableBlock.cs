namespace MG_BlocksEngine2.Serializer;

public class BE2_SerializableBlock
{
	public string blockName; //Field offset: 0x10
	public Vector3 position; //Field offset: 0x18
	public List<BE2_SerializableSection> sections; //Field offset: 0x28
	public string varManagerName; //Field offset: 0x30
	public string varName; //Field offset: 0x38
	public string defineID; //Field offset: 0x40
	public string isLocalVar; //Field offset: 0x48
	public List<DefineItem> defineItems; //Field offset: 0x50

	public BE2_SerializableBlock() { }

}

