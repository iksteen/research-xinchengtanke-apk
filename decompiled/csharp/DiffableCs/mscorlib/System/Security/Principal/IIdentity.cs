namespace System.Security.Principal;

[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
public interface IIdentity
{

	public string AuthenticationType
	{
		 get { } //Length: 0
	}

	public string Name
	{
		 get { } //Length: 0
	}

	public string get_AuthenticationType() { }

	public string get_Name() { }

}

