namespace System;

public static class Console
{
	private sealed class InternalCancelHandler : MulticastDelegate
	{

		public InternalCancelHandler(object object, IntPtr method) { }

		public override IAsyncResult BeginInvoke(AsyncCallback callback, object object) { }

		public override void EndInvoke(IAsyncResult result) { }

		public override void Invoke() { }

	}

	private class WindowsConsole
	{
		private sealed class WindowsCancelHandler : MulticastDelegate
		{

			public WindowsCancelHandler(object object, IntPtr method) { }

			public override IAsyncResult BeginInvoke(int keyCode, AsyncCallback callback, object object) { }

			public override bool EndInvoke(IAsyncResult result) { }

			public override bool Invoke(int keyCode) { }

		}

		public static bool ctrlHandlerAdded; //Field offset: 0x0
		private static WindowsCancelHandler cancelHandler; //Field offset: 0x8

		private static WindowsConsole() { }

		private static bool DoWindowsConsoleCancelEvent(int keyCode) { }

		private static int GetConsoleCP() { }

		private static int GetConsoleOutputCP() { }

		public static int GetInputCodePage() { }

		public static int GetOutputCodePage() { }

	}

	internal static TextWriter stdout; //Field offset: 0x0
	private static TextWriter stderr; //Field offset: 0x8
	private static TextReader stdin; //Field offset: 0x10
	private static Encoding inputEncoding; //Field offset: 0x18
	private static Encoding outputEncoding; //Field offset: 0x20
	private static ConsoleCancelEventHandler cancel_event; //Field offset: 0x28
	private static readonly InternalCancelHandler cancel_handler; //Field offset: 0x30

	public static TextWriter Error
	{
		 get { } //Length: 100
	}

	public static Encoding InputEncoding
	{
		 get { } //Length: 100
	}

	public static Encoding OutputEncoding
	{
		 get { } //Length: 100
	}

	private static Console() { }

	internal static void DoConsoleCancelEvent() { }

	public static TextWriter get_Error() { }

	public static Encoding get_InputEncoding() { }

	public static Encoding get_OutputEncoding() { }

	private static Stream Open(IntPtr handle, FileAccess access, int bufferSize) { }

	public static Stream OpenStandardError(int bufferSize) { }

	public static Stream OpenStandardInput(int bufferSize) { }

	public static Stream OpenStandardOutput(int bufferSize) { }

	public static ConsoleKeyInfo ReadKey() { }

	public static ConsoleKeyInfo ReadKey(bool intercept) { }

	public static void SetOut(TextWriter newOut) { }

	private static void SetupStreams(Encoding inputEncoding, Encoding outputEncoding) { }

}

