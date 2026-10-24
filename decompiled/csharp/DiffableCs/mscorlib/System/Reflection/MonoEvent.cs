namespace System.Reflection;

internal sealed class MonoEvent : RuntimeEventInfo
{
	private IntPtr klass; //Field offset: 0x18
	private IntPtr handle; //Field offset: 0x20

	public virtual Type DeclaringType
	{
		 get { } //Length: 48
	}

	public virtual string Name
	{
		 get { } //Length: 48
	}

	public virtual Type ReflectedType
	{
		 get { } //Length: 48
	}

	public MonoEvent() { }

	public virtual Type get_DeclaringType() { }

	public virtual string get_Name() { }

	public virtual Type get_ReflectedType() { }

	public virtual MethodInfo GetAddMethod(bool nonPublic) { }

	public virtual Object[] GetCustomAttributes(bool inherit) { }

	public virtual Object[] GetCustomAttributes(Type attributeType, bool inherit) { }

	public virtual IList<CustomAttributeData> GetCustomAttributesData() { }

	public virtual MethodInfo GetRaiseMethod(bool nonPublic) { }

	public virtual MethodInfo GetRemoveMethod(bool nonPublic) { }

	public virtual bool IsDefined(Type attributeType, bool inherit) { }

	public virtual string ToString() { }

}

