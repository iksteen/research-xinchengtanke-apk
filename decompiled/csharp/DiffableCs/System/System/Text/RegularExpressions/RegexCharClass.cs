namespace System.Text.RegularExpressions;

internal sealed class RegexCharClass
{
	private struct LowerCaseMapping
	{
		internal char _chMin; //Field offset: 0x0
		internal char _chMax; //Field offset: 0x2
		internal int _lcOp; //Field offset: 0x4
		internal int _data; //Field offset: 0x8

		internal LowerCaseMapping(char chMin, char chMax, int lcOp, int data) { }

	}

	private sealed class SingleRange
	{
		internal char _first; //Field offset: 0x10
		internal char _last; //Field offset: 0x12

		internal SingleRange(char first, char last) { }

	}

	private sealed class SingleRangeComparer : IComparer<SingleRange>
	{

		public SingleRangeComparer() { }

		public override int Compare(SingleRange x, SingleRange y) { }

	}

	private static readonly string InternalRegexIgnoreCase; //Field offset: 0x0
	private static readonly string Space; //Field offset: 0x8
	private static readonly string NotSpace; //Field offset: 0x10
	private static readonly string Word; //Field offset: 0x18
	private static readonly string NotWord; //Field offset: 0x20
	internal static readonly string SpaceClass; //Field offset: 0x28
	internal static readonly string NotSpaceClass; //Field offset: 0x30
	internal static readonly string WordClass; //Field offset: 0x38
	internal static readonly string NotWordClass; //Field offset: 0x40
	internal static readonly string DigitClass; //Field offset: 0x48
	internal static readonly string NotDigitClass; //Field offset: 0x50
	private static Dictionary<String, String> _definedCategories; //Field offset: 0x58
	private static readonly String[2] _propTable; //Field offset: 0x60
	private static readonly LowerCaseMapping[] _lcTable; //Field offset: 0x68
	private List<SingleRange> _rangelist; //Field offset: 0x10
	private StringBuilder _categories; //Field offset: 0x18
	private bool _canonical; //Field offset: 0x20
	private bool _negate; //Field offset: 0x21
	private RegexCharClass _subtractor; //Field offset: 0x28

	internal bool CanMerge
	{
		internal get { } //Length: 32
	}

	internal bool Negate
	{
		internal set { } //Length: 12
	}

	private static RegexCharClass() { }

	internal RegexCharClass() { }

	private RegexCharClass(bool negate, List<SingleRange> ranges, StringBuilder categories, RegexCharClass subtraction) { }

	private void AddCategory(string category) { }

	internal void AddCategoryFromName(string categoryName, bool invert, bool caseInsensitive, string pattern) { }

	internal void AddChar(char c) { }

	internal void AddCharClass(RegexCharClass cc) { }

	internal void AddDigit(bool ecma, bool negate, string pattern) { }

	internal void AddLowercase(CultureInfo culture) { }

	private void AddLowercaseRange(char chMin, char chMax, CultureInfo culture) { }

	internal void AddRange(char first, char last) { }

	private void AddSet(string set) { }

	internal void AddSpace(bool ecma, bool negate) { }

	internal void AddSubtraction(RegexCharClass sub) { }

	internal void AddWord(bool ecma, bool negate) { }

	private void Canonicalize() { }

	private static bool CharInCategory(char ch, string set, int start, int mySetLength, int myCategoryLength) { }

	private static bool CharInCategoryGroup(char ch, UnicodeCategory chcategory, string category, ref int i) { }

	internal static bool CharInClass(char ch, string set) { }

	private static bool CharInClassInternal(char ch, string set, int start, int mySetLength, int myCategoryLength) { }

	internal static bool CharInClassRecursive(char ch, string set, int start) { }

	internal bool get_CanMerge() { }

	private SingleRange GetRangeAt(int i) { }

	internal static bool IsECMAWordChar(char ch) { }

	internal static bool IsEmpty(string charClass) { }

	internal static bool IsMergeable(string charClass) { }

	internal static bool IsNegated(string set) { }

	internal static bool IsSingleton(string set) { }

	internal static bool IsSingletonInverse(string set) { }

	private static bool IsSubtraction(string charClass) { }

	internal static bool IsWordChar(char ch) { }

	private static string NegateCategory(string category) { }

	internal static RegexCharClass Parse(string charClass) { }

	private static RegexCharClass ParseRecursive(string charClass, int start) { }

	private int RangeCount() { }

	internal void set_Negate(bool value) { }

	private static string SetFromProperty(string capname, bool invert, string pattern) { }

	internal static char SingletonChar(string set) { }

	internal string ToStringClass() { }

}

