namespace System.Collections.Generic;

[TypeDependency(/*Cpp2IL Warning: missing at least one required parameter*/)]
public abstract class EqualityComparer : IEqualityComparer, IEqualityComparer<T>
{
	private static EqualityComparer<T> defaultComparer; //Field offset: 0x0

	public static EqualityComparer<T> Default
	{
		 get { } //Length: 236
	}

	protected EqualityComparer`1() { }

	private static EqualityComparer<T> CreateComparer() { }

	public abstract bool Equals(T x, T y) { }

	public static EqualityComparer<T> get_Default() { }

	public abstract int GetHashCode(T obj) { }

	internal override int IndexOf(T[] array, T value, int startIndex, int count) { }

	internal override int LastIndexOf(T[] array, T value, int startIndex, int count) { }

	private override bool System.Collections.IEqualityComparer.Equals(object x, object y) { }

	private override int System.Collections.IEqualityComparer.GetHashCode(object obj) { }

}

