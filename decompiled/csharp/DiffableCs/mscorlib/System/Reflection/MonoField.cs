namespace System.Reflection;

internal class MonoField : RtFieldInfo
{
	internal IntPtr klass; //Field offset: 0x10
	internal RuntimeFieldHandle fhandle; //Field offset: 0x18
	private string name; //Field offset: 0x20
	private Type type; //Field offset: 0x28
	private FieldAttributes attrs; //Field offset: 0x30

	public virtual FieldAttributes Attributes
	{
		 get { } //Length: 8
	}

	public virtual Type DeclaringType
	{
		 get { } //Length: 8
	}

	public virtual RuntimeFieldHandle FieldHandle
	{
		 get { } //Length: 8
	}

	public virtual Type FieldType
	{
		 get { } //Length: 156
	}

	public virtual string Name
	{
		 get { } //Length: 8
	}

	public virtual Type ReflectedType
	{
		 get { } //Length: 8
	}

	public MonoField() { }

	private void CheckGeneric() { }

	public virtual FieldAttributes get_Attributes() { }

	public virtual Type get_DeclaringType() { }

	public virtual RuntimeFieldHandle get_FieldHandle() { }

	public virtual Type get_FieldType() { }

	public virtual string get_Name() { }

	public virtual Type get_ReflectedType() { }

	public virtual Object[] GetCustomAttributes(bool inherit) { }

	public virtual Object[] GetCustomAttributes(Type attributeType, bool inherit) { }

	public virtual IList<CustomAttributeData> GetCustomAttributesData() { }

	internal virtual int GetFieldOffset() { }

	private Type GetParentType(bool declaring) { }

	public virtual object GetRawConstantValue() { }

	public virtual object GetValue(object obj) { }

	private object GetValueInternal(object obj) { }

	public virtual bool IsDefined(Type attributeType, bool inherit) { }

	private Type ResolveType() { }

	public virtual void SetValue(object obj, object val, BindingFlags invokeAttr, Binder binder, CultureInfo culture) { }

	private static void SetValueInternal(FieldInfo fi, object obj, object value) { }

	public virtual string ToString() { }

}

