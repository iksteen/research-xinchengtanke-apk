namespace UnityEngine.Rendering;

[NativeHeader(/*Cpp2IL Warning: missing at least one required parameter*/)]
public class SplashScreen
{
	internal enum StopBehavior
	{
		StopImmediate = 0,
		FadeOut = 1,
	}


	[FreeFunction]
	private static void BeginSplashScreenFade() { }

	[FreeFunction]
	private static void CancelSplashScreen() { }

	public static void Stop(StopBehavior stopBehavior) { }

}

