namespace System;

[AttributeUsage(/*Cpp2IL Warning: missing at least one required parameter*/)]
public abstract class Attribute
{

	protected Attribute() { }

	private static bool AreFieldValuesEqual(object thisValue, object thatValue) { }

	public virtual bool Equals(object obj) { }

	public static Attribute GetCustomAttribute(MemberInfo element, Type attributeType) { }

	public static Attribute GetCustomAttribute(MemberInfo element, Type attributeType, bool inherit) { }

	public static Attribute GetCustomAttribute(Assembly element, Type attributeType) { }

	public static Attribute GetCustomAttribute(Assembly element, Type attributeType, bool inherit) { }

	public static Attribute[] GetCustomAttributes(MemberInfo element, Type type, bool inherit) { }

	public static Attribute[] GetCustomAttributes(Assembly element, Type attributeType, bool inherit) { }

	public virtual int GetHashCode() { }

	private static Attribute[] InternalGetCustomAttributes(PropertyInfo element, Type type, bool inherit) { }

	private static Attribute[] InternalGetCustomAttributes(EventInfo element, Type type, bool inherit) { }

	private static bool InternalIsDefined(PropertyInfo element, Type attributeType, bool inherit) { }

	private static bool InternalIsDefined(EventInfo element, Type attributeType, bool inherit) { }

	public static bool IsDefined(MemberInfo element, Type attributeType) { }

	public static bool IsDefined(MemberInfo element, Type attributeType, bool inherit) { }

}

