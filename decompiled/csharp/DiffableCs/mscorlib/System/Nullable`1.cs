namespace System;

[DebuggerStepThrough]
public struct Nullable
{
	internal T value; //Field offset: 0x0
	internal bool has_value; //Field offset: 0x0

	public bool HasValue
	{
		 get { } //Length: 8
	}

	public T Value
	{
		 get { } //Length: 100
	}

	public Nullable`1(T value) { }

	private static object Box(Nullable<T> o) { }

	public virtual bool Equals(object other) { }

	private bool Equals(Nullable<T> other) { }

	public bool get_HasValue() { }

	public T get_Value() { }

	public virtual int GetHashCode() { }

	public T GetValueOrDefault() { }

	public virtual string ToString() { }

	private static Nullable<T> Unbox(object o) { }

}

