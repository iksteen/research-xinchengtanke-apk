namespace System.Runtime.Remoting.Lifetime;

[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
public sealed class LifetimeServices
{
	private static TimeSpan _leaseManagerPollTime; //Field offset: 0x0
	private static TimeSpan _leaseTime; //Field offset: 0x8
	private static TimeSpan _renewOnCallTime; //Field offset: 0x10
	private static TimeSpan _sponsorshipTimeout; //Field offset: 0x18
	private static LeaseManager _leaseManager; //Field offset: 0x20

	public static TimeSpan LeaseManagerPollTime
	{
		 get { } //Length: 100
		 set { } //Length: 128
	}

	public static TimeSpan LeaseTime
	{
		 get { } //Length: 100
		 set { } //Length: 104
	}

	public static TimeSpan RenewOnCallTime
	{
		 get { } //Length: 100
		 set { } //Length: 104
	}

	public static TimeSpan SponsorshipTimeout
	{
		 get { } //Length: 100
		 set { } //Length: 104
	}

	private static LifetimeServices() { }

	public static TimeSpan get_LeaseManagerPollTime() { }

	public static TimeSpan get_LeaseTime() { }

	public static TimeSpan get_RenewOnCallTime() { }

	public static TimeSpan get_SponsorshipTimeout() { }

	public static void set_LeaseManagerPollTime(TimeSpan value) { }

	public static void set_LeaseTime(TimeSpan value) { }

	public static void set_RenewOnCallTime(TimeSpan value) { }

	public static void set_SponsorshipTimeout(TimeSpan value) { }

	internal static void TrackLifetime(ServerIdentity identity) { }

}

