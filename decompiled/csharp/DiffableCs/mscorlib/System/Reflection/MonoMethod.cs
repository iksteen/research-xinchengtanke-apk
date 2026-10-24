namespace System.Reflection;

internal class MonoMethod : RuntimeMethodInfo
{
	internal IntPtr mhandle; //Field offset: 0x10
	private string name; //Field offset: 0x18
	private Type reftype; //Field offset: 0x20

	public virtual MethodAttributes Attributes
	{
		 get { } //Length: 8
	}

	public virtual CallingConventions CallingConvention
	{
		 get { } //Length: 48
	}

	public virtual bool ContainsGenericParameters
	{
		 get { } //Length: 224
	}

	public virtual Type DeclaringType
	{
		 get { } //Length: 48
	}

	public virtual bool IsGenericMethod
	{
		 get { } //Length: 4
	}

	public virtual bool IsGenericMethodDefinition
	{
		 get { } //Length: 4
	}

	public virtual bool IsSecurityCritical
	{
		 get { } //Length: 8
	}

	public virtual RuntimeMethodHandle MethodHandle
	{
		 get { } //Length: 8
	}

	public virtual string Name
	{
		 get { } //Length: 40
	}

	public virtual Type ReflectedType
	{
		 get { } //Length: 8
	}

	public virtual Type ReturnType
	{
		 get { } //Length: 48
	}

	internal MonoMethod() { }

	internal static void ConvertValues(Binder binder, Object[] args, ParameterInfo[] pinfo, CultureInfo culture, BindingFlags invokeAttr) { }

	public virtual MethodAttributes get_Attributes() { }

	internal static MonoMethod get_base_method(MonoMethod method, bool definition) { }

	public virtual CallingConventions get_CallingConvention() { }

	public virtual bool get_ContainsGenericParameters() { }

	private static int get_core_clr_security_level() { }

	public virtual Type get_DeclaringType() { }

	public virtual bool get_IsGenericMethod() { }

	public virtual bool get_IsGenericMethodDefinition() { }

	public virtual bool get_IsSecurityCritical() { }

	public virtual RuntimeMethodHandle get_MethodHandle() { }

	internal static string get_name(MethodBase method) { }

	public virtual string get_Name() { }

	public virtual Type get_ReflectedType() { }

	public virtual Type get_ReturnType() { }

	internal virtual MethodInfo GetBaseMethod() { }

	public virtual Object[] GetCustomAttributes(bool inherit) { }

	public virtual Object[] GetCustomAttributes(Type attributeType, bool inherit) { }

	public virtual IList<CustomAttributeData> GetCustomAttributesData() { }

	public virtual Type[] GetGenericArguments() { }

	public virtual MethodInfo GetGenericMethodDefinition() { }

	private MethodInfo GetGenericMethodDefinition_impl() { }

	public virtual MethodImplAttributes GetMethodImplementationFlags() { }

	public virtual ParameterInfo[] GetParameters() { }

	internal virtual int GetParametersCount() { }

	internal virtual ParameterInfo[] GetParametersInternal() { }

	internal void GetPInvoke(out PInvokeAttributes flags, out string entryPoint, out string dllName) { }

	internal Object[] GetPseudoCustomAttributes() { }

	internal object InternalInvoke(object obj, Object[] parameters, out Exception exc) { }

	[DebuggerHidden]
	[DebuggerStepThrough]
	public virtual object Invoke(object obj, BindingFlags invokeAttr, Binder binder, Object[] parameters, CultureInfo culture) { }

	public virtual bool IsDefined(Type attributeType, bool inherit) { }

	public virtual MethodInfo MakeGenericMethod(Type[] methodInstantiation) { }

	private MethodInfo MakeGenericMethod_impl(Type[] types) { }

}

