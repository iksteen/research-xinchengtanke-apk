namespace System;

[CLSCompliant(/*Cpp2IL Warning: missing at least one required parameter*/)]
[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
public struct sbyte : IComparable, IFormattable, IConvertible, IComparable<SByte>, IEquatable<SByte>
{
	public const sbyte MaxValue = 127; //Field offset: 0x0
	public const sbyte MinValue = -128; //Field offset: 0x0
	private sbyte m_value; //Field offset: 0x0

	public override int CompareTo(object obj) { }

	public override int CompareTo(sbyte value) { }

	public virtual bool Equals(object obj) { }

	public override bool Equals(sbyte obj) { }

	public virtual int GetHashCode() { }

	public override TypeCode GetTypeCode() { }

	[CLSCompliant(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public static sbyte Parse(string s, IFormatProvider provider) { }

	[CLSCompliant(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public static sbyte Parse(string s, NumberStyles style, IFormatProvider provider) { }

	private static sbyte Parse(string s, NumberStyles style, NumberFormatInfo info) { }

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

	public virtual string ToString() { }

	private string ToString(string format, NumberFormatInfo info) { }

	public override string ToString(string format, IFormatProvider provider) { }

	public override string ToString(IFormatProvider provider) { }

	private static bool TryParse(string s, NumberStyles style, NumberFormatInfo info, out sbyte result) { }

	[CLSCompliant(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public static bool TryParse(string s, NumberStyles style, IFormatProvider provider, out sbyte result) { }

}

