namespace System.ComponentModel;

internal class ArraySubsetEnumerator : IEnumerator
{
	private Array array; //Field offset: 0x10
	private int total; //Field offset: 0x18
	private int current; //Field offset: 0x1C

	public override object Current
	{
		 get { } //Length: 104
	}

	public ArraySubsetEnumerator(Array array, int count) { }

	public override object get_Current() { }

	public override bool MoveNext() { }

	public override void Reset() { }

}

