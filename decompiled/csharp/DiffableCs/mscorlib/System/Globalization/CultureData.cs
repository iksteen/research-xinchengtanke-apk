namespace System.Globalization;

internal class CultureData
{
	private static CultureData s_Invariant; //Field offset: 0x0
	private string sAM1159; //Field offset: 0x10
	private string sPM2359; //Field offset: 0x18
	private string sTimeSeparator; //Field offset: 0x20
	private String[] saLongTimes; //Field offset: 0x28
	private String[] saShortTimes; //Field offset: 0x30
	private int iFirstDayOfWeek; //Field offset: 0x38
	private int iFirstWeekOfYear; //Field offset: 0x3C
	private Int32[] waCalendars; //Field offset: 0x40
	private CalendarData[] calendars; //Field offset: 0x48
	private string sISO639Language; //Field offset: 0x50
	private readonly string sRealName; //Field offset: 0x58
	private bool bUseOverrides; //Field offset: 0x60
	private int calendarId; //Field offset: 0x64
	private int numberIndex; //Field offset: 0x68
	private int iDefaultAnsiCodePage; //Field offset: 0x6C
	private int iDefaultOemCodePage; //Field offset: 0x70
	private int iDefaultMacCodePage; //Field offset: 0x74
	private int iDefaultEbcdicCodePage; //Field offset: 0x78
	private bool isRightToLeft; //Field offset: 0x7C
	private string sListSeparator; //Field offset: 0x80

	internal Int32[] CalendarIds
	{
		internal get { } //Length: 380
	}

	internal string CultureName
	{
		internal get { } //Length: 8
	}

	internal int IFIRSTDAYOFWEEK
	{
		internal get { } //Length: 8
	}

	internal int IFIRSTWEEKOFYEAR
	{
		internal get { } //Length: 8
	}

	internal int ILANGUAGE
	{
		internal get { } //Length: 8
	}

	public static CultureData Invariant
	{
		 get { } //Length: 1156
	}

	internal bool IsInvariantCulture
	{
		internal get { } //Length: 12
	}

	internal String[] LongTimes
	{
		internal get { } //Length: 36
	}

	internal string SAM1159
	{
		internal get { } //Length: 8
	}

	internal string SCOMPAREINFO
	{
		internal get { } //Length: 68
	}

	internal String[] ShortTimes
	{
		internal get { } //Length: 36
	}

	internal string SISO639LANGNAME
	{
		internal get { } //Length: 8
	}

	internal string SPM2359
	{
		internal get { } //Length: 8
	}

	internal string STEXTINFO
	{
		internal get { } //Length: 8
	}

	internal string TimeSeparator
	{
		internal get { } //Length: 8
	}

	internal bool UseUserOverride
	{
		internal get { } //Length: 8
	}

	private CultureData(string name) { }

	internal String[] AbbrevEraNames(int calendarId) { }

	internal String[] AbbreviatedDayNames(int calendarId) { }

	internal String[] AbbreviatedEnglishEraNames(int calendarId) { }

	internal String[] AbbreviatedGenitiveMonthNames(int calendarId) { }

	internal String[] AbbreviatedMonthNames(int calendarId) { }

	internal string DateSeparator(int calendarId) { }

	internal String[] DayNames(int calendarId) { }

	internal String[] EraNames(int calendarId) { }

	private void fill_culture_data(int datetimeIndex) { }

	private static void fill_number_data(NumberFormatInfo nfi, int numberIndex) { }

	internal String[] GenitiveMonthNames(int calendarId) { }

	internal Int32[] get_CalendarIds() { }

	internal string get_CultureName() { }

	internal int get_IFIRSTDAYOFWEEK() { }

	internal int get_IFIRSTWEEKOFYEAR() { }

	internal int get_ILANGUAGE() { }

	public static CultureData get_Invariant() { }

	internal bool get_IsInvariantCulture() { }

	internal String[] get_LongTimes() { }

	internal string get_SAM1159() { }

	internal string get_SCOMPAREINFO() { }

	internal String[] get_ShortTimes() { }

	internal string get_SISO639LANGNAME() { }

	internal string get_SPM2359() { }

	internal string get_STEXTINFO() { }

	internal string get_TimeSeparator() { }

	internal bool get_UseUserOverride() { }

	public CalendarData GetCalendar(int calendarId) { }

	internal static CultureData GetCultureData(int culture, bool bUseUserOverride) { }

	public static CultureData GetCultureData(string cultureName, bool useUserOverride, int datetimeIndex, int calendarId, int numberIndex, string iso2lang, int ansiCodePage, int oemCodePage, int macCodePage, int ebcdicCodePage, bool rightToLeft, string listSeparator) { }

	public static CultureData GetCultureData(string cultureName, bool useUserOverride) { }

	private static string GetDateSeparator(string format) { }

	internal void GetNFIValues(NumberFormatInfo nfi) { }

	private static string GetSeparator(string format, string timeParts) { }

	private static int IndexOfTimePart(string format, int startIndex, string timeParts) { }

	internal String[] LeapYearMonthNames(int calendarId) { }

	internal String[] LongDates(int calendarId) { }

	internal string MonthDay(int calendarId) { }

	internal String[] MonthNames(int calendarId) { }

	internal static string ReescapeWin32String(string str) { }

	internal static String[] ReescapeWin32Strings(String[] array) { }

	internal String[] ShortDates(int calendarId) { }

	private static string UnescapeNlsString(string str, int start, int end) { }

	internal String[] YearMonths(int calendarId) { }

}

