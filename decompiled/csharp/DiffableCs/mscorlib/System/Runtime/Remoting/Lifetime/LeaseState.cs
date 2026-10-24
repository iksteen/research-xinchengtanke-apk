namespace System.Runtime.Remoting.Lifetime;

[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
public enum LeaseState
{
	Null = 0,
	Initial = 1,
	Active = 2,
	Renewing = 3,
	Expired = 4,
}

