namespace System;

internal sealed class NumberFormatter
{
	private class CustomInfo
	{
		public bool UseGroup; //Field offset: 0x10
		public int DecimalDigits; //Field offset: 0x14
		public int DecimalPointPos; //Field offset: 0x18
		public int DecimalTailSharpDigits; //Field offset: 0x1C
		public int IntegerDigits; //Field offset: 0x20
		public int IntegerHeadSharpDigits; //Field offset: 0x24
		public int IntegerHeadPos; //Field offset: 0x28
		public bool UseExponent; //Field offset: 0x2C
		public int ExponentDigits; //Field offset: 0x30
		public int ExponentTailSharpDigits; //Field offset: 0x34
		public bool ExponentNegativeSignOnly; //Field offset: 0x38
		public int DividePlaces; //Field offset: 0x3C
		public int Percents; //Field offset: 0x40
		public int Permilles; //Field offset: 0x44

		public CustomInfo() { }

		public string Format(string format, int offset, int length, NumberFormatInfo nfi, bool positive, StringBuilder sb_int, StringBuilder sb_dec, StringBuilder sb_exp) { }

		public static void GetActiveSection(string format, ref bool positive, bool zero, ref int offset, ref int length) { }

		public static CustomInfo Parse(string format, int offset, int length, NumberFormatInfo nfi) { }

	}

	[ThreadStatic]
	private static NumberFormatter threadNumberFormatter; //Field offset: 0x80000000
	[ThreadStatic]
	private static NumberFormatter userFormatProvider; //Field offset: 0x80000008
	private static readonly UInt64* MantissaBitsTable; //Field offset: 0x0
	private static readonly Int32* TensExponentTable; //Field offset: 0x8
	private static readonly Char* DigitLowerTable; //Field offset: 0x10
	private static readonly Char* DigitUpperTable; //Field offset: 0x18
	private static readonly Int64* TenPowersList; //Field offset: 0x20
	private static readonly Int32* DecHexDigits; //Field offset: 0x28
	private NumberFormatInfo _nfi; //Field offset: 0x10
	private Char[] _cbuf; //Field offset: 0x18
	private bool _NaN; //Field offset: 0x20
	private bool _infinity; //Field offset: 0x21
	private bool _isCustomFormat; //Field offset: 0x22
	private bool _specifierIsUpper; //Field offset: 0x23
	private bool _positive; //Field offset: 0x24
	private char _specifier; //Field offset: 0x26
	private int _precision; //Field offset: 0x28
	private int _defPrecision; //Field offset: 0x2C
	private int _digitsLen; //Field offset: 0x30
	private int _offset; //Field offset: 0x34
	private int _decPointPos; //Field offset: 0x38
	private uint _val1; //Field offset: 0x3C
	private uint _val2; //Field offset: 0x40
	private uint _val3; //Field offset: 0x44
	private uint _val4; //Field offset: 0x48
	private int _ind; //Field offset: 0x4C

	private CultureInfo CurrentCulture
	{
		private set { } //Length: 92
	}

	private int DecimalDigits
	{
		private get { } //Length: 20
	}

	private int IntegerDigits
	{
		private get { } //Length: 16
	}

	private bool IsFloatingSource
	{
		private get { } //Length: 20
	}

	private bool IsZero
	{
		private get { } //Length: 16
	}

	private bool IsZeroInteger
	{
		private get { } //Length: 32
	}

	private static NumberFormatter() { }

	private NumberFormatter(Thread current) { }

	private static uint AddOneToDecHex(uint val) { }

	private void AddOneToDecHex() { }

	private void Append(char c, int cnt) { }

	private void Append(string s) { }

	private void Append(char c) { }

	private void AppendDecimalString(int precision, StringBuilder sb) { }

	private void AppendDecimalString(int precision) { }

	private void AppendDigits(int start, int end) { }

	private void AppendDigits(int start, int end, StringBuilder sb) { }

	private void AppendExponent(NumberFormatInfo nfi, int exponent, int minDigits) { }

	private void AppendIntegerString(int minLength) { }

	private void AppendIntegerString(int minLength, StringBuilder sb) { }

	private void AppendIntegerStringWithGroupSeparator(Int32[] groups, string groupSeparator) { }

	private static void AppendNonNegativeNumber(StringBuilder sb, int v) { }

	private void AppendOneDigit(int start) { }

	private static int CountTrailingZeros(uint val) { }

	private int CountTrailingZeros() { }

	private static int DecHexLen(uint val) { }

	private int DecHexLen() { }

	private void Divide10(int count) { }

	private static int FastDecHexLen(int val) { }

	private static uint FastToDecHex(int val) { }

	private string FormatCurrency(int precision, NumberFormatInfo nfi) { }

	private string FormatCustom(string format, NumberFormatInfo nfi) { }

	private string FormatDecimal(int precision, NumberFormatInfo nfi) { }

	private string FormatExponential(int precision, NumberFormatInfo nfi) { }

	private string FormatExponential(int precision, NumberFormatInfo nfi, int expDigits) { }

	private string FormatFixedPoint(int precision, NumberFormatInfo nfi) { }

	private string FormatGeneral(int precision, NumberFormatInfo nfi) { }

	private string FormatHexadecimal(int precision) { }

	private string FormatNumber(int precision, NumberFormatInfo nfi) { }

	private string FormatPercent(int precision, NumberFormatInfo nfi) { }

	private string FormatRoundtrip(double origval, NumberFormatInfo nfi) { }

	private string FormatRoundtrip(float origval, NumberFormatInfo nfi) { }

	private int get_DecimalDigits() { }

	private int get_IntegerDigits() { }

	private bool get_IsFloatingSource() { }

	private bool get_IsZero() { }

	private bool get_IsZeroInteger() { }

	private NumberFormatter GetClone() { }

	private static void GetFormatterTables(out UInt64* MantissaBitsTable, out Int32* TensExponentTable, out Char* DigitLowerTable, out Char* DigitUpperTable, out Int64* TenPowersList, out Int32* DecHexDigits) { }

	private static NumberFormatter GetInstance(IFormatProvider fp) { }

	private NumberFormatInfo GetNumberFormatInstance(IFormatProvider fp) { }

	private static long GetTenPowerOf(int i) { }

	private void Init(string format) { }

	private void Init(string format, int value, int defPrecision) { }

	private void Init(string format, uint value, int defPrecision) { }

	private void Init(string format, long value) { }

	private void Init(string format, ulong value) { }

	private void Init(string format, decimal value) { }

	private void Init(string format, double value, int defPrecision) { }

	private void InitDecHexDigits(uint hi, ulong lo) { }

	private void InitDecHexDigits(uint value) { }

	private void InitDecHexDigits(ulong value) { }

	private void InitHex(ulong value) { }

	private int InitialFloatingPrecision() { }

	private string IntegerToString(string format, IFormatProvider fp) { }

	private static bool IsZeroOnly(StringBuilder sb) { }

	private void Multiply10(int count) { }

	public static string NumberToString(string format, uint value, IFormatProvider fp) { }

	public static string NumberToString(string format, int value, IFormatProvider fp) { }

	public static string NumberToString(string format, ulong value, IFormatProvider fp) { }

	public static string NumberToString(string format, long value, IFormatProvider fp) { }

	public static string NumberToString(string format, double value, IFormatProvider fp) { }

	public static string NumberToString(string format, decimal value, IFormatProvider fp) { }

	public static string NumberToString(string format, float value, IFormatProvider fp) { }

	private string NumberToString(string format, NumberFormatInfo nfi) { }

	private static int ParsePrecision(string format) { }

	private void Release() { }

	private void RemoveTrailingZeros() { }

	private void ResetCharBuf(int size) { }

	private void Resize(int len) { }

	private bool RoundBits(int shift) { }

	private bool RoundDecimal(int decimals) { }

	private void RoundPos(int pos) { }

	private static int ScaleOrder(long hi) { }

	private void set_CurrentCulture(CultureInfo value) { }

	private static uint ToDecHex(int val) { }

	private static void ZeroTrimEnd(StringBuilder sb, bool canEmpty) { }

}

