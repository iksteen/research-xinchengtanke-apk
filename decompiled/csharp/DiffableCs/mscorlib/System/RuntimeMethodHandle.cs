namespace System;

[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
public struct RuntimeMethodHandle : ISerializable
{
	private IntPtr value; //Field offset: 0x0

	public IntPtr Value
	{
		 get { } //Length: 8
	}

	internal RuntimeMethodHandle(IntPtr v) { }

	private RuntimeMethodHandle(SerializationInfo info, StreamingContext context) { }

	internal static string ConstructInstantiation(RuntimeMethodInfo method, TypeNameFormatFlags format) { }

	[ReliabilityContract(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public virtual bool Equals(object obj) { }

	public IntPtr get_Value() { }

	public virtual int GetHashCode() { }

	public override void GetObjectData(SerializationInfo info, StreamingContext context) { }

	internal bool IsNullHandle() { }

}

