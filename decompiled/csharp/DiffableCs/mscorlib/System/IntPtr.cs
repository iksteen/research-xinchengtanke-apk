namespace System;

[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
public struct IntPtr : ISerializable
{
	public static readonly IntPtr Zero; //Field offset: 0x0
	private Void* m_value; //Field offset: 0x0

	public static int Size
	{
		[ReliabilityContract(/*Cpp2IL Warning: missing at least one required parameter*/)]
		 get { } //Length: 8
	}

	[ReliabilityContract(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public IntPtr(int value) { }

	[ReliabilityContract(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public IntPtr(long value) { }

	[CLSCompliant(/*Cpp2IL Warning: missing at least one required parameter*/)]
	[ReliabilityContract(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public IntPtr(Void* value) { }

	private IntPtr(SerializationInfo info, StreamingContext context) { }

	public virtual bool Equals(object obj) { }

	[ReliabilityContract(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public static int get_Size() { }

	public virtual int GetHashCode() { }

	[ReliabilityContract(/*Cpp2IL Warning: missing at least one required parameter*/)]
	internal bool IsNull() { }

	[ReliabilityContract(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public static bool op_Equality(IntPtr value1, IntPtr value2) { }

	[CLSCompliant(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public static Void* op_Explicit(IntPtr value) { }

	[ReliabilityContract(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public static IntPtr op_Explicit(int value) { }

	[ReliabilityContract(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public static IntPtr op_Explicit(long value) { }

	[CLSCompliant(/*Cpp2IL Warning: missing at least one required parameter*/)]
	[ReliabilityContract(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public static IntPtr op_Explicit(Void* value) { }

	public static int op_Explicit(IntPtr value) { }

	[ReliabilityContract(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public static bool op_Inequality(IntPtr value1, IntPtr value2) { }

	private override void System.Runtime.Serialization.ISerializable.GetObjectData(SerializationInfo info, StreamingContext context) { }

	[ReliabilityContract(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public long ToInt64() { }

	[CLSCompliant(/*Cpp2IL Warning: missing at least one required parameter*/)]
	[ReliabilityContract(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public Void* ToPointer() { }

	public virtual string ToString() { }

	public string ToString(string format) { }

}

