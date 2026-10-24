namespace System.IO;

internal class StringResultHandler : SearchResultHandler<String>
{
	private bool _includeFiles; //Field offset: 0x10
	private bool _includeDirs; //Field offset: 0x11

	internal StringResultHandler(bool includeFiles, bool includeDirs) { }

	internal virtual string CreateObject(SearchResult result) { }

	internal virtual bool IsResultIncluded(SearchResult result) { }

}

