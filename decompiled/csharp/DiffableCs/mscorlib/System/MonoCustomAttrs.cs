namespace System;

internal static class MonoCustomAttrs
{
	private class AttributeInfo
	{
		private AttributeUsageAttribute _usage; //Field offset: 0x10
		private int _inheritanceLevel; //Field offset: 0x18

		public int InheritanceLevel
		{
			 get { } //Length: 8
		}

		public AttributeUsageAttribute Usage
		{
			 get { } //Length: 8
		}

		public AttributeInfo(AttributeUsageAttribute usage, int inheritanceLevel) { }

		public int get_InheritanceLevel() { }

		public AttributeUsageAttribute get_Usage() { }

	}

	[ThreadStatic]
	private static Dictionary<Type, AttributeUsageAttribute> usage_cache; //Field offset: 0x80000000
	private static Assembly corlib; //Field offset: 0x0
	private static readonly AttributeUsageAttribute DefaultAttributeUsage; //Field offset: 0x8

	private static MonoCustomAttrs() { }

	private static ICustomAttributeProvider GetBase(ICustomAttributeProvider obj) { }

	private static EventInfo GetBaseEventDefinition(MonoEvent evt) { }

	private static PropertyInfo GetBasePropertyDefinition(MonoProperty property) { }

	internal static Object[] GetCustomAttributes(ICustomAttributeProvider obj, Type attributeType, bool inherit) { }

	internal static Object[] GetCustomAttributes(ICustomAttributeProvider obj, bool inherit) { }

	internal static Object[] GetCustomAttributesBase(ICustomAttributeProvider obj, Type attributeType, bool inheritedOnly) { }

	internal static IList<CustomAttributeData> GetCustomAttributesData(ICustomAttributeProvider obj) { }

	private static CustomAttributeData[] GetCustomAttributesDataInternal(ICustomAttributeProvider obj) { }

	internal static Object[] GetCustomAttributesInternal(ICustomAttributeProvider obj, Type attributeType, bool pseudoAttrs) { }

	private static Object[] GetPseudoCustomAttributes(Type type) { }

	internal static Object[] GetPseudoCustomAttributes(ICustomAttributeProvider obj, Type attributeType) { }

	internal static bool IsDefined(ICustomAttributeProvider obj, Type attributeType, bool inherit) { }

	internal static bool IsDefinedInternal(ICustomAttributeProvider obj, Type AttributeType) { }

	private static bool IsUserCattrProvider(object obj) { }

	private static AttributeUsageAttribute RetrieveAttributeUsage(Type attributeType) { }

	private static AttributeUsageAttribute RetrieveAttributeUsageNoCache(Type attributeType) { }

}

