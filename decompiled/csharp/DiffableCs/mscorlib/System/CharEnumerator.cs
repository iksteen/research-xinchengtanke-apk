namespace System;

[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
public sealed class CharEnumerator : IEnumerator, ICloneable, IEnumerator<Char>, IDisposable
{
	private string str; //Field offset: 0x10
	private int index; //Field offset: 0x18
	private char currentElement; //Field offset: 0x1C

	public override char Current
	{
		 get { } //Length: 156
	}

	private override object System.Collections.IEnumerator.Current
	{
		private get { } //Length: 224
	}

	internal CharEnumerator(string str) { }

	internal CharEnumerator() { }

	public override object Clone() { }

	public override void Dispose() { }

	public override char get_Current() { }

	public override bool MoveNext() { }

	public override void Reset() { }

	private override object System.Collections.IEnumerator.get_Current() { }

}

