namespace System;

[CLSCompliant(/*Cpp2IL Warning: missing at least one required parameter*/)]
[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
public struct ulong : IComparable, IFormattable, IConvertible, IComparable<UInt64>, IEquatable<UInt64>
{
	public const ulong MaxValue = 18446744073709551615; //Field offset: 0x0
	public const ulong MinValue = 0; //Field offset: 0x0
	private ulong m_value; //Field offset: 0x0

	public override int CompareTo(object value) { }

	public override int CompareTo(ulong value) { }

	public virtual bool Equals(object obj) { }

	public override bool Equals(ulong obj) { }

	public virtual int GetHashCode() { }

	public override TypeCode GetTypeCode() { }

	[CLSCompliant(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public static ulong Parse(string s, IFormatProvider provider) { }

	[CLSCompliant(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public static ulong Parse(string s, NumberStyles style, IFormatProvider provider) { }

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

	[CLSCompliant(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public static bool TryParse(string s, NumberStyles style, IFormatProvider provider, out ulong result) { }

}

