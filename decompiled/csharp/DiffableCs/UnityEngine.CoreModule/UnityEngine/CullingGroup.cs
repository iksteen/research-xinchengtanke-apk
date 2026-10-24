namespace UnityEngine;

[NativeHeader(/*Cpp2IL Warning: missing at least one required parameter*/)]
public class CullingGroup
{
	internal sealed class StateChanged : MulticastDelegate
	{

		public StateChanged(object object, IntPtr method) { }

		public override IAsyncResult BeginInvoke(CullingGroupEvent sphere, AsyncCallback callback, object object) { }

		public override void EndInvoke(IAsyncResult result) { }

		public override void Invoke(CullingGroupEvent sphere) { }

	}

	internal IntPtr m_Ptr; //Field offset: 0x10
	private StateChanged m_OnStateChanged; //Field offset: 0x18

	[RequiredByNativeCode]
	private static void SendEvents(CullingGroup cullingGroup, IntPtr eventsPtr, int count) { }

}

