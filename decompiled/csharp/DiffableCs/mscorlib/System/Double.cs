namespace System;

[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
public struct double : IComparable, IFormattable, IConvertible, IComparable<Double>, IEquatable<Double>
{
	public const double MinValue = -1.7976931348623157E+308; //Field offset: 0x0
	public const double MaxValue = 1.7976931348623157E+308; //Field offset: 0x0
	public const double Epsilon = 5E-324; //Field offset: 0x0
	public const double NegativeInfinity = -Infinity; //Field offset: 0x0
	public const double PositiveInfinity = Infinity; //Field offset: 0x0
	public const double NaN = NaN; //Field offset: 0x0
	internal static double NegativeZero; //Field offset: 0x0
	internal double m_value; //Field offset: 0x0

	private static Double() { }

	public override int CompareTo(object value) { }

	public override int CompareTo(double value) { }

	public override bool Equals(double obj) { }

	public virtual bool Equals(object obj) { }

	public virtual int GetHashCode() { }

	public override TypeCode GetTypeCode() { }

	public static bool IsInfinity(double d) { }

	[ReliabilityContract(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public static bool IsNaN(double d) { }

	public static bool IsNegativeInfinity(double d) { }

	public static bool IsPositiveInfinity(double d) { }

	public static double Parse(string s) { }

	public static double Parse(string s, IFormatProvider provider) { }

	public static double Parse(string s, NumberStyles style, IFormatProvider provider) { }

	private static double Parse(string s, NumberStyles style, NumberFormatInfo info) { }

	private override bool System.IConvertible.ToBoolean(IFormatProvider provider) { }

	private override byte System.IConvertible.ToByte(IFormatProvider provider) { }

	private override char System.IConvertible.ToChar(IFormatProvider provider) { }

	private override DateTime System.IConvertible.ToDateTime(IFormatProvider provider) { }

	private override decimal System.IConvertible.ToDecimal(IFormatProvider provider) { }

	private override double System.IConvertible.ToDouble(IFormatProvider provider) { }

	private override short System.IConvertible.ToInt16(IFormatProvider provider) { }

	private override int System.IConvertible.ToInt32(IFormatProvider provider) { }

	private override long System.IConvertible.ToInt64(IFormatProvider provider) { }

	private override sbyte System.IConvertible.ToSByte(IFormatProvider provider) { }

	private override float System.IConvertible.ToSingle(IFormatProvider provider) { }

	private override object System.IConvertible.ToType(Type type, IFormatProvider provider) { }

	private override ushort System.IConvertible.ToUInt16(IFormatProvider provider) { }

	private override uint System.IConvertible.ToUInt32(IFormatProvider provider) { }

	private override ulong System.IConvertible.ToUInt64(IFormatProvider provider) { }

	public override string ToString(string format, IFormatProvider provider) { }

	public override string ToString(IFormatProvider provider) { }

	public virtual string ToString() { }

	private static bool TryParse(string s, NumberStyles style, NumberFormatInfo info, out double result) { }

	public static bool TryParse(string s, out double result) { }

	public static bool TryParse(string s, NumberStyles style, IFormatProvider provider, out double result) { }

}

