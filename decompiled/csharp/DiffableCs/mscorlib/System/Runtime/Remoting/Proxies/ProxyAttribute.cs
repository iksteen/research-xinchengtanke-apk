namespace System.Runtime.Remoting.Proxies;

[AttributeUsage(/*Cpp2IL Warning: missing at least one required parameter*/)]
[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
public class ProxyAttribute : Attribute
{

	public override MarshalByRefObject CreateInstance(Type serverType) { }

	public override RealProxy CreateProxy(ObjRef objRef, Type serverType, object serverObject, Context serverContext) { }

}

