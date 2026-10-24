namespace System.Runtime.Serialization;

[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
public interface ISerializable
{

	public void GetObjectData(SerializationInfo info, StreamingContext context) { }

}

