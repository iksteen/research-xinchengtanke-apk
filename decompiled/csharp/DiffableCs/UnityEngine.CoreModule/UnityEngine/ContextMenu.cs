namespace UnityEngine;

[AttributeUsage(/*Cpp2IL Warning: missing at least one required parameter*/)]
[RequiredByNativeCode]
public sealed class ContextMenu : Attribute
{
	public readonly string menuItem; //Field offset: 0x10
	public readonly bool validate; //Field offset: 0x18
	public readonly int priority; //Field offset: 0x1C

	public ContextMenu(string itemName) { }

	public ContextMenu(string itemName, bool isValidateFunction) { }

	public ContextMenu(string itemName, bool isValidateFunction, int priority) { }

}

