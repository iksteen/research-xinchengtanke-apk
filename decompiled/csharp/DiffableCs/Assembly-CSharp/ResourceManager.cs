//Type is in global namespace

public class ResourceManager
{
	private static ResourceManager instance; //Field offset: 0x0
	private Dictionary<String, Object> dicAsset; //Field offset: 0x10
	private Dictionary<String, WWW> dicLoadingReq; //Field offset: 0x18

	public Dictionary<String, Object> DicAsset
	{
		 get { } //Length: 8
	}

	public static ResourceManager Instance
	{
		 get { } //Length: 128
	}

	public ResourceManager() { }

	public Dictionary<String, Object> get_DicAsset() { }

	public static ResourceManager get_Instance() { }

	public WWW GetLoadingWWW(string name) { }

	private Type GetLoadType(string typeStr) { }

	public object GetResource(string name) { }

	public bool IsResLoaded(string name) { }

	public bool IsResLoading(string name) { }

	public static T Load(string assetPath) { }

	public void UnrefAsset(string name) { }

}

