namespace System.Reflection;

[ClassInterface(/*Cpp2IL Warning: missing at least one required parameter*/)]
[ComDefaultInterface(/*Cpp2IL Warning: missing at least one required parameter*/)]
[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
public abstract class FieldInfo : MemberInfo, _FieldInfo
{

	public abstract FieldAttributes Attributes
	{
		 get { } //Length: 0
	}

	public abstract RuntimeFieldHandle FieldHandle
	{
		 get { } //Length: 0
	}

	public abstract Type FieldType
	{
		 get { } //Length: 0
	}

	public override bool IsLiteral
	{
		 get { } //Length: 36
	}

	public override bool IsNotSerialized
	{
		 get { } //Length: 36
	}

	public override bool IsStatic
	{
		 get { } //Length: 36
	}

	public virtual MemberTypes MemberType
	{
		 get { } //Length: 8
	}

	protected FieldInfo() { }

	public virtual bool Equals(object obj) { }

	public abstract FieldAttributes get_Attributes() { }

	public abstract RuntimeFieldHandle get_FieldHandle() { }

	public abstract Type get_FieldType() { }

	public override bool get_IsLiteral() { }

	public override bool get_IsNotSerialized() { }

	public override bool get_IsStatic() { }

	private MarshalAsAttribute get_marshal_info() { }

	public virtual MemberTypes get_MemberType() { }

	public static FieldInfo GetFieldFromHandle(RuntimeFieldHandle handle) { }

	[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public static FieldInfo GetFieldFromHandle(RuntimeFieldHandle handle, RuntimeTypeHandle declaringType) { }

	internal override int GetFieldOffset() { }

	public virtual int GetHashCode() { }

	internal Object[] GetPseudoCustomAttributes() { }

	public override object GetRawConstantValue() { }

	public abstract object GetValue(object obj) { }

	private static FieldInfo internal_from_handle_type(IntPtr field_handle, IntPtr type_handle) { }

	public static bool op_Equality(FieldInfo left, FieldInfo right) { }

	public static bool op_Inequality(FieldInfo left, FieldInfo right) { }

	[DebuggerHidden]
	[DebuggerStepThrough]
	public override void SetValue(object obj, object value) { }

	public abstract void SetValue(object obj, object value, BindingFlags invokeAttr, Binder binder, CultureInfo culture) { }

	[CLSCompliant(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public override void SetValueDirect(TypedReference obj, object value) { }

}

