namespace System.Resources;

[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
public interface IResourceReader : IEnumerable, IDisposable
{

	public void Close() { }

	public IDictionaryEnumerator GetEnumerator() { }

}

