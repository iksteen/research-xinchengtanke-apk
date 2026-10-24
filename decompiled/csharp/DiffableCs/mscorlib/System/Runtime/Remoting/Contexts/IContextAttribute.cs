namespace System.Runtime.Remoting.Contexts;

[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
public interface IContextAttribute
{

	public void GetPropertiesForNewContext(IConstructionCallMessage msg) { }

	public bool IsContextOK(Context ctx, IConstructionCallMessage msg) { }

}

