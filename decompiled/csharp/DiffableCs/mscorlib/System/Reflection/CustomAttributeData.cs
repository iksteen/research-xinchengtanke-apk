namespace System.Reflection;

[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
public class CustomAttributeData
{
	private class LazyCAttrData
	{
		internal Assembly assembly; //Field offset: 0x10
		internal IntPtr data; //Field offset: 0x18
		internal uint data_length; //Field offset: 0x20

		public LazyCAttrData() { }

	}

	private ConstructorInfo ctorInfo; //Field offset: 0x10
	private IList<CustomAttributeTypedArgument> ctorArgs; //Field offset: 0x18
	private IList<CustomAttributeNamedArgument> namedArgs; //Field offset: 0x20
	private LazyCAttrData lazyData; //Field offset: 0x28

	public Type AttributeType
	{
		 get { } //Length: 32
	}

	[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public override ConstructorInfo Constructor
	{
		 get { } //Length: 8
	}

	[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public override IList<CustomAttributeTypedArgument> ConstructorArguments
	{
		 get { } //Length: 36
	}

	public override IList<CustomAttributeNamedArgument> NamedArguments
	{
		 get { } //Length: 36
	}

	protected CustomAttributeData() { }

	internal CustomAttributeData(ConstructorInfo ctorInfo, Assembly assembly, IntPtr data, uint data_length) { }

	public virtual bool Equals(object obj) { }

	public Type get_AttributeType() { }

	public override ConstructorInfo get_Constructor() { }

	public override IList<CustomAttributeTypedArgument> get_ConstructorArguments() { }

	public override IList<CustomAttributeNamedArgument> get_NamedArguments() { }

	public static IList<CustomAttributeData> GetCustomAttributes(ParameterInfo target) { }

	public static IList<CustomAttributeData> GetCustomAttributes(Module target) { }

	public static IList<CustomAttributeData> GetCustomAttributes(MemberInfo target) { }

	public static IList<CustomAttributeData> GetCustomAttributes(Assembly target) { }

	internal static IList<CustomAttributeData> GetCustomAttributesInternal(RuntimeType target) { }

	public virtual int GetHashCode() { }

	private void ResolveArguments() { }

	private static void ResolveArgumentsInternal(ConstructorInfo ctor, Assembly assembly, IntPtr data, uint data_length, out Object[] ctorArgs, out Object[] namedArgs) { }

	public virtual string ToString() { }

	private static T[] UnboxValues(Object[] values) { }

}

