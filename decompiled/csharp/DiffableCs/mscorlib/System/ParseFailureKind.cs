namespace System;

internal enum ParseFailureKind
{
	None = 0,
	ArgumentNull = 1,
	Format = 2,
	FormatWithParameter = 3,
	FormatBadDateTimeCalendar = 4,
}

