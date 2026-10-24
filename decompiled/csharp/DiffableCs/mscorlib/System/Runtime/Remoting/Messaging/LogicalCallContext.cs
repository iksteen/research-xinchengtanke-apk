namespace System.Runtime.Remoting.Messaging;

[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
public sealed class LogicalCallContext : ISerializable, ICloneable
{
	public struct Reader
	{
		private LogicalCallContext m_ctx; //Field offset: 0x0

		public bool HasInfo
		{
			 get { } //Length: 20
		}

		public bool IsNull
		{
			 get { } //Length: 16
		}

		public Reader(LogicalCallContext ctx) { }

		public LogicalCallContext Clone() { }

		public bool get_HasInfo() { }

		public bool get_IsNull() { }

	}

	private static Type s_callContextType; //Field offset: 0x0
	private Hashtable m_Datastore; //Field offset: 0x10
	private CallContextRemotingData m_RemotingData; //Field offset: 0x18
	private CallContextSecurityData m_SecurityData; //Field offset: 0x20
	private object m_HostContext; //Field offset: 0x28
	private bool m_IsCorrelationMgr; //Field offset: 0x30

	private Hashtable Datastore
	{
		private get { } //Length: 116
	}

	public bool HasInfo
	{
		 get { } //Length: 120
	}

	private bool HasUserData
	{
		private get { } //Length: 48
	}

	private static LogicalCallContext() { }

	internal LogicalCallContext() { }

	internal LogicalCallContext(SerializationInfo info, StreamingContext context) { }

	public override object Clone() { }

	private Hashtable get_Datastore() { }

	public bool get_HasInfo() { }

	private bool get_HasUserData() { }

	public override void GetObjectData(SerializationInfo info, StreamingContext context) { }

	internal void Merge(LogicalCallContext lc) { }

}

