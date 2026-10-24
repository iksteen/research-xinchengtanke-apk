namespace System.Runtime.Remoting.Contexts;

[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
public interface IContributeClientContextSink
{

	public IMessageSink GetClientContextSink(IMessageSink nextSink) { }

}

