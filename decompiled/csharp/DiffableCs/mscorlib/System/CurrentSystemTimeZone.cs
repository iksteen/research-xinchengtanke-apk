namespace System;

internal class CurrentSystemTimeZone : TimeZone
{
	private readonly TimeZoneInfo LocalTimeZone; //Field offset: 0x10

	internal CurrentSystemTimeZone() { }

	public static bool GetTimeZoneData(int year, out Int64[] data, out String[] names, out bool daylight_inverted) { }

}

