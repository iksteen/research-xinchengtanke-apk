namespace UnityEngine.Experimental.Audio;

[NativeType]
[StaticAccessor(/*Cpp2IL Warning: missing at least one required parameter*/)]
public class AudioSampleProvider
{
	internal sealed class SampleFramesHandler : MulticastDelegate
	{

		public SampleFramesHandler(object object, IntPtr method) { }

		public override IAsyncResult BeginInvoke(AudioSampleProvider provider, uint sampleFrameCount, AsyncCallback callback, object object) { }

		public override void EndInvoke(IAsyncResult result) { }

		public override void Invoke(AudioSampleProvider provider, uint sampleFrameCount) { }

	}

	[CompilerGenerated]
	[DebuggerBrowsable(/*Cpp2IL Warning: missing at least one required parameter*/)]
	private SampleFramesHandler sampleFramesAvailable; //Field offset: 0x10
	[CompilerGenerated]
	[DebuggerBrowsable(/*Cpp2IL Warning: missing at least one required parameter*/)]
	private SampleFramesHandler sampleFramesOverflow; //Field offset: 0x18

	[RequiredByNativeCode]
	private void InvokeSampleFramesAvailable(int sampleFrameCount) { }

	[RequiredByNativeCode]
	private void InvokeSampleFramesOverflow(int droppedSampleFrameCount) { }

}

