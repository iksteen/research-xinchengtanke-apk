//Type is in global namespace

public class GlobalSetting
{
	public static string NetAssetsUrl; //Field offset: 0x0
	public static bool UseLocalResources; //Field offset: 0x8

	public static string PlatformResourcesUrl
	{
		 get { } //Length: 348
	}

	private static GlobalSetting() { }

	public GlobalSetting() { }

	public static string get_PlatformResourcesUrl() { }

	public static string GetNameByWholePath(string path) { }

}

