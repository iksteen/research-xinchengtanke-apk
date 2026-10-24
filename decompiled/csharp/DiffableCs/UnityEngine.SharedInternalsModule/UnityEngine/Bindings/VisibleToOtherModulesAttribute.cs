namespace UnityEngine.Bindings;

[AttributeUsage(/*Cpp2IL Warning: missing at least one required parameter*/)]
[VisibleToOtherModules]
internal class VisibleToOtherModulesAttribute : Attribute
{

	public VisibleToOtherModulesAttribute() { }

	public VisibleToOtherModulesAttribute(String[] modules) { }

}

