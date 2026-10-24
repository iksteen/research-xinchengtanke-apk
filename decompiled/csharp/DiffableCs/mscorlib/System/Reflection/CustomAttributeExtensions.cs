namespace System.Reflection;

[Extension]
public static class CustomAttributeExtensions
{

	[Extension]
	public static Attribute GetCustomAttribute(Assembly element, Type attributeType) { }

	[Extension]
	public static T GetCustomAttribute(Assembly element) { }

}

