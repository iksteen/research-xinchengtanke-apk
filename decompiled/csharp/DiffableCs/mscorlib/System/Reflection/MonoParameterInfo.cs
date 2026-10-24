namespace System.Reflection;

[ClassInterface(/*Cpp2IL Warning: missing at least one required parameter*/)]
[ComDefaultInterface(/*Cpp2IL Warning: missing at least one required parameter*/)]
[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
internal class MonoParameterInfo : RuntimeParameterInfo
{

	public virtual object DefaultValue
	{
		 get { } //Length: 652
	}

	internal MonoParameterInfo(ParameterInfo pinfo, MemberInfo member) { }

	public virtual object get_DefaultValue() { }

	public virtual Object[] GetCustomAttributes(Type attributeType, bool inherit) { }

	public virtual bool IsDefined(Type attributeType, bool inherit) { }

}

