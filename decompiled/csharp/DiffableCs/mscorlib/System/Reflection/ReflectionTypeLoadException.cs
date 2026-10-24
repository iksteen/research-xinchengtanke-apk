namespace System.Reflection;

[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
public sealed class ReflectionTypeLoadException : SystemException, ISerializable
{
	private Type[] _classes; //Field offset: 0x88
	private Exception[] _exceptions; //Field offset: 0x90

	private ReflectionTypeLoadException() { }

	public ReflectionTypeLoadException(Type[] classes, Exception[] exceptions) { }

	internal ReflectionTypeLoadException(SerializationInfo info, StreamingContext context) { }

	public virtual void GetObjectData(SerializationInfo info, StreamingContext context) { }

}

