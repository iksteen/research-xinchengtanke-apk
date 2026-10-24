namespace Unity.Jobs.LowLevel.Unsafe;

[NativeHeader(/*Cpp2IL Warning: missing at least one required parameter*/)]
[NativeType]
public static class JobsUtility
{
	public sealed class PanicFunction_ : MulticastDelegate
	{

		public PanicFunction_(object object, IntPtr method) { }

		public override IAsyncResult BeginInvoke(AsyncCallback callback, object object) { }

		public override void EndInvoke(IAsyncResult result) { }

		public override void Invoke() { }

	}

	internal static PanicFunction_ PanicFunction; //Field offset: 0x0

	[RequiredByNativeCode]
	private static void InvokePanicFunction() { }

}

