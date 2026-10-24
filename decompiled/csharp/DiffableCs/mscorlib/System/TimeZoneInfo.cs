namespace System;

[TypeForwardedFrom(/*Cpp2IL Warning: missing at least one required parameter*/)]
public sealed class TimeZoneInfo : IEquatable<TimeZoneInfo>, ISerializable, IDeserializationCallback
{
	[CompilerGenerated]
	private sealed class <>c
	{
		public static readonly <>c <>9; //Field offset: 0x0
		public static Comparison<AdjustmentRule> <>9__19_0; //Field offset: 0x8

		private static <>c() { }

		public <>c() { }

		internal int <CreateLocalUnity>b__19_0(AdjustmentRule rule1, AdjustmentRule rule2) { }

	}

	[TypeForwardedFrom(/*Cpp2IL Warning: missing at least one required parameter*/)]
	internal sealed class AdjustmentRule : IEquatable<AdjustmentRule>, ISerializable, IDeserializationCallback
	{
		private DateTime m_dateStart; //Field offset: 0x10
		private DateTime m_dateEnd; //Field offset: 0x18
		private TimeSpan m_daylightDelta; //Field offset: 0x20
		private TransitionTime m_daylightTransitionStart; //Field offset: 0x28
		private TransitionTime m_daylightTransitionEnd; //Field offset: 0x40
		private TimeSpan m_baseUtcOffsetDelta; //Field offset: 0x58

		public DateTime DateEnd
		{
			 get { } //Length: 8
		}

		public DateTime DateStart
		{
			 get { } //Length: 8
		}

		public TimeSpan DaylightDelta
		{
			 get { } //Length: 8
		}

		public TransitionTime DaylightTransitionEnd
		{
			 get { } //Length: 20
		}

		public TransitionTime DaylightTransitionStart
		{
			 get { } //Length: 20
		}

		private AdjustmentRule() { }

		private AdjustmentRule(SerializationInfo info, StreamingContext context) { }

		public static AdjustmentRule CreateAdjustmentRule(DateTime dateStart, DateTime dateEnd, TimeSpan daylightDelta, TransitionTime daylightTransitionStart, TransitionTime daylightTransitionEnd) { }

		internal static AdjustmentRule CreateAdjustmentRule(DateTime dateStart, DateTime dateEnd, TimeSpan daylightDelta, TransitionTime daylightTransitionStart, TransitionTime daylightTransitionEnd, TimeSpan baseUtcOffsetDelta) { }

		public override bool Equals(AdjustmentRule other) { }

		public DateTime get_DateEnd() { }

		public DateTime get_DateStart() { }

		public TimeSpan get_DaylightDelta() { }

		public TransitionTime get_DaylightTransitionEnd() { }

		public TransitionTime get_DaylightTransitionStart() { }

		public virtual int GetHashCode() { }

		private override void System.Runtime.Serialization.IDeserializationCallback.OnDeserialization(object sender) { }

		private override void System.Runtime.Serialization.ISerializable.GetObjectData(SerializationInfo info, StreamingContext context) { }

		private static void ValidateAdjustmentRule(DateTime dateStart, DateTime dateEnd, TimeSpan daylightDelta, TransitionTime daylightTransitionStart, TransitionTime daylightTransitionEnd) { }

	}

	public struct DYNAMIC_TIME_ZONE_INFORMATION
	{
		internal TIME_ZONE_INFORMATION TZI; //Field offset: 0x0
		internal string TimeZoneKeyName; //Field offset: 0x48
		internal byte DynamicDaylightTimeDisabled; //Field offset: 0x50

	}

	public struct SYSTEMTIME
	{
		internal ushort wYear; //Field offset: 0x0
		internal ushort wMonth; //Field offset: 0x2
		internal ushort wDayOfWeek; //Field offset: 0x4
		internal ushort wDay; //Field offset: 0x6
		internal ushort wHour; //Field offset: 0x8
		internal ushort wMinute; //Field offset: 0xA
		internal ushort wSecond; //Field offset: 0xC
		internal ushort wMilliseconds; //Field offset: 0xE

	}

	public struct TIME_ZONE_INFORMATION
	{
		internal int Bias; //Field offset: 0x0
		internal string StandardName; //Field offset: 0x8
		internal SYSTEMTIME StandardDate; //Field offset: 0x10
		internal int StandardBias; //Field offset: 0x20
		internal string DaylightName; //Field offset: 0x28
		internal SYSTEMTIME DaylightDate; //Field offset: 0x30
		internal int DaylightBias; //Field offset: 0x40

	}

	[TypeForwardedFrom(/*Cpp2IL Warning: missing at least one required parameter*/)]
	internal struct TransitionTime : IEquatable<TransitionTime>, ISerializable, IDeserializationCallback
	{
		private DateTime m_timeOfDay; //Field offset: 0x0
		private byte m_month; //Field offset: 0x8
		private byte m_week; //Field offset: 0x9
		private byte m_day; //Field offset: 0xA
		private DayOfWeek m_dayOfWeek; //Field offset: 0xC
		private bool m_isFixedDateRule; //Field offset: 0x10

		public int Day
		{
			 get { } //Length: 8
		}

		public DayOfWeek DayOfWeek
		{
			 get { } //Length: 8
		}

		public bool IsFixedDateRule
		{
			 get { } //Length: 8
		}

		public int Month
		{
			 get { } //Length: 8
		}

		public DateTime TimeOfDay
		{
			 get { } //Length: 8
		}

		public int Week
		{
			 get { } //Length: 8
		}

		private TransitionTime(SerializationInfo info, StreamingContext context) { }

		public static TransitionTime CreateFixedDateRule(DateTime timeOfDay, int month, int day) { }

		public static TransitionTime CreateFloatingDateRule(DateTime timeOfDay, int month, int week, DayOfWeek dayOfWeek) { }

		private static TransitionTime CreateTransitionTime(DateTime timeOfDay, int month, int week, int day, DayOfWeek dayOfWeek, bool isFixedDateRule) { }

		public virtual bool Equals(object obj) { }

		public override bool Equals(TransitionTime other) { }

		public int get_Day() { }

		public DayOfWeek get_DayOfWeek() { }

		public bool get_IsFixedDateRule() { }

		public int get_Month() { }

		public DateTime get_TimeOfDay() { }

		public int get_Week() { }

		public virtual int GetHashCode() { }

		public static bool op_Inequality(TransitionTime t1, TransitionTime t2) { }

		private override void System.Runtime.Serialization.IDeserializationCallback.OnDeserialization(object sender) { }

		private override void System.Runtime.Serialization.ISerializable.GetObjectData(SerializationInfo info, StreamingContext context) { }

		private static void ValidateTransitionTime(DateTime timeOfDay, int month, int week, int day, DayOfWeek dayOfWeek) { }

	}

	private static TimeZoneInfo local; //Field offset: 0x0
	private static bool readlinkNotFound; //Field offset: 0x8
	private static TimeZoneInfo utc; //Field offset: 0x10
	private static string timeZoneDirectory; //Field offset: 0x18
	private static RegistryKey timeZoneKey; //Field offset: 0x20
	private static RegistryKey localZoneKey; //Field offset: 0x28
	private static ReadOnlyCollection<TimeZoneInfo> systemTimeZones; //Field offset: 0x30
	private TimeSpan baseUtcOffset; //Field offset: 0x10
	private string daylightDisplayName; //Field offset: 0x18
	private string displayName; //Field offset: 0x20
	private string id; //Field offset: 0x28
	private List<KeyValuePair`2<DateTime, TimeType>> transitions; //Field offset: 0x30
	private string standardDisplayName; //Field offset: 0x38
	private bool supportsDaylightSavingTime; //Field offset: 0x40
	private AdjustmentRule[] adjustmentRules; //Field offset: 0x48

	public TimeSpan BaseUtcOffset
	{
		 get { } //Length: 8
	}

	public string DisplayName
	{
		 get { } //Length: 8
	}

	public string Id
	{
		 get { } //Length: 8
	}

	private static bool IsWindows
	{
		private get { } //Length: 76
	}

	public static TimeZoneInfo Local
	{
		 get { } //Length: 180
	}

	private static RegistryKey LocalZoneKey
	{
		private get { } //Length: 344
	}

	public bool SupportsDaylightSavingTime
	{
		 get { } //Length: 8
	}

	private static string TimeZoneDirectory
	{
		private get { } //Length: 128
	}

	private static RegistryKey TimeZoneKey
	{
		private get { } //Length: 344
	}

	public static TimeZoneInfo Utc
	{
		 get { } //Length: 168
	}

	internal TimeZoneInfo() { }

	private TimeZoneInfo(string id, TimeSpan baseUtcOffset, string displayName, string standardDisplayName, string daylightDisplayName, AdjustmentRule[] adjustmentRules, bool disableDaylightSavingTime) { }

	private TimeZoneInfo(SerializationInfo info, StreamingContext context) { }

	private static TimeZoneInfo BuildFromStream(string id, Stream stream) { }

	public static DateTime ConvertTime(DateTime dateTime, TimeZoneInfo sourceTimeZone, TimeZoneInfo destinationTimeZone) { }

	public static DateTime ConvertTimeFromUtc(DateTime dateTime, TimeZoneInfo destinationTimeZone) { }

	private DateTime ConvertTimeFromUtc(DateTime dateTime) { }

	private static DateTime ConvertTimeToUtc(DateTime dateTime, TimeZoneInfo sourceTimeZone, TimeZoneInfoOptions flags) { }

	public static DateTime ConvertTimeToUtc(DateTime dateTime, TimeZoneInfo sourceTimeZone) { }

	internal static DateTime ConvertTimeToUtc(DateTime dateTime, TimeZoneInfoOptions flags) { }

	private static List<AdjustmentRule> CreateAdjustmentRule(int year, out Int64[] data, out String[] names, string standardNameCurrentYear, string daylightNameCurrentYear) { }

	internal static AdjustmentRule CreateAdjustmentRuleFromTimeZoneInformation(ref DYNAMIC_TIME_ZONE_INFORMATION timeZoneInformation, DateTime startDate, DateTime endDate, int defaultBaseUtcOffset) { }

	public static TimeZoneInfo CreateCustomTimeZone(string id, TimeSpan baseUtcOffset, string displayName, string standardDisplayName, string daylightDisplayName, AdjustmentRule[] adjustmentRules, bool disableDaylightSavingTime) { }

	public static TimeZoneInfo CreateCustomTimeZone(string id, TimeSpan baseUtcOffset, string displayName, string standardDisplayName) { }

	public static TimeZoneInfo CreateCustomTimeZone(string id, TimeSpan baseUtcOffset, string displayName, string standardDisplayName, string daylightDisplayName, AdjustmentRule[] adjustmentRules) { }

	private static TimeZoneInfo CreateLocal() { }

	private static TimeZoneInfo CreateLocalUnity() { }

	private static DateTime DateTimeFromUnixTime(long unix_time) { }

	internal static uint EnumDynamicTimeZoneInformation(uint dwIndex, out DYNAMIC_TIME_ZONE_INFORMATION lpTimeZoneInformation) { }

	public virtual bool Equals(object obj) { }

	public override bool Equals(TimeZoneInfo other) { }

	private static TimeZoneInfo FindSystemTimeZoneByFileName(string id, string filepath) { }

	public static TimeZoneInfo FindSystemTimeZoneById(string id) { }

	private static TimeZoneInfo FindSystemTimeZoneByIdCore(string id) { }

	internal static TimeZoneInfo FindSystemTimeZoneByIdWinRTFallback(string id) { }

	private static TimeZoneInfo FromRegistryKey(string id, RegistryKey key) { }

	public TimeSpan get_BaseUtcOffset() { }

	public string get_DisplayName() { }

	public string get_Id() { }

	private static bool get_IsWindows() { }

	public static TimeZoneInfo get_Local() { }

	private static RegistryKey get_LocalZoneKey() { }

	public bool get_SupportsDaylightSavingTime() { }

	private static string get_TimeZoneDirectory() { }

	private static RegistryKey get_TimeZoneKey() { }

	public static TimeZoneInfo get_Utc() { }

	public AdjustmentRule[] GetAdjustmentRules() { }

	private AdjustmentRule GetApplicableRule(DateTime dateTime) { }

	internal static TimeSpan GetDateTimeNowUtcOffsetFromUtc(DateTime time, out bool isAmbiguousLocalDst) { }

	internal static uint GetDynamicTimeZoneInformation(out DYNAMIC_TIME_ZONE_INFORMATION pTimeZoneInformation) { }

	internal static uint GetDynamicTimeZoneInformationEffectiveYears(ref DYNAMIC_TIME_ZONE_INFORMATION lpTimeZoneInformation, out uint FirstYear, out uint LastYear) { }

	internal static uint GetDynamicTimeZoneInformationWin32(out DYNAMIC_TIME_ZONE_INFORMATION pTimeZoneInformation) { }

	public virtual int GetHashCode() { }

	internal static TimeZoneInfo GetLocalTimeZoneInfoWinRTFallback() { }

	internal static string GetLocalTimeZoneKeyNameWin32Fallback() { }

	internal static TimeSpan GetLocalUtcOffset(DateTime dateTime, TimeZoneInfoOptions flags) { }

	public static ReadOnlyCollection<TimeZoneInfo> GetSystemTimeZones() { }

	private static void GetSystemTimeZonesCore(List<TimeZoneInfo> systemTimeZones) { }

	internal static List<TimeZoneInfo> GetSystemTimeZonesWinRTFallback() { }

	internal static bool GetTimeZoneInformationForYear(ushort wYear, ref DYNAMIC_TIME_ZONE_INFORMATION pdtzi, out TIME_ZONE_INFORMATION ptzi) { }

	internal TimeSpan GetUtcOffset(DateTime dateTime, TimeZoneInfoOptions flags) { }

	private TimeSpan GetUtcOffset(DateTime dateTime, out bool isDST, bool forOffset = false) { }

	public TimeSpan GetUtcOffset(DateTime dateTime) { }

	internal static TimeSpan GetUtcOffsetFromUtc(DateTime time, TimeZoneInfo zone, out bool isDaylightSavings, out bool isAmbiguousLocalDst) { }

	private static TimeSpan GetUtcOffsetHelper(DateTime dateTime, TimeZoneInfo tz, out bool isDST, bool forOffset = false) { }

	public bool HasSameRules(TimeZoneInfo other) { }

	private bool IsAmbiguousLocalDstFromUtc(DateTime dateTime) { }

	public bool IsAmbiguousTime(DateTime dateTime) { }

	private bool IsInDST(AdjustmentRule rule, DateTime dateTime) { }

	private bool IsInDSTForYear(AdjustmentRule rule, DateTime dateTime, int year) { }

	public bool IsInvalidTime(DateTime dateTime) { }

	private static Dictionary<Int32, String> ParseAbbreviations(Byte[] buffer, int index, int count) { }

	private static void ParseRegTzi(List<AdjustmentRule> adjustmentRules, int start_year, int end_year, Byte[] buffer) { }

	private static Dictionary<Int32, TimeType> ParseTimesTypes(Byte[] buffer, int index, int count, Dictionary<Int32, String> abbreviations) { }

	private static List<KeyValuePair`2<DateTime, TimeType>> ParseTransitions(Byte[] buffer, int index, int count, Dictionary<Int32, TimeType> time_types) { }

	private static TimeZoneInfo ParseTZBuffer(string id, Byte[] buffer, int length) { }

	private static int ReadBigEndianInt32(Byte[] buffer, int start) { }

	private static int readlink(string path, Byte[] buffer, int buflen) { }

	private static string readlink(string path) { }

	private static int SwapInt32(int i) { }

	private override void System.Runtime.Serialization.IDeserializationCallback.OnDeserialization(object sender) { }

	private override void System.Runtime.Serialization.ISerializable.GetObjectData(SerializationInfo info, StreamingContext context) { }

	public virtual string ToString() { }

	private static DateTime TransitionPoint(TransitionTime transition, int year) { }

	private static bool TransitionTimeFromTimeZoneInformation(DYNAMIC_TIME_ZONE_INFORMATION timeZoneInformation, out TransitionTime transitionTime, bool readStartDate) { }

	private static string TrimSpecial(string str) { }

	private static bool TryAddTicks(DateTime date, long ticks, out DateTime result, DateTimeKind kind = 0) { }

	internal static TimeZoneInfo TryCreateTimeZone(DYNAMIC_TIME_ZONE_INFORMATION timeZoneInformation) { }

	private static bool TryGetNameFromPath(string path, out string name) { }

	private bool TryGetTransitionOffset(DateTime dateTime, out TimeSpan offset, out bool isDst, bool forOffset = false) { }

	internal static bool UtcOffsetOutOfRange(TimeSpan offset) { }

	private static void Validate(string id, TimeSpan baseUtcOffset, AdjustmentRule[] adjustmentRules) { }

	private static AdjustmentRule[] ValidateRules(List<AdjustmentRule> adjustmentRules) { }

	private static bool ValidTZFile(Byte[] buffer, int length) { }

}

