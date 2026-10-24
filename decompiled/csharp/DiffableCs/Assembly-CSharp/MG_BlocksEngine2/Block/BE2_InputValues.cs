namespace MG_BlocksEngine2.Block;

public class BE2_InputValues
{
	public bool isText; //Field offset: 0x10
	public string stringValue; //Field offset: 0x18
	public float floatValue; //Field offset: 0x20

	public BE2_InputValues(string stringValue, float floatValue, bool isText) { }

}

