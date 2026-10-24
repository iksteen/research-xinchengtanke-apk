namespace System;

[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
public struct TimeSpan : IComparable, IComparable<TimeSpan>, IEquatable<TimeSpan>, IFormattable
{
	public static readonly TimeSpan Zero; //Field offset: 0x0
	public static readonly TimeSpan MaxValue; //Field offset: 0x8
	public static readonly TimeSpan MinValue; //Field offset: 0x10
	private static bool _legacyConfigChecked; //Field offset: 0x18
	private static bool _legacyMode; //Field offset: 0x19
	internal long _ticks; //Field offset: 0x0

	public int Hours
	{
		 get { } //Length: 72
	}

	private static bool LegacyMode
	{
		private get { } //Length: 260
	}

	public int Minutes
	{
		 get { } //Length: 72
	}

	public long Ticks
	{
		 get { } //Length: 8
	}

	public double TotalDays
	{
		 get { } //Length: 24
	}

	public double TotalHours
	{
		 get { } //Length: 24
	}

	public double TotalMilliseconds
	{
		 get { } //Length: 52
	}

	public double TotalMinutes
	{
		 get { } //Length: 24
	}

	public double TotalSeconds
	{
		 get { } //Length: 24
	}

	private static TimeSpan() { }

	public TimeSpan(int days, int hours, int minutes, int seconds, int milliseconds) { }

	public TimeSpan(long ticks) { }

	public TimeSpan(int hours, int minutes, int seconds) { }

	public TimeSpan Add(TimeSpan ts) { }

	public static int Compare(TimeSpan t1, TimeSpan t2) { }

	public override int CompareTo(object value) { }

	public override int CompareTo(TimeSpan value) { }

	public virtual bool Equals(object value) { }

	public override bool Equals(TimeSpan obj) { }

	public static TimeSpan FromDays(double value) { }

	public static TimeSpan FromHours(double value) { }

	public static TimeSpan FromMilliseconds(double value) { }

	public static TimeSpan FromMinutes(double value) { }

	public static TimeSpan FromSeconds(double value) { }

	public static TimeSpan FromTicks(long value) { }

	public int get_Hours() { }

	private static bool get_LegacyMode() { }

	public int get_Minutes() { }

	public long get_Ticks() { }

	public double get_TotalDays() { }

	public double get_TotalHours() { }

	public double get_TotalMilliseconds() { }

	public double get_TotalMinutes() { }

	public double get_TotalSeconds() { }

	public virtual int GetHashCode() { }

	private static bool GetLegacyFormatMode() { }

	private static TimeSpan Interval(double value, int scale) { }

	public TimeSpan Negate() { }

	public static TimeSpan op_Addition(TimeSpan t1, TimeSpan t2) { }

	public static bool op_Equality(TimeSpan t1, TimeSpan t2) { }

	public static bool op_GreaterThan(TimeSpan t1, TimeSpan t2) { }

	public static bool op_GreaterThanOrEqual(TimeSpan t1, TimeSpan t2) { }

	public static bool op_Inequality(TimeSpan t1, TimeSpan t2) { }

	public static bool op_LessThan(TimeSpan t1, TimeSpan t2) { }

	public static bool op_LessThanOrEqual(TimeSpan t1, TimeSpan t2) { }

	public static TimeSpan op_Subtraction(TimeSpan t1, TimeSpan t2) { }

	public TimeSpan Subtract(TimeSpan ts) { }

	internal static long TimeToTicks(int hour, int minute, int second) { }

	public virtual string ToString() { }

	public string ToString(string format) { }

	public override string ToString(string format, IFormatProvider formatProvider) { }

}

