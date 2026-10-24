namespace System.Runtime.Remoting.Messaging;

[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
public interface IMethodReturnMessage : IMethodMessage, IMessage
{

	public Exception Exception
	{
		 get { } //Length: 0
	}

	public Object[] OutArgs
	{
		 get { } //Length: 0
	}

	public object ReturnValue
	{
		 get { } //Length: 0
	}

	public Exception get_Exception() { }

	public Object[] get_OutArgs() { }

	public object get_ReturnValue() { }

}

