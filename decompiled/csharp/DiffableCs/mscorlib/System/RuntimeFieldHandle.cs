namespace System;

[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
public struct RuntimeFieldHandle : ISerializable
{
	private IntPtr value; //Field offset: 0x0

	public IntPtr Value
	{
		 get { } //Length: 8
	}

	internal RuntimeFieldHandle(IntPtr v) { }

	private RuntimeFieldHandle(SerializationInfo info, StreamingContext context) { }

	[ReliabilityContract(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public virtual bool Equals(object obj) { }

	public IntPtr get_Value() { }

	public virtual int GetHashCode() { }

	public override void GetObjectData(SerializationInfo info, StreamingContext context) { }

	internal static void SetValue(RtFieldInfo field, object obj, object value, RuntimeType fieldType, FieldAttributes fieldAttr, RuntimeType declaringType, ref bool domainInitialized) { }

	internal static void SetValueDirect(RtFieldInfo field, RuntimeType fieldType, Void* pTypedRef, object value, RuntimeType contextType) { }

	private static void SetValueInternal(FieldInfo fi, object obj, object value) { }

}

