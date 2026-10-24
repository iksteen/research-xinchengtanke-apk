namespace System;

[DefaultMember(/*Cpp2IL Warning: missing at least one required parameter*/)]
internal struct ParamsArray
{
	private static readonly Object[] oneArgArray; //Field offset: 0x0
	private static readonly Object[] twoArgArray; //Field offset: 0x8
	private static readonly Object[] threeArgArray; //Field offset: 0x10
	private readonly object arg0; //Field offset: 0x0
	private readonly object arg1; //Field offset: 0x8
	private readonly object arg2; //Field offset: 0x10
	private readonly Object[] args; //Field offset: 0x18

	public object Item
	{
		 get { } //Length: 16
	}

	public int Length
	{
		 get { } //Length: 28
	}

	private static ParamsArray() { }

	public ParamsArray(object arg0) { }

	public ParamsArray(object arg0, object arg1) { }

	public ParamsArray(object arg0, object arg1, object arg2) { }

	public ParamsArray(Object[] args) { }

	public object get_Item(int index) { }

	public int get_Length() { }

	private object GetAtSlow(int index) { }

}

