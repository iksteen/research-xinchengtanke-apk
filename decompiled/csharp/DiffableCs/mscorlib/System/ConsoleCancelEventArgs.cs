namespace System;

public sealed class ConsoleCancelEventArgs : EventArgs
{
	private ConsoleSpecialKey _type; //Field offset: 0x10
	private bool _cancel; //Field offset: 0x14

	public bool Cancel
	{
		 get { } //Length: 8
	}

	internal ConsoleCancelEventArgs(ConsoleSpecialKey type) { }

	internal ConsoleCancelEventArgs() { }

	public bool get_Cancel() { }

}

