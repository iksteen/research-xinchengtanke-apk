namespace System.Runtime.Serialization;

[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
public interface ISerializationSurrogate
{

	public void GetObjectData(object obj, SerializationInfo info, StreamingContext context) { }

	public object SetObjectData(object obj, SerializationInfo info, StreamingContext context, ISurrogateSelector selector) { }

}

