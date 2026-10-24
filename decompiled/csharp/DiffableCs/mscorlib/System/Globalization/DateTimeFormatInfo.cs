namespace System.Globalization;

[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
public sealed class DateTimeFormatInfo : ICloneable, IFormatProvider
{
	private static DateTimeFormatInfo invariantInfo; //Field offset: 0x0
	internal const DateTimeStyles InvalidDateTimeStyles = -256; //Field offset: 0x0
	private const int TOKEN_HASH_SIZE = 199; //Field offset: 0x0
	private const int SECOND_PRIME = 197; //Field offset: 0x0
	private const string dateSeparatorOrTimeZoneOffset = "-"; //Field offset: 0x0
	private const string invariantDateSeparator = "/"; //Field offset: 0x0
	private const string invariantTimeSeparator = ":"; //Field offset: 0x0
	internal const string IgnorablePeriod = "."; //Field offset: 0x0
	internal const string IgnorableComma = ","; //Field offset: 0x0
	internal const string CJKYearSuff = "�"; //Field offset: 0x0
	internal const string CJKMonthSuff = "�"; //Field offset: 0x0
	internal const string CJKDaySuff = "�"; //Field offset: 0x0
	internal const string KoreanYearSuff = "�"; //Field offset: 0x0
	private const int DEFAULT_ALL_DATETIMES_SIZE = 132; //Field offset: 0x0
	internal const string sortableDateTimePattern = "yyyy'-'MM'-'dd'T'HH':'mm':'ss"; //Field offset: 0x0
	internal const string universalSortableDateTimePattern = "yyyy'-'MM'-'dd HH':'mm':'ss'Z'"; //Field offset: 0x0
	internal const string KoreanMonthSuff = "�"; //Field offset: 0x0
	internal const string EnglishLangName = "en"; //Field offset: 0x0
	internal const string JapaneseLangName = "ja"; //Field offset: 0x0
	internal const string KoreanLangName = "ko"; //Field offset: 0x0
	internal const string LocalTimeMark = "T"; //Field offset: 0x0
	internal const string rfc1123Pattern = "ddd, dd MMM yyyy HH':'mm':'ss 'GMT'"; //Field offset: 0x0
	internal const string CJKMinuteSuff = "�"; //Field offset: 0x0
	internal const string CJKSecondSuff = "�"; //Field offset: 0x0
	internal const string CJKHourSuff = "�"; //Field offset: 0x0
	internal const string KoreanSecondSuff = "�"; //Field offset: 0x0
	internal const string KoreanMinuteSuff = "�"; //Field offset: 0x0
	internal const string KoreanHourSuff = "�"; //Field offset: 0x0
	internal const string KoreanDaySuff = "�"; //Field offset: 0x0
	internal const string ChineseHourSuff = "�"; //Field offset: 0x0
	internal static bool preferExistingTokens; //Field offset: 0x8
	[OptionalField]
	private static Hashtable s_calendarNativeNames; //Field offset: 0x10
	private static DateTimeFormatInfo s_jajpDTFI; //Field offset: 0x18
	private static DateTimeFormatInfo s_zhtwDTFI; //Field offset: 0x20
	private CultureData m_cultureData; //Field offset: 0x10
	[OptionalField]
	internal string m_name; //Field offset: 0x18
	private string m_langName; //Field offset: 0x20
	private CompareInfo m_compareInfo; //Field offset: 0x28
	private CultureInfo m_cultureInfo; //Field offset: 0x30
	internal string amDesignator; //Field offset: 0x38
	internal string pmDesignator; //Field offset: 0x40
	[OptionalField]
	internal string dateSeparator; //Field offset: 0x48
	[OptionalField]
	internal string generalShortTimePattern; //Field offset: 0x50
	[OptionalField]
	internal string generalLongTimePattern; //Field offset: 0x58
	[OptionalField]
	internal string timeSeparator; //Field offset: 0x60
	internal string monthDayPattern; //Field offset: 0x68
	[OptionalField]
	internal string dateTimeOffsetPattern; //Field offset: 0x70
	internal Calendar calendar; //Field offset: 0x78
	internal int firstDayOfWeek; //Field offset: 0x80
	internal int calendarWeekRule; //Field offset: 0x84
	[OptionalField]
	internal string fullDateTimePattern; //Field offset: 0x88
	internal String[] abbreviatedDayNames; //Field offset: 0x90
	[OptionalField]
	internal String[] m_superShortDayNames; //Field offset: 0x98
	internal String[] dayNames; //Field offset: 0xA0
	internal String[] abbreviatedMonthNames; //Field offset: 0xA8
	internal String[] monthNames; //Field offset: 0xB0
	[OptionalField]
	internal String[] genitiveMonthNames; //Field offset: 0xB8
	[OptionalField]
	internal String[] m_genitiveAbbreviatedMonthNames; //Field offset: 0xC0
	[OptionalField]
	internal String[] leapYearMonthNames; //Field offset: 0xC8
	internal string longDatePattern; //Field offset: 0xD0
	internal string shortDatePattern; //Field offset: 0xD8
	internal string yearMonthPattern; //Field offset: 0xE0
	internal string longTimePattern; //Field offset: 0xE8
	internal string shortTimePattern; //Field offset: 0xF0
	[OptionalField]
	private String[] allYearMonthPatterns; //Field offset: 0xF8
	internal String[] allShortDatePatterns; //Field offset: 0x100
	internal String[] allLongDatePatterns; //Field offset: 0x108
	internal String[] allShortTimePatterns; //Field offset: 0x110
	internal String[] allLongTimePatterns; //Field offset: 0x118
	internal String[] m_eraNames; //Field offset: 0x120
	internal String[] m_abbrevEraNames; //Field offset: 0x128
	internal String[] m_abbrevEnglishEraNames; //Field offset: 0x130
	internal Int32[] optionalCalendars; //Field offset: 0x138
	internal bool m_isReadOnly; //Field offset: 0x140
	[OptionalField]
	internal DateTimeFormatFlags formatFlags; //Field offset: 0x144
	[OptionalField]
	private int CultureID; //Field offset: 0x148
	[OptionalField]
	private bool m_useUserOverride; //Field offset: 0x14C
	[OptionalField]
	private bool bUseCalendarInfo; //Field offset: 0x14D
	[OptionalField]
	private int nDataItem; //Field offset: 0x150
	[OptionalField]
	internal bool m_isDefaultCalendar; //Field offset: 0x154
	[OptionalField]
	internal String[] m_dateWords; //Field offset: 0x158
	private string m_fullTimeSpanPositivePattern; //Field offset: 0x160
	private string m_fullTimeSpanNegativePattern; //Field offset: 0x168
	private TokenHashValue[] m_dtfiTokenHash; //Field offset: 0x170

	public String[] AbbreviatedDayNames
	{
		 get { } //Length: 128
	}

	internal String[] AbbreviatedEnglishEraNames
	{
		internal get { } //Length: 108
	}

	internal String[] AbbreviatedEraNames
	{
		internal get { } //Length: 108
	}

	public String[] AbbreviatedMonthNames
	{
		 get { } //Length: 128
	}

	private String[] AllLongDatePatterns
	{
		private get { } //Length: 128
	}

	private String[] AllLongTimePatterns
	{
		private get { } //Length: 128
	}

	private String[] AllShortDatePatterns
	{
		private get { } //Length: 128
	}

	private String[] AllShortTimePatterns
	{
		private get { } //Length: 128
	}

	private String[] AllYearMonthPatterns
	{
		private get { } //Length: 128
	}

	public string AMDesignator
	{
		 get { } //Length: 8
	}

	public Calendar Calendar
	{
		 get { } //Length: 8
		 set { } //Length: 992
	}

	internal CompareInfo CompareInfo
	{
		internal get { } //Length: 88
	}

	private CultureInfo Culture
	{
		private get { } //Length: 152
	}

	private string CultureName
	{
		private get { } //Length: 72
	}

	public static DateTimeFormatInfo CurrentInfo
	{
		 get { } //Length: 256
	}

	public string DateSeparator
	{
		 get { } //Length: 8
	}

	internal string DateTimeOffsetPattern
	{
		internal get { } //Length: 440
	}

	public String[] DayNames
	{
		 get { } //Length: 128
	}

	internal String[] EraNames
	{
		internal get { } //Length: 108
	}

	internal DateTimeFormatFlags FormatFlags
	{
		internal get { } //Length: 356
	}

	public string FullDateTimePattern
	{
		 get { } //Length: 148
	}

	internal string FullTimeSpanNegativePattern
	{
		internal get { } //Length: 128
	}

	internal string FullTimeSpanPositivePattern
	{
		internal get { } //Length: 236
	}

	internal string GeneralLongTimePattern
	{
		internal get { } //Length: 148
	}

	internal string GeneralShortTimePattern
	{
		internal get { } //Length: 148
	}

	internal bool HasForceTwoDigitYears
	{
		internal get { } //Length: 52
	}

	internal bool HasSpacesInDayNames
	{
		internal get { } //Length: 24
	}

	internal bool HasSpacesInMonthNames
	{
		internal get { } //Length: 24
	}

	internal bool HasYearMonthAdjustment
	{
		internal get { } //Length: 24
	}

	public static DateTimeFormatInfo InvariantInfo
	{
		 get { } //Length: 244
	}

	public bool IsReadOnly
	{
		 get { } //Length: 8
	}

	private string LanguageName
	{
		private get { } //Length: 72
	}

	public string LongDatePattern
	{
		 get { } //Length: 96
		 set { } //Length: 244
	}

	public string LongTimePattern
	{
		 get { } //Length: 96
		 set { } //Length: 276
	}

	public string MonthDayPattern
	{
		 get { } //Length: 112
	}

	[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public String[] MonthGenitiveNames
	{
		 get { } //Length: 132
	}

	public String[] MonthNames
	{
		 get { } //Length: 128
	}

	private Int32[] OptionalCalendars
	{
		private get { } //Length: 84
	}

	public string PMDesignator
	{
		 get { } //Length: 8
	}

	public string RFC1123Pattern
	{
		 get { } //Length: 68
	}

	public string ShortDatePattern
	{
		 get { } //Length: 96
		 set { } //Length: 276
	}

	public string ShortTimePattern
	{
		 get { } //Length: 96
		 set { } //Length: 244
	}

	public string SortableDateTimePattern
	{
		 get { } //Length: 68
	}

	public string TimeSeparator
	{
		 get { } //Length: 8
	}

	private String[] UnclonedLongDatePatterns
	{
		private get { } //Length: 108
	}

	private String[] UnclonedLongTimePatterns
	{
		private get { } //Length: 84
	}

	private String[] UnclonedShortDatePatterns
	{
		private get { } //Length: 108
	}

	private String[] UnclonedShortTimePatterns
	{
		private get { } //Length: 84
	}

	private String[] UnclonedYearMonthPatterns
	{
		private get { } //Length: 112
	}

	public string UniversalSortableDateTimePattern
	{
		 get { } //Length: 68
	}

	public string YearMonthPattern
	{
		 get { } //Length: 96
		 set { } //Length: 236
	}

	private static DateTimeFormatInfo() { }

	internal DateTimeFormatInfo(CultureData cultureData, Calendar cal) { }

	public DateTimeFormatInfo() { }

	private void AddMonthNames(TokenHashValue[] temp, string monthPostfix) { }

	private void ClearTokenHashTable() { }

	public override object Clone() { }

	internal TokenHashValue[] CreateTokenHashTable() { }

	public String[] get_AbbreviatedDayNames() { }

	internal String[] get_AbbreviatedEnglishEraNames() { }

	internal String[] get_AbbreviatedEraNames() { }

	public String[] get_AbbreviatedMonthNames() { }

	private String[] get_AllLongDatePatterns() { }

	private String[] get_AllLongTimePatterns() { }

	private String[] get_AllShortDatePatterns() { }

	private String[] get_AllShortTimePatterns() { }

	private String[] get_AllYearMonthPatterns() { }

	public string get_AMDesignator() { }

	public Calendar get_Calendar() { }

	internal CompareInfo get_CompareInfo() { }

	private CultureInfo get_Culture() { }

	private string get_CultureName() { }

	public static DateTimeFormatInfo get_CurrentInfo() { }

	public string get_DateSeparator() { }

	internal string get_DateTimeOffsetPattern() { }

	public String[] get_DayNames() { }

	internal String[] get_EraNames() { }

	internal DateTimeFormatFlags get_FormatFlags() { }

	public string get_FullDateTimePattern() { }

	internal string get_FullTimeSpanNegativePattern() { }

	internal string get_FullTimeSpanPositivePattern() { }

	internal string get_GeneralLongTimePattern() { }

	internal string get_GeneralShortTimePattern() { }

	internal bool get_HasForceTwoDigitYears() { }

	internal bool get_HasSpacesInDayNames() { }

	internal bool get_HasSpacesInMonthNames() { }

	internal bool get_HasYearMonthAdjustment() { }

	public static DateTimeFormatInfo get_InvariantInfo() { }

	public bool get_IsReadOnly() { }

	private string get_LanguageName() { }

	public string get_LongDatePattern() { }

	public string get_LongTimePattern() { }

	public string get_MonthDayPattern() { }

	public String[] get_MonthGenitiveNames() { }

	public String[] get_MonthNames() { }

	private Int32[] get_OptionalCalendars() { }

	public string get_PMDesignator() { }

	public string get_RFC1123Pattern() { }

	public string get_ShortDatePattern() { }

	public string get_ShortTimePattern() { }

	public string get_SortableDateTimePattern() { }

	public string get_TimeSeparator() { }

	private String[] get_UnclonedLongDatePatterns() { }

	private String[] get_UnclonedLongTimePatterns() { }

	private String[] get_UnclonedShortDatePatterns() { }

	private String[] get_UnclonedShortTimePatterns() { }

	private String[] get_UnclonedYearMonthPatterns() { }

	public string get_UniversalSortableDateTimePattern() { }

	public string get_YearMonthPattern() { }

	public string GetAbbreviatedDayName(DayOfWeek dayofweek) { }

	public string GetAbbreviatedEraName(int era) { }

	public string GetAbbreviatedMonthName(int month) { }

	public String[] GetAllDateTimePatterns(char format) { }

	private static String[] GetCombinedPatterns(String[] patterns1, String[] patterns2, string connectString) { }

	public string GetDayName(DayOfWeek dayofweek) { }

	public string GetEraName(int era) { }

	public override object GetFormat(Type formatType) { }

	public static DateTimeFormatInfo GetInstance(IFormatProvider provider) { }

	internal static DateTimeFormatInfo GetJapaneseCalendarDTFI() { }

	private static String[] GetMergedPatterns(String[] patterns, string defaultPattern) { }

	public string GetMonthName(int month) { }

	internal static DateTimeFormatInfo GetTaiwanCalendarDTFI() { }

	private void InitializeOverridableProperties(CultureData cultureData, int calendarID) { }

	private static bool InitPreferExistingTokens() { }

	private void InsertAtCurrentHashNode(TokenHashValue[] hashTable, string str, char ch, TokenType tokenType, int tokenValue, int pos, int hashcode, int hashProbe) { }

	private void InsertHash(TokenHashValue[] hashTable, string str, TokenType tokenType, int tokenValue) { }

	private String[] internalGetAbbreviatedDayOfWeekNames() { }

	private String[] internalGetAbbreviatedMonthNames() { }

	private String[] internalGetDayOfWeekNames() { }

	private String[] internalGetGenitiveMonthNames(bool abbreviated) { }

	internal String[] internalGetLeapYearMonthNames() { }

	internal string internalGetMonthName(int month, MonthNameStyles style, bool abbreviated) { }

	private String[] internalGetMonthNames() { }

	private static bool IsHebrewChar(char ch) { }

	[OnDeserialized]
	private void OnDeserialized(StreamingContext ctx) { }

	[OnSerializing]
	private void OnSerializing(StreamingContext ctx) { }

	public void set_Calendar(Calendar value) { }

	public void set_LongDatePattern(string value) { }

	public void set_LongTimePattern(string value) { }

	public void set_ShortDatePattern(string value) { }

	public void set_ShortTimePattern(string value) { }

	public void set_YearMonthPattern(string value) { }

	internal bool Tokenize(TokenType TokenMask, out TokenType tokenType, out int tokenValue, ref __DTString str) { }

	private static bool TryParseHebrewNumber(ref __DTString str, out bool badFormat, out int number) { }

	internal static void ValidateStyles(DateTimeStyles style, string parameterName) { }

	internal bool YearMonthAdjustment(ref int year, ref int month, bool parsedMonthName) { }

}

