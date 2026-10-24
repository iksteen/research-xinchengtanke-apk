namespace System;

[DefaultMember(/*Cpp2IL Warning: missing at least one required parameter*/)]
internal struct DTSubString
{
	internal string s; //Field offset: 0x0
	internal int index; //Field offset: 0x8
	internal int length; //Field offset: 0xC
	internal DTSubStringType type; //Field offset: 0x10
	internal int value; //Field offset: 0x14

	internal char Item
	{
		internal get { } //Length: 40
	}

	internal char get_Item(int relativeIndex) { }

}

