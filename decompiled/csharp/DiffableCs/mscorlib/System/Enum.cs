namespace System;

[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
public abstract class Enum : IComparable, IFormattable, IConvertible
{
	private struct EnumResult
	{
		internal object parsedEnum; //Field offset: 0x0
		internal bool canThrow; //Field offset: 0x8
		internal ParseFailureKind m_failure; //Field offset: 0xC
		internal string m_failureMessageID; //Field offset: 0x10
		internal string m_failureParameter; //Field offset: 0x18
		internal object m_failureMessageFormatArgument; //Field offset: 0x20
		internal Exception m_innerException; //Field offset: 0x28

		internal Exception GetEnumParseException() { }

		internal void Init(bool canMethodThrow) { }

		internal void SetFailure(Exception unhandledException) { }

		internal void SetFailure(ParseFailureKind failure, string failureParameter) { }

		internal void SetFailure(ParseFailureKind failure, string failureMessageID, object failureMessageFormatArgument) { }

	}

	private enum ParseFailureKind
	{
		None = 0,
		Argument = 1,
		ArgumentNull = 2,
		ArgumentWithParameter = 3,
		UnhandledException = 4,
	}

	private class ValuesAndNames
	{
		public UInt64[] Values; //Field offset: 0x10
		public String[] Names; //Field offset: 0x18

		public ValuesAndNames(UInt64[] values, String[] names) { }

	}

	private static readonly Char[] enumSeperatorCharArray; //Field offset: 0x0
	private const string enumSeperator = ", "; //Field offset: 0x0

	private static Enum() { }

	protected Enum() { }

	public override int CompareTo(object target) { }

	public virtual bool Equals(object obj) { }

	private int get_hashcode() { }

	private object get_value() { }

	private static ValuesAndNames GetCachedValuesAndNames(RuntimeType enumType, bool getNames) { }

	private static bool GetEnumValuesAndNames(RuntimeType enumType, out UInt64[] values, out String[] names) { }

	public virtual int GetHashCode() { }

	[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public static string GetName(Type enumType, object value) { }

	[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public static String[] GetNames(Type enumType) { }

	public override TypeCode GetTypeCode() { }

	[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public static Type GetUnderlyingType(Type enumType) { }

	internal object GetValue() { }

	[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public static Array GetValues(Type enumType) { }

	public bool HasFlag(Enum flag) { }

	private static object InternalBoxEnum(RuntimeType enumType, long value) { }

	private static int InternalCompareTo(object o1, object o2) { }

	private static string InternalFlagsFormat(RuntimeType eT, object value) { }

	private static string InternalFormat(RuntimeType eT, object value) { }

	private static string InternalFormattedHexString(object value) { }

	internal static String[] InternalGetNames(RuntimeType enumType) { }

	internal static RuntimeType InternalGetUnderlyingType(RuntimeType enumType) { }

	internal static UInt64[] InternalGetValues(RuntimeType enumType) { }

	private bool InternalHasFlag(Enum flags) { }

	[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public static bool IsDefined(Type enumType, object value) { }

	[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public static object Parse(Type enumType, string value, bool ignoreCase) { }

	[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public static object Parse(Type enumType, string value) { }

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

	[CLSCompliant(/*Cpp2IL Warning: missing at least one required parameter*/)]
	[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public static object ToObject(Type enumType, ulong value) { }

	[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public static object ToObject(Type enumType, byte value) { }

	[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public static object ToObject(Type enumType, int value) { }

	[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public static object ToObject(Type enumType, short value) { }

	[CLSCompliant(/*Cpp2IL Warning: missing at least one required parameter*/)]
	[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public static object ToObject(Type enumType, sbyte value) { }

	private static object ToObject(Type enumType, char value) { }

	[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public static object ToObject(Type enumType, long value) { }

	[CLSCompliant(/*Cpp2IL Warning: missing at least one required parameter*/)]
	[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public static object ToObject(Type enumType, ushort value) { }

	[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public static object ToObject(Type enumType, object value) { }

	private static object ToObject(Type enumType, bool value) { }

	[CLSCompliant(/*Cpp2IL Warning: missing at least one required parameter*/)]
	[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public static object ToObject(Type enumType, uint value) { }

	public virtual string ToString() { }

	[Obsolete]
	public override string ToString(IFormatProvider provider) { }

	[Obsolete]
	public override string ToString(string format, IFormatProvider provider) { }

	public string ToString(string format) { }

	internal static ulong ToUInt64(object value) { }

	private static bool TryParseEnum(Type enumType, string value, bool ignoreCase, ref EnumResult parseResult) { }

}

