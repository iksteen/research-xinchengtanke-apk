namespace Unity.Collections;

public static class NativeLeakDetection
{
	private static int s_NativeLeakDetectionMode; //Field offset: 0x0

	[RuntimeInitializeOnLoadMethod]
	private static void Initialize() { }

}

