namespace System.Reflection.Emit;

public abstract class PropertyBuilder : PropertyInfo
{

	public virtual PropertyAttributes Attributes
	{
		 get { } //Length: 60
	}

	public virtual bool CanRead
	{
		 get { } //Length: 60
	}

	public virtual bool CanWrite
	{
		 get { } //Length: 60
	}

	public virtual Type DeclaringType
	{
		 get { } //Length: 60
	}

	public virtual string Name
	{
		 get { } //Length: 60
	}

	public virtual Type PropertyType
	{
		 get { } //Length: 60
	}

	public virtual Type ReflectedType
	{
		 get { } //Length: 60
	}

	public virtual PropertyAttributes get_Attributes() { }

	public virtual bool get_CanRead() { }

	public virtual bool get_CanWrite() { }

	public virtual Type get_DeclaringType() { }

	public virtual string get_Name() { }

	public virtual Type get_PropertyType() { }

	public virtual Type get_ReflectedType() { }

	public virtual MethodInfo[] GetAccessors(bool nonPublic) { }

	public virtual Object[] GetCustomAttributes(bool inherit) { }

	public virtual Object[] GetCustomAttributes(Type attributeType, bool inherit) { }

	public virtual MethodInfo GetGetMethod(bool nonPublic) { }

	public virtual ParameterInfo[] GetIndexParameters() { }

	public virtual MethodInfo GetSetMethod(bool nonPublic) { }

	public virtual object GetValue(object obj, BindingFlags invokeAttr, Binder binder, Object[] index, CultureInfo culture) { }

	public virtual bool IsDefined(Type attributeType, bool inherit) { }

	public virtual void SetValue(object obj, object value, BindingFlags invokeAttr, Binder binder, Object[] index, CultureInfo culture) { }

}

