namespace System.Reflection;

internal class MonoProperty : RuntimePropertyInfo
{
	private sealed class Getter : MulticastDelegate
	{

		public Getter`2(object object, IntPtr method) { }

		public override IAsyncResult BeginInvoke(T _this, AsyncCallback callback, object object) { }

		public override R EndInvoke(IAsyncResult result) { }

		public override R Invoke(T _this) { }

	}

	private sealed class GetterAdapter : MulticastDelegate
	{

		public GetterAdapter(object object, IntPtr method) { }

		public override IAsyncResult BeginInvoke(object _this, AsyncCallback callback, object object) { }

		public override object EndInvoke(IAsyncResult result) { }

		public override object Invoke(object _this) { }

	}

	private sealed class StaticGetter : MulticastDelegate
	{

		public StaticGetter`1(object object, IntPtr method) { }

		public override IAsyncResult BeginInvoke(AsyncCallback callback, object object) { }

		public override R EndInvoke(IAsyncResult result) { }

		public override R Invoke() { }

	}

	internal IntPtr klass; //Field offset: 0x10
	internal IntPtr prop; //Field offset: 0x18
	private MonoPropertyInfo info; //Field offset: 0x20
	private PInfo cached; //Field offset: 0x50
	private GetterAdapter cached_getter; //Field offset: 0x58

	public virtual PropertyAttributes Attributes
	{
		 get { } //Length: 68
	}

	public virtual bool CanRead
	{
		 get { } //Length: 108
	}

	public virtual bool CanWrite
	{
		 get { } //Length: 108
	}

	public virtual Type DeclaringType
	{
		 get { } //Length: 68
	}

	public virtual string Name
	{
		 get { } //Length: 68
	}

	public virtual Type PropertyType
	{
		 get { } //Length: 224
	}

	public virtual Type ReflectedType
	{
		 get { } //Length: 68
	}

	public MonoProperty() { }

	private void CachePropertyInfo(PInfo flags) { }

	private static GetterAdapter CreateGetterDelegate(MethodInfo method) { }

	public virtual PropertyAttributes get_Attributes() { }

	public virtual bool get_CanRead() { }

	public virtual bool get_CanWrite() { }

	public virtual Type get_DeclaringType() { }

	public virtual string get_Name() { }

	public virtual Type get_PropertyType() { }

	public virtual Type get_ReflectedType() { }

	public virtual MethodInfo[] GetAccessors(bool nonPublic) { }

	public virtual object GetConstantValue() { }

	public virtual Object[] GetCustomAttributes(bool inherit) { }

	public virtual Object[] GetCustomAttributes(Type attributeType, bool inherit) { }

	public virtual IList<CustomAttributeData> GetCustomAttributesData() { }

	public virtual MethodInfo GetGetMethod(bool nonPublic) { }

	public virtual ParameterInfo[] GetIndexParameters() { }

	public virtual Type[] GetOptionalCustomModifiers() { }

	public virtual object GetRawConstantValue() { }

	public virtual Type[] GetRequiredCustomModifiers() { }

	public virtual MethodInfo GetSetMethod(bool nonPublic) { }

	private static object GetterAdapterFrame(Getter<T, R> getter, object obj) { }

	public virtual object GetValue(object obj, Object[] index) { }

	public virtual object GetValue(object obj, BindingFlags invokeAttr, Binder binder, Object[] index, CultureInfo culture) { }

	public virtual bool IsDefined(Type attributeType, bool inherit) { }

	public virtual void SetValue(object obj, object value, BindingFlags invokeAttr, Binder binder, Object[] index, CultureInfo culture) { }

	private static object StaticGetterAdapterFrame(StaticGetter<R> getter, object obj) { }

}

