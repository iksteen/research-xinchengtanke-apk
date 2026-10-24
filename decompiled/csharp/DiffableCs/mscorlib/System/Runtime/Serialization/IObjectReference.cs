namespace System.Runtime.Serialization;

[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
public interface IObjectReference
{

	public object GetRealObject(StreamingContext context) { }

}

