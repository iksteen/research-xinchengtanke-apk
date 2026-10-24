namespace System.Runtime.Serialization;

[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
public sealed class SerializationInfoEnumerator : IEnumerator
{
	private String[] m_members; //Field offset: 0x10
	private Object[] m_data; //Field offset: 0x18
	private Type[] m_types; //Field offset: 0x20
	private int m_numItems; //Field offset: 0x28
	private int m_currItem; //Field offset: 0x2C
	private bool m_current; //Field offset: 0x30

	public SerializationEntry Current
	{
		 get { } //Length: 232
	}

	public string Name
	{
		 get { } //Length: 160
	}

	public Type ObjectType
	{
		 get { } //Length: 160
	}

	private override object System.Collections.IEnumerator.Current
	{
		private get { } //Length: 312
	}

	public object Value
	{
		 get { } //Length: 160
	}

	internal SerializationInfoEnumerator(String[] members, Object[] info, Type[] types, int numItems) { }

	public SerializationEntry get_Current() { }

	public string get_Name() { }

	public Type get_ObjectType() { }

	public object get_Value() { }

	public override bool MoveNext() { }

	public override void Reset() { }

	private override object System.Collections.IEnumerator.get_Current() { }

}

