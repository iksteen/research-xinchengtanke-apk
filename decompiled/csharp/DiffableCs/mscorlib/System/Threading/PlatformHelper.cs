namespace System.Threading;

internal static class PlatformHelper
{
	private static int s_processorCount; //Field offset: 0x0
	private static int s_lastProcessorCountRefreshTicks; //Field offset: 0x4

	internal static bool IsSingleProcessor
	{
		internal get { } //Length: 28
	}

	internal static int ProcessorCount
	{
		internal get { } //Length: 184
	}

	internal static bool get_IsSingleProcessor() { }

	internal static int get_ProcessorCount() { }

}

