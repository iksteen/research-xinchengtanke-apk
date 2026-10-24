namespace System.Text.RegularExpressions;

internal sealed class SharedReference
{
	private WeakReference _ref; //Field offset: 0x10
	private int _locked; //Field offset: 0x18

	public SharedReference() { }

	internal void Cache(object obj) { }

	internal object Get() { }

}

