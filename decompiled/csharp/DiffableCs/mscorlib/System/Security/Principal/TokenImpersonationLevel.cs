namespace System.Security.Principal;

[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
public enum TokenImpersonationLevel
{
	Anonymous = 1,
	Delegation = 4,
	Identification = 2,
	Impersonation = 3,
	None = 0,
}

