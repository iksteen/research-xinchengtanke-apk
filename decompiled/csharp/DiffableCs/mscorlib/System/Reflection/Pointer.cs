namespace System.Reflection;

[CLSCompliant(/*Cpp2IL Warning: missing at least one required parameter*/)]
[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
public sealed class Pointer : ISerializable
{
	private Void* _ptr; //Field offset: 0x10
	private RuntimeType _ptrType; //Field offset: 0x18

	private Pointer() { }

	private Pointer(SerializationInfo info, StreamingContext context) { }

	public static object Box(Void* ptr, Type type) { }

	private override void System.Runtime.Serialization.ISerializable.GetObjectData(SerializationInfo info, StreamingContext context) { }

}

