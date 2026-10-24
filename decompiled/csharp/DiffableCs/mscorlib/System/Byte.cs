namespace System;

[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
public struct byte : IComparable, IFormattable, IConvertible, IComparable<Byte>, IEquatable<Byte>
{
	public const byte MaxValue = 255; //Field offset: 0x0
	public const byte MinValue = 0; //Field offset: 0x0
	private byte m_value; //Field offset: 0x0

	public override int CompareTo(object value) { }

	public override int CompareTo(byte value) { }

	public virtual bool Equals(object obj) { }

	public override bool Equals(byte obj) { }

	public virtual int GetHashCode() { }

	public override TypeCode GetTypeCode() { }

	public static byte Parse(string s, NumberStyles style, IFormatProvider provider) { }

	private static byte Parse(string s, NumberStyles style, NumberFormatInfo info) { }

	public static byte Parse(string s, IFormatProvider provider) { }

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

	public override string ToString(IFormatProvider provider) { }

	public string ToString(string format) { }

	public virtual string ToString() { }

	public override string ToString(string format, IFormatProvider provider) { }

	private static bool TryParse(string s, NumberStyles style, NumberFormatInfo info, out byte result) { }

	public static bool TryParse(string s, NumberStyles style, IFormatProvider provider, out byte result) { }

}

