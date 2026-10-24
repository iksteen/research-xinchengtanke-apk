namespace System;

[CLSCompliant(/*Cpp2IL Warning: missing at least one required parameter*/)]
[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
public struct ushort : IComparable, IFormattable, IConvertible, IComparable<UInt16>, IEquatable<UInt16>
{
	public const ushort MaxValue = 65535; //Field offset: 0x0
	public const ushort MinValue = 0; //Field offset: 0x0
	private ushort m_value; //Field offset: 0x0

	public override int CompareTo(object value) { }

	public override int CompareTo(ushort value) { }

	public virtual bool Equals(object obj) { }

	public override bool Equals(ushort obj) { }

	public virtual int GetHashCode() { }

	public override TypeCode GetTypeCode() { }

	private static ushort Parse(string s, NumberStyles style, NumberFormatInfo info) { }

	[CLSCompliant(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public static ushort Parse(string s, NumberStyles style, IFormatProvider provider) { }

	[CLSCompliant(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public static ushort Parse(string s, IFormatProvider provider) { }

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

	public virtual string ToString() { }

	public override string ToString(IFormatProvider provider) { }

	private static bool TryParse(string s, NumberStyles style, NumberFormatInfo info, out ushort result) { }

	[CLSCompliant(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public static bool TryParse(string s, NumberStyles style, IFormatProvider provider, out ushort result) { }

}

