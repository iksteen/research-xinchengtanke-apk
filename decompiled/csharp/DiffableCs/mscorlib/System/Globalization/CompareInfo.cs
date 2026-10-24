namespace System.Globalization;

[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
public class CompareInfo : IDeserializationCallback
{
	private const CompareOptions ValidIndexMaskOffFlags = -32; //Field offset: 0x0
	private static Dictionary<String, SimpleCollator> collators; //Field offset: 0x0
	private const int SORT_VERSION_V4 = 393473; //Field offset: 0x0
	private const int SORT_VERSION_WHIDBEY = 4096; //Field offset: 0x0
	private const int RESERVED_FIND_ASCII_STRING = 536870912; //Field offset: 0x0
	internal const int NORM_LINGUISTIC_CASING = 134217728; //Field offset: 0x0
	private const int COMPARE_OPTIONS_ORDINAL = 1073741824; //Field offset: 0x0
	private const int SORT_STRINGSORT = 4096; //Field offset: 0x0
	private const int NORM_IGNOREWIDTH = 131072; //Field offset: 0x0
	private const int NORM_IGNORENONSPACE = 2; //Field offset: 0x0
	private const int NORM_IGNORESYMBOLS = 4; //Field offset: 0x0
	private const int NORM_IGNOREKANATYPE = 65536; //Field offset: 0x0
	private const int NORM_IGNORECASE = 1; //Field offset: 0x0
	private const int LINGUISTIC_IGNORECASE = 16; //Field offset: 0x0
	private const CompareOptions ValidHashCodeOfStringMaskOffFlags = -32; //Field offset: 0x0
	private const CompareOptions ValidCompareMaskOffFlags = -536870944; //Field offset: 0x0
	private const int LINGUISTIC_IGNOREDIACRITIC = 32; //Field offset: 0x0
	private static bool managedCollation; //Field offset: 0x8
	private static bool managedCollationChecked; //Field offset: 0x9
	[OptionalField]
	private string m_name; //Field offset: 0x10
	private string m_sortName; //Field offset: 0x18
	[OptionalField]
	private int win32LCID; //Field offset: 0x20
	private int culture; //Field offset: 0x24
	[OptionalField]
	private SortVersion m_SortVersion; //Field offset: 0x28
	private SimpleCollator collator; //Field offset: 0x30

	[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public override string Name
	{
		 get { } //Length: 144
	}

	private static bool UseManagedCollation
	{
		private get { } //Length: 308
	}

	internal CompareInfo(CultureInfo culture) { }

	internal CompareInfo() { }

	private void assign_sortkey(object key, string source, CompareOptions options) { }

	public override int Compare(string string1, string string2) { }

	public override int Compare(string string1, string string2, CompareOptions options) { }

	public override int Compare(string string1, int offset1, int length1, string string2, int offset2, int length2, CompareOptions options) { }

	private static int CompareOrdinal(string string1, int offset1, int length1, string string2, int offset2, int length2) { }

	private SortKey CreateSortKey(string source, CompareOptions options) { }

	private SortKey CreateSortKeyCore(string source, CompareOptions options) { }

	public virtual bool Equals(object value) { }

	public override string get_Name() { }

	private static bool get_UseManagedCollation() { }

	private SimpleCollator GetCollator() { }

	public static CompareInfo GetCompareInfo(string name) { }

	public virtual int GetHashCode() { }

	internal int GetHashCodeOfString(string source, CompareOptions options, bool forceRandomizedHashing, long additionalEntropy) { }

	internal int GetHashCodeOfString(string source, CompareOptions options) { }

	public override SortKey GetSortKey(string source, CompareOptions options) { }

	public override int IndexOf(string source, string value, int startIndex, int count, CompareOptions options) { }

	private int internal_compare(string str1, int offset1, int length1, string str2, int offset2, int length2, CompareOptions options) { }

	private int internal_compare_managed(string str1, int offset1, int length1, string str2, int offset2, int length2, CompareOptions options) { }

	private int internal_compare_switch(string str1, int offset1, int length1, string str2, int offset2, int length2, CompareOptions options) { }

	private int internal_index(string source, int sindex, int count, string value, CompareOptions options, bool first) { }

	private int internal_index_managed(string s1, int sindex, int count, string s2, CompareOptions opt, bool first) { }

	private int internal_index_switch(string s1, int sindex, int count, string s2, CompareOptions opt, bool first) { }

	public override bool IsPrefix(string source, string prefix, CompareOptions options) { }

	public override bool IsSuffix(string source, string suffix, CompareOptions options) { }

	public override int LastIndexOf(string source, string value, int startIndex, int count, CompareOptions options) { }

	[OnDeserialized]
	private void OnDeserialized(StreamingContext ctx) { }

	private void OnDeserialized() { }

	[OnDeserializing]
	private void OnDeserializing(StreamingContext ctx) { }

	[OnSerializing]
	private void OnSerializing(StreamingContext ctx) { }

	private override void System.Runtime.Serialization.IDeserializationCallback.OnDeserialization(object sender) { }

	public virtual string ToString() { }

}

