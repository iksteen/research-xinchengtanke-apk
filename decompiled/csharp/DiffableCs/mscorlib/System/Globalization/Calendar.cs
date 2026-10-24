namespace System.Globalization;

[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
public abstract class Calendar : ICloneable
{
	internal int m_currentEraValue; //Field offset: 0x10
	[OptionalField]
	private bool m_isReadOnly; //Field offset: 0x14
	internal int twoDigitYearMax; //Field offset: 0x18

	internal override int BaseCalendarID
	{
		internal get { } //Length: 12
	}

	internal override int CurrentEraValue
	{
		internal get { } //Length: 152
	}

	public abstract Int32[] Eras
	{
		 get { } //Length: 0
	}

	internal override int ID
	{
		internal get { } //Length: 8
	}

	[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public override DateTime MaxSupportedDateTime
	{
		 get { } //Length: 100
	}

	[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public override DateTime MinSupportedDateTime
	{
		 get { } //Length: 100
	}

	public override int TwoDigitYearMax
	{
		 get { } //Length: 8
	}

	protected Calendar() { }

	[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public override object Clone() { }

	internal override int get_BaseCalendarID() { }

	internal override int get_CurrentEraValue() { }

	public abstract Int32[] get_Eras() { }

	internal override int get_ID() { }

	public override DateTime get_MaxSupportedDateTime() { }

	public override DateTime get_MinSupportedDateTime() { }

	public override int get_TwoDigitYearMax() { }

	public abstract int GetDayOfMonth(DateTime time) { }

	public abstract DayOfWeek GetDayOfWeek(DateTime time) { }

	public abstract int GetDaysInMonth(int year, int month, int era) { }

	public abstract int GetDaysInYear(int year, int era) { }

	public abstract int GetEra(DateTime time) { }

	public abstract int GetMonth(DateTime time) { }

	public abstract int GetMonthsInYear(int year, int era) { }

	internal static int GetSystemTwoDigitYearSetting(int CalID, int defaultYearValue) { }

	public abstract int GetYear(DateTime time) { }

	public abstract bool IsLeapYear(int year, int era) { }

	public override bool IsLeapYear(int year) { }

	internal override bool IsValidDay(int year, int month, int day, int era) { }

	internal override bool IsValidMonth(int year, int month, int era) { }

	internal override bool IsValidYear(int year, int era) { }

	internal void SetReadOnlyState(bool readOnly) { }

	internal static long TimeToTicks(int hour, int minute, int second, int millisecond) { }

	public abstract DateTime ToDateTime(int year, int month, int day, int hour, int minute, int second, int millisecond, int era) { }

	public override int ToFourDigitYear(int year) { }

	internal override bool TryToDateTime(int year, int month, int day, int hour, int minute, int second, int millisecond, int era, out DateTime result) { }

}

