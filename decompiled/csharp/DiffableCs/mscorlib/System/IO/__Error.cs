namespace System.IO;

internal static class __Error
{

	internal static void EndOfFile() { }

	internal static void EndReadCalledTwice() { }

	internal static void EndWriteCalledTwice() { }

	internal static void FileNotOpen() { }

	internal static string GetDisplayablePath(string path, bool isInvalidPath) { }

	internal static void MemoryStreamNotExpandable() { }

	internal static void ReaderClosed() { }

	internal static void ReadNotSupported() { }

	internal static void StreamIsClosed() { }

	internal static void WinIOError(int errorCode, string maybeFullPath) { }

	internal static void WriteNotSupported() { }

	internal static void WriterClosed() { }

	internal static void WrongAsyncResult() { }

}

