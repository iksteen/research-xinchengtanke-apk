namespace System;

[CLSCompliant(/*Cpp2IL Warning: missing at least one required parameter*/)]
[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
public struct UIntPtr : ISerializable
{
	public static readonly UIntPtr Zero; //Field offset: 0x0
	private Void* _pointer; //Field offset: 0x0

	public static int Size
	{
		 get { } //Length: 8
	}

	private static UIntPtr() { }

	public UIntPtr(uint value) { }

	public virtual bool Equals(object obj) { }

	public static int get_Size() { }

	public virtual int GetHashCode() { }

	public static bool op_Equality(UIntPtr value1, UIntPtr value2) { }

	private override void System.Runtime.Serialization.ISerializable.GetObjectData(SerializationInfo info, StreamingContext context) { }

	public virtual string ToString() { }

}

