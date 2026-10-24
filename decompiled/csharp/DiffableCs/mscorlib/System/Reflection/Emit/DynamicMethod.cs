namespace System.Reflection.Emit;

[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
public sealed class DynamicMethod : MethodInfo
{

	public virtual MethodAttributes Attributes
	{
		 get { } //Length: 60
	}

	public virtual Type DeclaringType
	{
		 get { } //Length: 60
	}

	public virtual RuntimeMethodHandle MethodHandle
	{
		 get { } //Length: 60
	}

	public virtual string Name
	{
		 get { } //Length: 60
	}

	public virtual Type ReflectedType
	{
		 get { } //Length: 60
	}

	public virtual MethodAttributes get_Attributes() { }

	public virtual Type get_DeclaringType() { }

	public virtual RuntimeMethodHandle get_MethodHandle() { }

	public virtual string get_Name() { }

	public virtual Type get_ReflectedType() { }

	public virtual Object[] GetCustomAttributes(bool inherit) { }

	public virtual Object[] GetCustomAttributes(Type attributeType, bool inherit) { }

	public virtual MethodImplAttributes GetMethodImplementationFlags() { }

	public virtual ParameterInfo[] GetParameters() { }

	public virtual object Invoke(object obj, BindingFlags invokeAttr, Binder binder, Object[] parameters, CultureInfo culture) { }

	public virtual bool IsDefined(Type attributeType, bool inherit) { }

}

