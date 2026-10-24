namespace System;

[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
[DefaultMember(/*Cpp2IL Warning: missing at least one required parameter*/)]
public sealed class string : IComparable, ICloneable, IConvertible, IEnumerable, IComparable<String>, IEnumerable<Char>, IEquatable<String>
{
	private const int TrimHead = 0; //Field offset: 0x0
	private const int TrimTail = 1; //Field offset: 0x0
	private const int TrimBoth = 2; //Field offset: 0x0
	public static readonly string Empty; //Field offset: 0x0
	private const int charPtrAlignConst = 1; //Field offset: 0x0
	private const int alignConst = 3; //Field offset: 0x0
	private int m_stringLength; //Field offset: 0x10
	private char m_firstChar; //Field offset: 0x14

	public char Chars
	{
		 get { } //Length: 92
	}

	public int Length
	{
		 get { } //Length: 8
	}

	public String(char c, int count) { }

	[CLSCompliant(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public String(SByte* value, int startIndex, int length, Encoding enc) { }

	[CLSCompliant(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public String(Char* value, int startIndex, int length) { }

	[CLSCompliant(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public String(Char* value) { }

	public String(Char[] value) { }

	public String(Char[] value, int startIndex, int length) { }

	internal static void bzero(Byte* dest, int len) { }

	internal static void bzero_aligned_1(Byte* dest, int len) { }

	internal static void bzero_aligned_2(Byte* dest, int len) { }

	internal static void bzero_aligned_4(Byte* dest, int len) { }

	internal static void bzero_aligned_8(Byte* dest, int len) { }

	internal static void CharCopy(Char* dest, Char* src, int count) { }

	public override object Clone() { }

	public static int Compare(string strA, string strB) { }

	public static int Compare(string strA, string strB, bool ignoreCase) { }

	public static int Compare(string strA, string strB, StringComparison comparisonType) { }

	public static int Compare(string strA, string strB, bool ignoreCase, CultureInfo culture) { }

	public static int Compare(string strA, int indexA, string strB, int indexB, int length, CultureInfo culture, CompareOptions options) { }

	public static int Compare(string strA, int indexA, string strB, int indexB, int length, StringComparison comparisonType) { }

	public static int CompareOrdinal(string strA, string strB) { }

	public static int CompareOrdinal(string strA, int indexA, string strB, int indexB, int length) { }

	private static int CompareOrdinalHelper(string strA, string strB) { }

	private static int CompareOrdinalIgnoreCaseHelper(string strA, string strB) { }

	internal static int CompareOrdinalUnchecked(string strA, int indexA, int lenA, string strB, int indexB, int lenB) { }

	public override int CompareTo(object value) { }

	public override int CompareTo(string strB) { }

	public static string Concat(object arg0, object arg1, object arg2) { }

	public static string Concat(Object[] args) { }

	public static string Concat(string str0, string str1) { }

	public static string Concat(string str0, string str1, string str2) { }

	public static string Concat(object arg0, object arg1) { }

	public static string Concat(String[] values) { }

	public static string Concat(string str0, string str1, string str2, string str3) { }

	private static string ConcatArray(String[] values, int totalLength) { }

	public bool Contains(string value) { }

	public static string Copy(string str) { }

	public void CopyTo(int sourceIndex, Char[] destination, int destinationIndex, int count) { }

	private string CreateString(char c, int count) { }

	private string CreateString(SByte* value, int startIndex, int length, Encoding enc) { }

	private string CreateString(Char* value) { }

	private string CreateString(SByte* value, int startIndex, int length) { }

	private string CreateString(SByte* value) { }

	private string CreateString(Char[] val) { }

	private string CreateString(Char* value, int startIndex, int length) { }

	private string CreateString(Char[] val, int startIndex, int length) { }

	internal static string CreateStringFromEncoding(Byte* bytes, int byteLength, Encoding encoding) { }

	private string CreateTrimmedString(int start, int end) { }

	private string CtorCharArray(Char[] value) { }

	private string CtorCharArrayStartLength(Char[] value, int startIndex, int length) { }

	private string CtorCharPtr(Char* ptr) { }

	private string CtorCharPtrStartLength(Char* ptr, int startIndex, int length) { }

	internal bool EndsWith(char value) { }

	public bool EndsWith(string value) { }

	[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public bool EndsWith(string value, StringComparison comparisonType) { }

	[ReliabilityContract(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public override bool Equals(string value) { }

	[ReliabilityContract(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public virtual bool Equals(object obj) { }

	public static bool Equals(string a, string b, StringComparison comparisonType) { }

	public bool Equals(string value, StringComparison comparisonType) { }

	public static bool Equals(string a, string b) { }

	[ReliabilityContract(/*Cpp2IL Warning: missing at least one required parameter*/)]
	private static bool EqualsHelper(string strA, string strB) { }

	internal static string FastAllocateString(int length) { }

	private static void FillStringChecked(string dest, int destPos, string src) { }

	public static string Format(IFormatProvider provider, string format, object arg0, object arg1, object arg2) { }

	public static string Format(IFormatProvider provider, string format, object arg0, object arg1) { }

	public static string Format(IFormatProvider provider, string format, object arg0) { }

	public static string Format(string format, Object[] args) { }

	public static string Format(string format, object arg0, object arg1, object arg2) { }

	public static string Format(string format, object arg0, object arg1) { }

	public static string Format(string format, object arg0) { }

	public static string Format(IFormatProvider provider, string format, Object[] args) { }

	private static string FormatHelper(IFormatProvider provider, string format, ParamsArray args) { }

	public char get_Chars(int index) { }

	public int get_Length() { }

	[ReliabilityContract(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public virtual int GetHashCode() { }

	[ReliabilityContract(/*Cpp2IL Warning: missing at least one required parameter*/)]
	internal int GetLegacyNonRandomizedHashCode() { }

	public override TypeCode GetTypeCode() { }

	public int IndexOf(string value, int startIndex) { }

	public int IndexOf(string value, int startIndex, int count, StringComparison comparisonType) { }

	public int IndexOf(string value, int startIndex, StringComparison comparisonType) { }

	public int IndexOf(string value, StringComparison comparisonType) { }

	public int IndexOf(string value) { }

	public int IndexOf(char value, int startIndex) { }

	public int IndexOf(char value) { }

	public int IndexOf(char value, int startIndex, int count) { }

	public int IndexOfAny(Char[] anyOf, int startIndex) { }

	public int IndexOfAny(Char[] anyOf) { }

	public int IndexOfAny(Char[] anyOf, int startIndex, int count) { }

	private int IndexOfAnyUnchecked(Char[] anyOf, int startIndex, int count) { }

	internal int IndexOfUnchecked(string value, int startIndex, int count) { }

	internal int IndexOfUnchecked(char value, int startIndex, int count) { }

	public string Insert(int startIndex, string value) { }

	private String[] InternalSplitKeepEmptyEntries(Int32[] sepList, Int32[] lengthList, int numReplaces, int count) { }

	private String[] InternalSplitOmitEmptyEntries(Int32[] sepList, Int32[] lengthList, int numReplaces, int count) { }

	private string InternalSubString(int startIndex, int length) { }

	internal bool IsAscii() { }

	private static bool IsBOMWhitespace(char c) { }

	public static bool IsNullOrEmpty(string value) { }

	public static bool IsNullOrWhiteSpace(string value) { }

	public static string Join(string separator, String[] value) { }

	public static string Join(string separator, String[] value, int startIndex, int count) { }

	public int LastIndexOf(char value, int startIndex) { }

	public int LastIndexOf(char value, int startIndex, int count) { }

	public int LastIndexOf(string value, int startIndex) { }

	public int LastIndexOf(string value, StringComparison comparisonType) { }

	public int LastIndexOf(string value, int startIndex, int count, StringComparison comparisonType) { }

	public int LastIndexOf(char value) { }

	public int LastIndexOf(string value) { }

	public int LastIndexOfAny(Char[] anyOf) { }

	public int LastIndexOfAny(Char[] anyOf, int startIndex) { }

	public int LastIndexOfAny(Char[] anyOf, int startIndex, int count) { }

	private int LastIndexOfAnyUnchecked(Char[] anyOf, int startIndex, int count) { }

	internal int LastIndexOfUnchecked(char value, int startIndex, int count) { }

	private int MakeSeparatorList(Char[] separator, ref Int32[] sepList) { }

	private static void memcpy(Byte* dest, Byte* src, int size) { }

	internal static void memcpy_aligned_1(Byte* dest, Byte* src, int size) { }

	internal static void memcpy_aligned_2(Byte* dest, Byte* src, int size) { }

	internal static void memcpy_aligned_4(Byte* dest, Byte* src, int size) { }

	internal static void memcpy_aligned_8(Byte* dest, Byte* src, int size) { }

	private static void memset(Byte* dest, int val, int len) { }

	internal static int nativeCompareOrdinalEx(string strA, int indexA, string strB, int indexB, int count) { }

	public string Normalize(NormalizationForm normalizationForm) { }

	public static bool op_Equality(string a, string b) { }

	public static bool op_Inequality(string a, string b) { }

	private string PadHelper(int totalWidth, char paddingChar, bool isRightPadded) { }

	public string PadRight(int totalWidth, char paddingChar) { }

	public string Remove(int startIndex, int count) { }

	public string Replace(char oldChar, char newChar) { }

	public string Replace(string oldValue, string newValue) { }

	private string ReplaceFallback(string oldValue, string newValue, int testedCount) { }

	private string ReplaceInternal(char oldChar, char newChar) { }

	internal string ReplaceInternal(string oldValue, string newValue) { }

	private string ReplaceUnchecked(string oldValue, string newValue) { }

	[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public String[] Split(Char[] separator, StringSplitOptions options) { }

	public String[] Split(Char[] separator) { }

	[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public String[] Split(Char[] separator, int count, StringSplitOptions options) { }

	public String[] Split(Char[] separator, int count) { }

	[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
	internal String[] SplitInternal(Char[] separator, int count, StringSplitOptions options) { }

	public bool StartsWith(string value) { }

	[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public bool StartsWith(string value, StringComparison comparisonType) { }

	internal bool StartsWithOrdinalUnchecked(string value) { }

	public string Substring(int startIndex) { }

	public string Substring(int startIndex, int length) { }

	private override IEnumerator<Char> System.Collections.Generic.IEnumerable<System.Char>.GetEnumerator() { }

	private override IEnumerator System.Collections.IEnumerable.GetEnumerator() { }

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

	public Char[] ToCharArray() { }

	public string ToLower() { }

	public string ToLower(CultureInfo culture) { }

	public string ToLowerInvariant() { }

	public override string ToString(IFormatProvider provider) { }

	public virtual string ToString() { }

	public string ToUpper() { }

	public string ToUpper(CultureInfo culture) { }

	public string ToUpperInvariant() { }

	public string Trim(Char[] trimChars) { }

	public string Trim() { }

	public string TrimEnd(Char[] trimChars) { }

	private string TrimHelper(int trimType) { }

	private string TrimHelper(Char[] trimChars, int trimType) { }

	public string TrimStart(Char[] trimChars) { }

	private static int wcslen(Char* ptr) { }

	internal static void wstrcpy(Char* dmem, Char* smem, int charCount) { }

}

