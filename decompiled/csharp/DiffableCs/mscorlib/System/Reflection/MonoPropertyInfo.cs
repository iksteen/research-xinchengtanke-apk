namespace System.Reflection;

internal struct MonoPropertyInfo
{
	public Type parent; //Field offset: 0x0
	public Type declaring_type; //Field offset: 0x8
	public string name; //Field offset: 0x10
	public MethodInfo get_method; //Field offset: 0x18
	public MethodInfo set_method; //Field offset: 0x20
	public PropertyAttributes attrs; //Field offset: 0x28

	internal static object get_default_value(MonoProperty prop) { }

	internal static void get_property_info(MonoProperty prop, ref MonoPropertyInfo info, PInfo req_info) { }

	internal static Type[] GetTypeModifiers(MonoProperty prop, bool optional) { }

}

