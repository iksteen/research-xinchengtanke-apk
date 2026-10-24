//Type is in global namespace

[Preserve]
public class SkipUnityLogo
{

	public SkipUnityLogo() { }

	private static void AsyncSkip() { }

	[RuntimeInitializeOnLoadMethod]
	private static void BeforeSplashScreen() { }

}

