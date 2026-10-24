namespace System.Reflection;

[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
public class StrongNameKeyPair : ISerializable, IDeserializationCallback
{
	private Byte[] _publicKey; //Field offset: 0x10
	private string _keyPairContainer; //Field offset: 0x18
	private bool _keyPairExported; //Field offset: 0x20
	private Byte[] _keyPairArray; //Field offset: 0x28

	protected StrongNameKeyPair(SerializationInfo info, StreamingContext context) { }

	private override void System.Runtime.Serialization.IDeserializationCallback.OnDeserialization(object sender) { }

	private override void System.Runtime.Serialization.ISerializable.GetObjectData(SerializationInfo info, StreamingContext context) { }

}

