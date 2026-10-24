namespace System.Runtime.Serialization;

[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
public interface ISurrogateSelector
{

	public ISerializationSurrogate GetSurrogate(Type type, StreamingContext context, out ISurrogateSelector selector) { }

}

