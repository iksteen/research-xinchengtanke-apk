namespace System.Runtime.Serialization;

internal class SerializationEvents
{
	private List<MethodInfo> m_OnSerializingMethods; //Field offset: 0x10
	private List<MethodInfo> m_OnSerializedMethods; //Field offset: 0x18
	private List<MethodInfo> m_OnDeserializingMethods; //Field offset: 0x20
	private List<MethodInfo> m_OnDeserializedMethods; //Field offset: 0x28

	internal bool HasOnSerializingEvents
	{
		internal get { } //Length: 32
	}

	internal SerializationEvents(Type t) { }

	internal SerializationEventHandler AddOnDeserialized(object obj, SerializationEventHandler handler) { }

	internal SerializationEventHandler AddOnSerialized(object obj, SerializationEventHandler handler) { }

	internal bool get_HasOnSerializingEvents() { }

	private List<MethodInfo> GetMethodsWithAttribute(Type attribute, Type t) { }

	internal void InvokeOnDeserialized(object obj, StreamingContext context) { }

	internal void InvokeOnDeserializing(object obj, StreamingContext context) { }

	internal void InvokeOnSerializing(object obj, StreamingContext context) { }

}

