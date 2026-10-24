namespace System.ComponentModel;

public class RefreshEventArgs : EventArgs
{
	private Type typeChanged; //Field offset: 0x10

	public RefreshEventArgs(Type typeChanged) { }

}

