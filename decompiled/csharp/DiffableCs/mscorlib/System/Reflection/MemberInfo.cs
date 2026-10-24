namespace System.Reflection;

[ClassInterface(/*Cpp2IL Warning: missing at least one required parameter*/)]
[ComDefaultInterface(/*Cpp2IL Warning: missing at least one required parameter*/)]
[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
public abstract class MemberInfo : ICustomAttributeProvider, _MemberInfo
{

	public abstract Type DeclaringType
	{
		 get { } //Length: 0
	}

	public abstract MemberTypes MemberType
	{
		 get { } //Length: 0
	}

	public override int MetadataToken
	{
		 get { } //Length: 4
	}

	public override Module Module
	{
		 get { } //Length: 180
	}

	public abstract string Name
	{
		 get { } //Length: 0
	}

	public abstract Type ReflectedType
	{
		 get { } //Length: 0
	}

	protected MemberInfo() { }

	public virtual bool Equals(object obj) { }

	public abstract Type get_DeclaringType() { }

	public abstract MemberTypes get_MemberType() { }

	public override int get_MetadataToken() { }

	public override Module get_Module() { }

	public abstract string get_Name() { }

	public abstract Type get_ReflectedType() { }

	public abstract Object[] GetCustomAttributes(bool inherit) { }

	public abstract Object[] GetCustomAttributes(Type attributeType, bool inherit) { }

	public override IList<CustomAttributeData> GetCustomAttributesData() { }

	public virtual int GetHashCode() { }

	public abstract bool IsDefined(Type attributeType, bool inherit) { }

	public static bool op_Equality(MemberInfo left, MemberInfo right) { }

	public static bool op_Inequality(MemberInfo left, MemberInfo right) { }

}

