namespace UnityEngine.Bindings;

[AttributeUsage(/*Cpp2IL Warning: missing at least one required parameter*/)]
[VisibleToOtherModules]
internal class FreeFunctionAttribute : NativeMethodAttribute
{

	public FreeFunctionAttribute() { }

	public FreeFunctionAttribute(string name) { }

	public FreeFunctionAttribute(string name, bool isThreadSafe) { }

}

