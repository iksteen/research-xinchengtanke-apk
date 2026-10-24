namespace System;

[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
public struct decimal : IFormattable, IComparable, IConvertible, IDeserializationCallback, IComparable<Decimal>, IEquatable<Decimal>
{
	private const int SignMask = -2147483648; //Field offset: 0x0
	private const byte DECIMAL_NEG = 128; //Field offset: 0x0
	private const byte DECIMAL_ADD = 0; //Field offset: 0x0
	private const int ScaleMask = 16711680; //Field offset: 0x0
	private const int ScaleShift = 16; //Field offset: 0x0
	private const int MaxInt32Scale = 9; //Field offset: 0x0
	private static UInt32[] Powers10; //Field offset: 0x0
	[DecimalConstant(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public static readonly decimal Zero; //Field offset: 0x8
	[DecimalConstant(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public static readonly decimal One; //Field offset: 0x18
	[DecimalConstant(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public static readonly decimal MinusOne; //Field offset: 0x28
	[DecimalConstant(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public static readonly decimal MaxValue; //Field offset: 0x38
	[DecimalConstant(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public static readonly decimal MinValue; //Field offset: 0x48
	[DecimalConstant(/*Cpp2IL Warning: missing at least one required parameter*/)]
	private static readonly decimal NearNegativeZero; //Field offset: 0x58
	[DecimalConstant(/*Cpp2IL Warning: missing at least one required parameter*/)]
	private static readonly decimal NearPositiveZero; //Field offset: 0x68
	private int flags; //Field offset: 0x0
	private int hi; //Field offset: 0x4
	private int lo; //Field offset: 0x8
	private int mid; //Field offset: 0xC

	private static Decimal() { }

	private Decimal(int lo, int mid, int hi, int flags) { }

	public Decimal(int lo, int mid, int hi, bool isNegative, byte scale) { }

	public Decimal(Int32[] bits) { }

	public Decimal(double value) { }

	public Decimal(int value) { }

	[CLSCompliant(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public Decimal(ulong value) { }

	public Decimal(float value) { }

	public Decimal(long value) { }

	[CLSCompliant(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public Decimal(uint value) { }

	public static decimal Add(decimal d1, decimal d2) { }

	public override int CompareTo(object value) { }

	public override int CompareTo(decimal value) { }

	public virtual bool Equals(object value) { }

	public override bool Equals(decimal value) { }

	private static void FCallAddSub(ref decimal d1, ref decimal d2, byte bSign) { }

	[ReliabilityContract(/*Cpp2IL Warning: missing at least one required parameter*/)]
	private static int FCallCompare(ref decimal d1, ref decimal d2) { }

	private static void FCallMultiply(ref decimal d1, ref decimal d2) { }

	private static void FCallRound(ref decimal d, int decimals) { }

	internal static int FCallToInt32(decimal d) { }

	private static void FCallTruncate(ref decimal d) { }

	public static Int32[] GetBits(decimal d) { }

	public virtual int GetHashCode() { }

	public override TypeCode GetTypeCode() { }

	public static decimal Negate(decimal d) { }

	[OnSerializing]
	private void OnSerializing(StreamingContext ctx) { }

	public static decimal op_Addition(decimal d1, decimal d2) { }

	public static bool op_Equality(decimal d1, decimal d2) { }

	public static decimal op_Explicit(float value) { }

	public static int op_Explicit(decimal value) { }

	public static decimal op_Explicit(double value) { }

	[CLSCompliant(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public static ulong op_Explicit(decimal value) { }

	public static double op_Explicit(decimal value) { }

	public static long op_Explicit(decimal value) { }

	public static float op_Explicit(decimal value) { }

	public static bool op_GreaterThan(decimal d1, decimal d2) { }

	public static bool op_GreaterThanOrEqual(decimal d1, decimal d2) { }

	[CLSCompliant(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public static decimal op_Implicit(ulong value) { }

	public static decimal op_Implicit(long value) { }

	public static decimal op_Implicit(byte value) { }

	[CLSCompliant(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public static decimal op_Implicit(uint value) { }

	public static decimal op_Implicit(int value) { }

	[CLSCompliant(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public static decimal op_Implicit(ushort value) { }

	public static decimal op_Implicit(short value) { }

	[CLSCompliant(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public static decimal op_Implicit(sbyte value) { }

	public static decimal op_Increment(decimal d) { }

	public static bool op_Inequality(decimal d1, decimal d2) { }

	public static bool op_LessThan(decimal d1, decimal d2) { }

	public static bool op_LessThanOrEqual(decimal d1, decimal d2) { }

	public static decimal op_Multiply(decimal d1, decimal d2) { }

	public static decimal op_Subtraction(decimal d1, decimal d2) { }

	public static decimal Parse(string s, NumberStyles style, IFormatProvider provider) { }

	public static decimal Parse(string s, IFormatProvider provider) { }

	public static decimal Round(decimal d, int decimals) { }

	private void SetBits(Int32[] bits) { }

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

	private override void System.Runtime.Serialization.IDeserializationCallback.OnDeserialization(object sender) { }

	public static byte ToByte(decimal value) { }

	internal static decimal ToDecimal(Byte[] buffer) { }

	public static double ToDouble(decimal d) { }

	public static short ToInt16(decimal value) { }

	public static int ToInt32(decimal d) { }

	public static long ToInt64(decimal d) { }

	[CLSCompliant(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public static sbyte ToSByte(decimal value) { }

	public static float ToSingle(decimal d) { }

	public override string ToString(IFormatProvider provider) { }

	public override string ToString(string format, IFormatProvider provider) { }

	public virtual string ToString() { }

	[CLSCompliant(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public static ushort ToUInt16(decimal value) { }

	[CLSCompliant(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public static uint ToUInt32(decimal d) { }

	[CLSCompliant(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public static ulong ToUInt64(decimal d) { }

	public static decimal Truncate(decimal d) { }

	public static bool TryParse(string s, NumberStyles style, IFormatProvider provider, out decimal result) { }

}

