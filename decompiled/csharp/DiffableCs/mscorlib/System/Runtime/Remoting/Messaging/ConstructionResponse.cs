namespace System.Runtime.Remoting.Messaging;

[CLSCompliant(/*Cpp2IL Warning: missing at least one required parameter*/)]
[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
public class ConstructionResponse : MethodResponse, IConstructionReturnMessage, IMethodReturnMessage, IMethodMessage, IMessage
{

	public virtual IDictionary Properties
	{
		 get { } //Length: 8
	}

	internal ConstructionResponse(object resultObject, LogicalCallContext callCtx, IMethodCallMessage msg) { }

	internal ConstructionResponse(Exception e, IMethodCallMessage msg) { }

	internal ConstructionResponse(SerializationInfo info, StreamingContext context) { }

	public virtual IDictionary get_Properties() { }

}

