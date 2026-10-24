namespace System;

internal struct DateTimeResult
{
	internal int Year; //Field offset: 0x0
	internal int Month; //Field offset: 0x4
	internal int Day; //Field offset: 0x8
	internal int Hour; //Field offset: 0xC
	internal int Minute; //Field offset: 0x10
	internal int Second; //Field offset: 0x14
	internal double fraction; //Field offset: 0x18
	internal int era; //Field offset: 0x20
	internal ParseFlags flags; //Field offset: 0x24
	internal TimeSpan timeZoneOffset; //Field offset: 0x28
	internal Calendar calendar; //Field offset: 0x30
	internal DateTime parsedDate; //Field offset: 0x38
	internal ParseFailureKind failure; //Field offset: 0x40
	internal string failureMessageID; //Field offset: 0x48
	internal object failureMessageFormatArgument; //Field offset: 0x50
	internal string failureArgumentName; //Field offset: 0x58

	internal void Init() { }

	internal void SetDate(int year, int month, int day) { }

	internal void SetFailure(ParseFailureKind failure, string failureMessageID, object failureMessageFormatArgument) { }

	internal void SetFailure(ParseFailureKind failure, string failureMessageID, object failureMessageFormatArgument, string failureArgumentName) { }

}

