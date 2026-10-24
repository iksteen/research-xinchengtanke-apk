namespace System.Threading;

internal class AtomicBoolean
{
	private int flag; //Field offset: 0x10

	public AtomicBoolean() { }

	public bool Equals(AtomicBoolean rhs) { }

	public virtual bool Equals(object rhs) { }

	public bool Exchange(bool newVal) { }

	public virtual int GetHashCode() { }

	public bool TryRelaxedSet() { }

}

