namespace System;

[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
public struct RuntimeTypeHandle : ISerializable
{
	private IntPtr value; //Field offset: 0x0

	public IntPtr Value
	{
		 get { } //Length: 8
	}

	internal RuntimeTypeHandle(IntPtr val) { }

	internal RuntimeTypeHandle(RuntimeType type) { }

	private RuntimeTypeHandle(SerializationInfo info, StreamingContext context) { }

	internal static bool CanCastTo(RuntimeType type, RuntimeType target) { }

	[ReliabilityContract(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public virtual bool Equals(object obj) { }

	public IntPtr get_Value() { }

	internal static int GetArrayRank(RuntimeType type) { }

	internal static RuntimeAssembly GetAssembly(RuntimeType type) { }

	internal static TypeAttributes GetAttributes(RuntimeType type) { }

	internal static RuntimeType GetBaseType(RuntimeType type) { }

	internal static RuntimeType GetElementType(RuntimeType type) { }

	internal static IntPtr GetGenericParameterInfo(RuntimeType type) { }

	internal static Type GetGenericTypeDefinition(RuntimeType type) { }

	private static Type GetGenericTypeDefinition_impl(RuntimeType type) { }

	public virtual int GetHashCode() { }

	private static int GetMetadataToken(RuntimeType type) { }

	internal static RuntimeModule GetModule(RuntimeType type) { }

	public override void GetObjectData(SerializationInfo info, StreamingContext context) { }

	internal static int GetToken(RuntimeType type) { }

	internal static bool HasElementType(RuntimeType type) { }

	internal static bool HasInstantiation(RuntimeType type) { }

	internal static bool HasReferences(RuntimeType type) { }

	internal static bool IsArray(RuntimeType type) { }

	internal static bool IsByRef(RuntimeType type) { }

	internal static bool IsComObject(RuntimeType type) { }

	internal static bool IsComObject(RuntimeType type, bool isGenericCOM) { }

	internal static bool IsContextful(RuntimeType type) { }

	internal static bool IsEquivalentTo(RuntimeType rtType1, RuntimeType rtType2) { }

	internal static bool IsGenericTypeDefinition(RuntimeType type) { }

	internal static bool IsGenericVariable(RuntimeType type) { }

	internal static bool IsInstanceOfType(RuntimeType type, object o) { }

	internal static bool IsInterface(RuntimeType type) { }

	internal static bool IsPointer(RuntimeType type) { }

	internal static bool IsPrimitive(RuntimeType type) { }

	internal static bool IsSzArray(RuntimeType type) { }

	private static bool type_is_assignable_from(Type a, Type b) { }

}

