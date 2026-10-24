namespace System;

internal class TimeType
{
	public readonly int Offset; //Field offset: 0x10
	public readonly bool IsDst; //Field offset: 0x14
	public string Name; //Field offset: 0x18

	public TimeType(int offset, bool is_dst, string abbrev) { }

	public virtual string ToString() { }

}

