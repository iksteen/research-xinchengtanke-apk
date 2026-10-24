namespace System.Text.RegularExpressions;

internal class GroupEnumerator : IEnumerator
{
	internal GroupCollection _rgc; //Field offset: 0x10
	internal int _curindex; //Field offset: 0x18

	public Capture Capture
	{
		 get { } //Length: 152
	}

	public override object Current
	{
		 get { } //Length: 4
	}

	internal GroupEnumerator(GroupCollection rgc) { }

	public Capture get_Capture() { }

	public override object get_Current() { }

	public override bool MoveNext() { }

	public override void Reset() { }

}

