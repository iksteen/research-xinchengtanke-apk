namespace System;

[CLSCompliant(/*Cpp2IL Warning: missing at least one required parameter*/)]
[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
public struct TypedReference
{
	private RuntimeTypeHandle type; //Field offset: 0x0
	private IntPtr Value; //Field offset: 0x8
	private IntPtr Type; //Field offset: 0x10

	internal bool IsNull
	{
		internal get { } //Length: 68
	}

	public virtual bool Equals(object o) { }

	internal bool get_IsNull() { }

	public virtual int GetHashCode() { }

	[CLSCompliant(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public static TypedReference MakeTypedReference(object target, FieldInfo[] flds) { }

	private static TypedReference MakeTypedReferenceInternal(object target, FieldInfo[] fields) { }

	[CLSCompliant(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public static void SetTypedReference(TypedReference target, object value) { }

}

