namespace System.Runtime.Serialization;

public sealed class SerializationObjectManager
{
	private Hashtable m_objectSeenTable; //Field offset: 0x10
	private SerializationEventHandler m_onSerializedHandler; //Field offset: 0x18
	private StreamingContext m_context; //Field offset: 0x20

	public SerializationObjectManager(StreamingContext context) { }

	private void AddOnSerialized(object obj) { }

	public void RaiseOnSerializedEvent() { }

	public void RegisterObject(object obj) { }

}

