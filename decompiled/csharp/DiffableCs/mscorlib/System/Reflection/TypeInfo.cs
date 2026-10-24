namespace System.Reflection;

[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
public abstract class TypeInfo : Type, IReflectableType
{

	[FriendAccessAllowed]
	internal TypeInfo() { }

	private override TypeInfo System.Reflection.IReflectableType.GetTypeInfo() { }

}

