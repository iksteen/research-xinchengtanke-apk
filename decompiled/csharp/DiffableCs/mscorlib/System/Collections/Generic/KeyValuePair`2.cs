namespace System.Collections.Generic;

public struct KeyValuePair
{
	private TKey key; //Field offset: 0x0
	private TValue value; //Field offset: 0x0

	public TKey Key
	{
		 get { } //Length: 8
	}

	public TValue Value
	{
		 get { } //Length: 8
	}

	public KeyValuePair`2(TKey key, TValue value) { }

	public TKey get_Key() { }

	public TValue get_Value() { }

	public virtual string ToString() { }

}

