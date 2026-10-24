namespace System;

[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
public sealed class Version : ICloneable, IComparable, IComparable<Version>, IEquatable<Version>
{
	private static readonly Char[] SeparatorsArray; //Field offset: 0x0
	private const int ZERO_CHAR_VALUE = 48; //Field offset: 0x0
	private int _Major; //Field offset: 0x10
	private int _Minor; //Field offset: 0x14
	private int _Build; //Field offset: 0x18
	private int _Revision; //Field offset: 0x1C

	public int Build
	{
		 get { } //Length: 8
	}

	public int Major
	{
		 get { } //Length: 8
	}

	public int Minor
	{
		 get { } //Length: 8
	}

	public int Revision
	{
		 get { } //Length: 8
	}

	private static Version() { }

	public Version() { }

	public Version(int major, int minor, int build, int revision) { }

	public Version(int major, int minor) { }

	private static void AppendPositiveNumber(int num, StringBuilder sb) { }

	public override object Clone() { }

	public override int CompareTo(Version value) { }

	public override int CompareTo(object version) { }

	public virtual bool Equals(object obj) { }

	public override bool Equals(Version obj) { }

	public int get_Build() { }

	public int get_Major() { }

	public int get_Minor() { }

	public int get_Revision() { }

	public virtual int GetHashCode() { }

	public static bool op_Equality(Version v1, Version v2) { }

	public static bool op_Inequality(Version v1, Version v2) { }

	public static bool op_LessThan(Version v1, Version v2) { }

	public virtual string ToString() { }

	public string ToString(int fieldCount) { }

}

