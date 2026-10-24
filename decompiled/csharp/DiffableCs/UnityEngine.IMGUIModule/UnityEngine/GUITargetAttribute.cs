namespace UnityEngine;

[AttributeUsage(/*Cpp2IL Warning: missing at least one required parameter*/)]
public class GUITargetAttribute : Attribute
{
	internal int displayMask; //Field offset: 0x10

	[RequiredByNativeCode]
	private static int GetGUITargetAttrValue(Type klass, string methodName) { }

}

