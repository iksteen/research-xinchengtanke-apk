namespace System.Reflection;

[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
public interface ICustomAttributeProvider
{

	public Object[] GetCustomAttributes(Type attributeType, bool inherit) { }

	public bool IsDefined(Type attributeType, bool inherit) { }

}

