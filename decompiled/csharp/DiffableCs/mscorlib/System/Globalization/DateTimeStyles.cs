namespace System.Globalization;

[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
[Flags]
public enum DateTimeStyles
{
	None = 0,
	AllowLeadingWhite = 1,
	AllowTrailingWhite = 2,
	AllowInnerWhite = 4,
	AllowWhiteSpaces = 7,
	NoCurrentDateDefault = 8,
	AdjustToUniversal = 16,
	AssumeLocal = 32,
	AssumeUniversal = 64,
	RoundtripKind = 128,
}

