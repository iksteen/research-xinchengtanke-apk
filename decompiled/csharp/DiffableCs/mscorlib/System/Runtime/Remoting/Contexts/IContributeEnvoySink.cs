namespace System.Runtime.Remoting.Contexts;

[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
public interface IContributeEnvoySink
{

	public IMessageSink GetEnvoySink(MarshalByRefObject obj, IMessageSink nextSink) { }

}

