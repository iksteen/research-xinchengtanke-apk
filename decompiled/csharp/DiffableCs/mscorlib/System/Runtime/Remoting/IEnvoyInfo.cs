namespace System.Runtime.Remoting;

[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
public interface IEnvoyInfo
{

	public IMessageSink EnvoySinks
	{
		 get { } //Length: 0
	}

	public IMessageSink get_EnvoySinks() { }

}

