namespace UnityEngine.Video;

[NativeHeader(/*Cpp2IL Warning: missing at least one required parameter*/)]
[RequireComponent(/*Cpp2IL Warning: missing at least one required parameter*/)]
[RequiredByNativeCode]
public sealed class VideoPlayer : Behaviour
{
	internal sealed class ErrorEventHandler : MulticastDelegate
	{

		public ErrorEventHandler(object object, IntPtr method) { }

		public override IAsyncResult BeginInvoke(VideoPlayer source, string message, AsyncCallback callback, object object) { }

		public override void EndInvoke(IAsyncResult result) { }

		public override void Invoke(VideoPlayer source, string message) { }

	}

	internal sealed class EventHandler : MulticastDelegate
	{

		public EventHandler(object object, IntPtr method) { }

		public override IAsyncResult BeginInvoke(VideoPlayer source, AsyncCallback callback, object object) { }

		public override void EndInvoke(IAsyncResult result) { }

		public override void Invoke(VideoPlayer source) { }

	}

	internal sealed class FrameReadyEventHandler : MulticastDelegate
	{

		public FrameReadyEventHandler(object object, IntPtr method) { }

		public override IAsyncResult BeginInvoke(VideoPlayer source, long frameIdx, AsyncCallback callback, object object) { }

		public override void EndInvoke(IAsyncResult result) { }

		public override void Invoke(VideoPlayer source, long frameIdx) { }

	}

	internal sealed class TimeEventHandler : MulticastDelegate
	{

		public TimeEventHandler(object object, IntPtr method) { }

		public override IAsyncResult BeginInvoke(VideoPlayer source, double seconds, AsyncCallback callback, object object) { }

		public override void EndInvoke(IAsyncResult result) { }

		public override void Invoke(VideoPlayer source, double seconds) { }

	}

	[CompilerGenerated]
	[DebuggerBrowsable(/*Cpp2IL Warning: missing at least one required parameter*/)]
	private EventHandler prepareCompleted; //Field offset: 0x18
	[CompilerGenerated]
	[DebuggerBrowsable(/*Cpp2IL Warning: missing at least one required parameter*/)]
	private EventHandler loopPointReached; //Field offset: 0x20
	[CompilerGenerated]
	[DebuggerBrowsable(/*Cpp2IL Warning: missing at least one required parameter*/)]
	private EventHandler started; //Field offset: 0x28
	[CompilerGenerated]
	[DebuggerBrowsable(/*Cpp2IL Warning: missing at least one required parameter*/)]
	private EventHandler frameDropped; //Field offset: 0x30
	[CompilerGenerated]
	[DebuggerBrowsable(/*Cpp2IL Warning: missing at least one required parameter*/)]
	private ErrorEventHandler errorReceived; //Field offset: 0x38
	[CompilerGenerated]
	[DebuggerBrowsable(/*Cpp2IL Warning: missing at least one required parameter*/)]
	private EventHandler seekCompleted; //Field offset: 0x40
	[CompilerGenerated]
	[DebuggerBrowsable(/*Cpp2IL Warning: missing at least one required parameter*/)]
	private TimeEventHandler clockResyncOccurred; //Field offset: 0x48
	[CompilerGenerated]
	[DebuggerBrowsable(/*Cpp2IL Warning: missing at least one required parameter*/)]
	private FrameReadyEventHandler frameReady; //Field offset: 0x50

	[NativeName(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public VideoClip clip
	{
		 get { } //Length: 64
	}

	public bool isPlaying
	{
		[NativeName(/*Cpp2IL Warning: missing at least one required parameter*/)]
		 get { } //Length: 64
	}

	[NativeHeader(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public RenderTexture targetTexture
	{
		 get { } //Length: 64
		 set { } //Length: 80
	}

	public VideoClip get_clip() { }

	[NativeName(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public bool get_isPlaying() { }

	public RenderTexture get_targetTexture() { }

	[RequiredByNativeCode]
	private static void InvokeClockResyncOccurredCallback_Internal(VideoPlayer source, double seconds) { }

	[RequiredByNativeCode]
	private static void InvokeErrorReceivedCallback_Internal(VideoPlayer source, string errorStr) { }

	[RequiredByNativeCode]
	private static void InvokeFrameDroppedCallback_Internal(VideoPlayer source) { }

	[RequiredByNativeCode]
	private static void InvokeFrameReadyCallback_Internal(VideoPlayer source, long frameIdx) { }

	[RequiredByNativeCode]
	private static void InvokeLoopPointReachedCallback_Internal(VideoPlayer source) { }

	[RequiredByNativeCode]
	private static void InvokePrepareCompletedCallback_Internal(VideoPlayer source) { }

	[RequiredByNativeCode]
	private static void InvokeSeekCompletedCallback_Internal(VideoPlayer source) { }

	[RequiredByNativeCode]
	private static void InvokeStartedCallback_Internal(VideoPlayer source) { }

	public void Play() { }

	public void set_targetTexture(RenderTexture value) { }

}

