namespace MG_BlocksEngine2.Attribute;

public class SerializeAsVariableAttribute : Attribute
{
	public Type variablesManagerType; //Field offset: 0x10

	public SerializeAsVariableAttribute(Type variablesManagerType) { }

}

