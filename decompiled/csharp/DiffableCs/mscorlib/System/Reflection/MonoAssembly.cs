namespace System.Reflection;

[ClassInterface(/*Cpp2IL Warning: missing at least one required parameter*/)]
[ComDefaultInterface(/*Cpp2IL Warning: missing at least one required parameter*/)]
[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
internal class MonoAssembly : RuntimeAssembly
{

	public MonoAssembly() { }

	public virtual Module GetModule(string name) { }

	public virtual Module[] GetModules(bool getResourceModules) { }

	public virtual Type GetType(string name, bool throwOnError, bool ignoreCase) { }

}

