namespace System.Xml.Linq;

internal sealed class NameSerializer : IObjectReference, ISerializable
{
	private string expandedName; //Field offset: 0x10

	private NameSerializer(SerializationInfo info, StreamingContext context) { }

	private override object System.Runtime.Serialization.IObjectReference.GetRealObject(StreamingContext context) { }

	private override void System.Runtime.Serialization.ISerializable.GetObjectData(SerializationInfo info, StreamingContext context) { }

}

