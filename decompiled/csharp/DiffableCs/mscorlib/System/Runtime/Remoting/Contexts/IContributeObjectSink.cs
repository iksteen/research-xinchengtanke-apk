namespace System.Runtime.Remoting.Contexts;

[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
public interface IContributeObjectSink
{

	public IMessageSink GetObjectSink(MarshalByRefObject obj, IMessageSink nextSink) { }

}

