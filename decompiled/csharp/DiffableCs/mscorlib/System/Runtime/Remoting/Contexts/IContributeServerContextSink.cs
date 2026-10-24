namespace System.Runtime.Remoting.Contexts;

[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
public interface IContributeServerContextSink
{

	public IMessageSink GetServerContextSink(IMessageSink nextSink) { }

}

