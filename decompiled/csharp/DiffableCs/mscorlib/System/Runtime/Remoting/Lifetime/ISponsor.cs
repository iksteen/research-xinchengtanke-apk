namespace System.Runtime.Remoting.Lifetime;

[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
public interface ISponsor
{

	public TimeSpan Renewal(ILease lease) { }

}

