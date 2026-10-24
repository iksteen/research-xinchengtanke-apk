namespace System.Runtime.Serialization;

internal class ValueTypeFixupInfo
{
	private long m_containerID; //Field offset: 0x10
	private FieldInfo m_parentField; //Field offset: 0x18
	private Int32[] m_parentIndex; //Field offset: 0x20

	public long ContainerID
	{
		 get { } //Length: 8
	}

	public FieldInfo ParentField
	{
		 get { } //Length: 8
	}

	public Int32[] ParentIndex
	{
		 get { } //Length: 8
	}

	public ValueTypeFixupInfo(long containerID, FieldInfo member, Int32[] parentIndex) { }

	public long get_ContainerID() { }

	public FieldInfo get_ParentField() { }

	public Int32[] get_ParentIndex() { }

}

