namespace System.Net.NetworkInformation;

public abstract class IPGlobalProperties
{
	[CompilerGenerated]
	private static readonly bool <PlatformNeedsLibCWorkaround>k__BackingField; //Field offset: 0x0

	public abstract string DomainName
	{
		 get { } //Length: 0
	}

	private static bool PlatformNeedsLibCWorkaround
	{
		[CompilerGenerated]
		private get { } //Length: 76
	}

	protected IPGlobalProperties() { }

	public abstract string get_DomainName() { }

	[CompilerGenerated]
	private static bool get_PlatformNeedsLibCWorkaround() { }

	public static IPGlobalProperties GetIPGlobalProperties() { }

	internal static IPGlobalProperties InternalGetIPGlobalProperties() { }

}

