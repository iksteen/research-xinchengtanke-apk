namespace System.Runtime.Remoting.Activation;

[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
public interface IActivator
{

	public IActivator NextActivator
	{
		 get { } //Length: 0
	}

	public IConstructionReturnMessage Activate(IConstructionCallMessage msg) { }

	public IActivator get_NextActivator() { }

}

