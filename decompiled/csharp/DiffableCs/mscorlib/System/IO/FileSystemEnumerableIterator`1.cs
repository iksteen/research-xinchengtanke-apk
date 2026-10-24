namespace System.IO;

internal class FileSystemEnumerableIterator : Iterator<TSource>
{
	private SearchResultHandler<TSource> _resultHandler; //Field offset: 0x0
	private List<SearchData> searchStack; //Field offset: 0x0
	private SearchData searchData; //Field offset: 0x0
	private string searchCriteria; //Field offset: 0x0
	private SafeFindHandle _hnd; //Field offset: 0x0
	private bool needsParentPathDiscoveryDemand; //Field offset: 0x0
	private bool empty; //Field offset: 0x0
	private string userPath; //Field offset: 0x0
	private SearchOption searchOption; //Field offset: 0x0
	private string fullPath; //Field offset: 0x0
	private string normalizedSearchPath; //Field offset: 0x0
	private bool _checkHost; //Field offset: 0x0

	internal FileSystemEnumerableIterator`1(string path, string originalUserPath, string searchPattern, SearchOption searchOption, SearchResultHandler<TSource> resultHandler, bool checkHost) { }

	private FileSystemEnumerableIterator`1(string fullPath, string normalizedSearchPath, string searchCriteria, string userPath, SearchOption searchOption, SearchResultHandler<TSource> resultHandler, bool checkHost) { }

	private void AddSearchableDirsToStack(SearchData localSearchData) { }

	protected virtual Iterator<TSource> Clone() { }

	private void CommonInit() { }

	private SearchResult CreateSearchResult(SearchData localSearchData, WIN32_FIND_DATA findData) { }

	protected virtual void Dispose(bool disposing) { }

	internal void DoDemand(string fullPathToDemand) { }

	private static string GetFullSearchString(string fullPath, string searchPattern) { }

	private static string GetNormalizedSearchCriteria(string fullSearchString, string fullPathMod) { }

	private void HandleError(int hr, string path) { }

	public virtual bool MoveNext() { }

	private static string NormalizeSearchPattern(string searchPattern) { }

}

