namespace System.Reflection;

[ClassInterface(/*Cpp2IL Warning: missing at least one required parameter*/)]
[ComDefaultInterface(/*Cpp2IL Warning: missing at least one required parameter*/)]
[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
public abstract class ConstructorInfo : MethodBase, _ConstructorInfo
{
	[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public static readonly string ConstructorName; //Field offset: 0x0
	[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public static readonly string TypeConstructorName; //Field offset: 0x8

	[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public virtual MemberTypes MemberType
	{
		 get { } //Length: 8
	}

	private static ConstructorInfo() { }

	protected ConstructorInfo() { }

	public virtual bool Equals(object obj) { }

	public virtual MemberTypes get_MemberType() { }

	public virtual int GetHashCode() { }

	[DebuggerHidden]
	[DebuggerStepThrough]
	public object Invoke(Object[] parameters) { }

	public abstract object Invoke(BindingFlags invokeAttr, Binder binder, Object[] parameters, CultureInfo culture) { }

	public static bool op_Equality(ConstructorInfo left, ConstructorInfo right) { }

	public static bool op_Inequality(ConstructorInfo left, ConstructorInfo right) { }

}

