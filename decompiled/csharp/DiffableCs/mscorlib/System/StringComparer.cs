namespace System;

[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
public abstract class StringComparer : IComparer, IEqualityComparer, IComparer<String>, IEqualityComparer<String>
{
	private static readonly StringComparer _invariantCulture; //Field offset: 0x0
	private static readonly StringComparer _invariantCultureIgnoreCase; //Field offset: 0x8
	private static readonly StringComparer _ordinal; //Field offset: 0x10
	private static readonly StringComparer _ordinalIgnoreCase; //Field offset: 0x18

	public static StringComparer CurrentCultureIgnoreCase
	{
		 get { } //Length: 156
	}

	public static StringComparer InvariantCultureIgnoreCase
	{
		 get { } //Length: 100
	}

	public static StringComparer Ordinal
	{
		 get { } //Length: 100
	}

	public static StringComparer OrdinalIgnoreCase
	{
		 get { } //Length: 100
	}

	private static StringComparer() { }

	protected StringComparer() { }

	public override int Compare(object x, object y) { }

	public abstract int Compare(string x, string y) { }

	public override bool Equals(object x, object y) { }

	public abstract bool Equals(string x, string y) { }

	public static StringComparer get_CurrentCultureIgnoreCase() { }

	public static StringComparer get_InvariantCultureIgnoreCase() { }

	public static StringComparer get_Ordinal() { }

	public static StringComparer get_OrdinalIgnoreCase() { }

	public override int GetHashCode(object obj) { }

	public abstract int GetHashCode(string obj) { }

}

