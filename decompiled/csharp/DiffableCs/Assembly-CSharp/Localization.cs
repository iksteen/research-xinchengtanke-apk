//Type is in global namespace

public static class Localization
{
	internal sealed class LoadFunction : MulticastDelegate
	{

		public LoadFunction(object object, IntPtr method) { }

		public override IAsyncResult BeginInvoke(string path, AsyncCallback callback, object object) { }

		public override Byte[] EndInvoke(IAsyncResult result) { }

		public override Byte[] Invoke(string path) { }

	}

	internal sealed class OnLocalizeNotification : MulticastDelegate
	{

		public OnLocalizeNotification(object object, IntPtr method) { }

		public override IAsyncResult BeginInvoke(AsyncCallback callback, object object) { }

		public override void EndInvoke(IAsyncResult result) { }

		public override void Invoke() { }

	}

	public static LoadFunction loadFunction; //Field offset: 0x0
	public static OnLocalizeNotification onLocalize; //Field offset: 0x8
	public static bool localizationHasBeenSet; //Field offset: 0x10
	private static String[] mLanguages; //Field offset: 0x18
	private static Dictionary<String, String> mOldDictionary; //Field offset: 0x20
	private static Dictionary<String, String[]> mDictionary; //Field offset: 0x28
	private static Dictionary<String, String> mReplacement; //Field offset: 0x30
	private static int mLanguageIndex; //Field offset: 0x38
	private static string mLanguage; //Field offset: 0x40
	private static bool mMerging; //Field offset: 0x48

	public static Dictionary<String, String[]> dictionary
	{
		 get { } //Length: 240
		 set { } //Length: 124
	}

	[Obsolete]
	public static bool isActive
	{
		 get { } //Length: 8
	}

	public static String[] knownLanguages
	{
		 get { } //Length: 240
	}

	public static string language
	{
		 get { } //Length: 272
		 set { } //Length: 180
	}

	private static Localization() { }

	private static void AddCSV(BetterList<String> newValues, String[] newLanguages, Dictionary<String, Int32> languageIndices) { }

	public static void ClearReplacements() { }

	public static bool Exists(string key) { }

	private static String[] ExtractStrings(BetterList<String> added, String[] newLanguages, Dictionary<String, Int32> languageIndices) { }

	public static string Format(string key, Object[] parameters) { }

	public static string Format(string key, object arg0, object arg1, object arg2) { }

	public static string Format(string key, object arg0, object arg1) { }

	public static string Format(string key, object parameter) { }

	public static string Get(string key, bool warnIfMissing = true) { }

	public static string Get(string key, string fallback) { }

	public static Dictionary<String, String[]> get_dictionary() { }

	public static bool get_isActive() { }

	public static String[] get_knownLanguages() { }

	public static string get_language() { }

	public static bool Has(string key) { }

	private static bool HasLanguage(string languageName) { }

	public static void Load(TextAsset asset) { }

	private static bool LoadAndSelect(string value) { }

	public static bool LoadCSV(TextAsset asset, bool merge = false, bool notify = true) { }

	private static bool LoadCSV(Byte[] bytes, TextAsset asset, bool merge = false, bool notify = true) { }

	public static bool LoadCSV(Byte[] bytes, bool merge = false, bool notify = true) { }

	private static bool LoadDictionary(string value, bool merge = false) { }

	[Obsolete]
	public static string Localize(string key) { }

	public static bool Reload() { }

	public static void ReplaceKey(string key, string val) { }

	private static bool SelectLanguage(string language) { }

	public static void Set(string key, string value) { }

	public static void Set(string language, string key, string text) { }

	public static void Set(string languageName, Dictionary<String, String> dictionary) { }

	public static void Set(string languageName, Byte[] bytes) { }

	public static void set_dictionary(Dictionary<String, String[]> value) { }

	public static void set_language(string value) { }

}

