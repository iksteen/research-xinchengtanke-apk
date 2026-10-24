namespace System;

internal static class IPv6AddressHelper
{

	internal static string CreateCanonicalName(UInt16* numbers) { }

	private static KeyValuePair<Int32, Int32> FindCompressionRange(UInt16* numbers) { }

	private static bool InternalIsValid(Char* name, int start, ref int end, bool validateStrictAddress) { }

	internal static bool IsValid(Char* name, int start, ref int end) { }

	internal static bool IsValidStrict(Char* name, int start, ref int end) { }

	internal static bool Parse(string address, UInt16* numbers, int start, ref string scopeId) { }

	internal static string ParseCanonicalName(string str, int start, ref bool isLoopback, ref string scopeId) { }

	private static bool ShouldHaveIpv4Embedded(UInt16* numbers) { }

}

