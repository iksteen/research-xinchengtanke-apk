namespace System.Runtime.Serialization;

[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
public abstract class SerializationBinder
{

	protected SerializationBinder() { }

	public override void BindToName(Type serializedType, out string assemblyName, out string typeName) { }

	public abstract Type BindToType(string assemblyName, string typeName) { }

}

