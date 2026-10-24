namespace UnityEngine.Events;

internal class PersistentCallGroup
{
	[FormerlySerializedAs(/*Cpp2IL Warning: missing at least one required parameter*/)]
	[SerializeField]
	private List<PersistentCall> m_Calls; //Field offset: 0x10

	public PersistentCallGroup() { }

	public void Initialize(InvokableCallList invokableList, UnityEventBase unityEventBase) { }

}

