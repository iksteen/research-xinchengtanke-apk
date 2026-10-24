namespace System;

public struct DateTimeOffset : IComparable, IFormattable, ISerializable, IDeserializationCallback, IComparable<DateTimeOffset>, IEquatable<DateTimeOffset>
{
	public static readonly DateTimeOffset MinValue; //Field offset: 0x0
	public static readonly DateTimeOffset MaxValue; //Field offset: 0x10
	private DateTime m_dateTime; //Field offset: 0x0
	private short m_offsetMinutes; //Field offset: 0x8

	private DateTime ClockDateTime
	{
		private get { } //Length: 172
	}

	public DateTime DateTime
	{
		 get { } //Length: 4
	}

	public DateTime LocalDateTime
	{
		 get { } //Length: 44
	}

	public TimeSpan Offset
	{
		 get { } //Length: 56
	}

	public DateTime UtcDateTime
	{
		 get { } //Length: 128
	}

	private static DateTimeOffset() { }

	private DateTimeOffset(SerializationInfo info, StreamingContext context) { }

	public DateTimeOffset(long ticks, TimeSpan offset) { }

	public DateTimeOffset(DateTime dateTime) { }

	public DateTimeOffset(DateTime dateTime, TimeSpan offset) { }

	public override int CompareTo(DateTimeOffset other) { }

	public virtual bool Equals(object obj) { }

	public override bool Equals(DateTimeOffset other) { }

	private DateTime get_ClockDateTime() { }

	public DateTime get_DateTime() { }

	public DateTime get_LocalDateTime() { }

	public TimeSpan get_Offset() { }

	public DateTime get_UtcDateTime() { }

	public virtual int GetHashCode() { }

	public static DateTimeOffset op_Implicit(DateTime dateTime) { }

	private override int System.IComparable.CompareTo(object obj) { }

	private override void System.Runtime.Serialization.IDeserializationCallback.OnDeserialization(object sender) { }

	private override void System.Runtime.Serialization.ISerializable.GetObjectData(SerializationInfo info, StreamingContext context) { }

	public virtual string ToString() { }

	public override string ToString(string format, IFormatProvider formatProvider) { }

	private static DateTime ValidateDate(DateTime dateTime, TimeSpan offset) { }

	private static short ValidateOffset(TimeSpan offset) { }

}

