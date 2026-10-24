namespace UnityEngine;

[NativeHeader(/*Cpp2IL Warning: missing at least one required parameter*/)]
[StaticAccessor(/*Cpp2IL Warning: missing at least one required parameter*/)]
public sealed class AudioSettings
{
	internal sealed class AudioConfigurationChangeHandler : MulticastDelegate
	{

		public AudioConfigurationChangeHandler(object object, IntPtr method) { }

		public override IAsyncResult BeginInvoke(bool deviceWasChanged, AsyncCallback callback, object object) { }

		public override void EndInvoke(IAsyncResult result) { }

		public override void Invoke(bool deviceWasChanged) { }

	}

	internal static class Mobile
	{
		[CompilerGenerated]
		[DebuggerBrowsable(/*Cpp2IL Warning: missing at least one required parameter*/)]
		private static bool <muteState>k__BackingField; //Field offset: 0x0
		private static bool _stopAudioOutputOnMute; //Field offset: 0x1
		[CompilerGenerated]
		[DebuggerBrowsable(/*Cpp2IL Warning: missing at least one required parameter*/)]
		private static Action<Boolean> OnMuteStateChanged; //Field offset: 0x8

		public private static bool muteState
		{
			[CompilerGenerated]
			 get { } //Length: 100
			[CompilerGenerated]
			private set { } //Length: 108
		}

		public static bool stopAudioOutputOnMute
		{
			 get { } //Length: 100
		}

		private static Mobile() { }

		[CompilerGenerated]
		public static bool get_muteState() { }

		public static bool get_stopAudioOutputOnMute() { }

		[RequiredByNativeCode]
		internal static bool InvokeIsStopAudioOutputOnMuteEnabled() { }

		[RequiredByNativeCode]
		internal static void InvokeOnMuteStateChanged(bool mute) { }

		[CompilerGenerated]
		private static void set_muteState(bool value) { }

		public static void StartAudioOutput() { }

		public static void StopAudioOutput() { }

	}

	[CompilerGenerated]
	[DebuggerBrowsable(/*Cpp2IL Warning: missing at least one required parameter*/)]
	private static AudioConfigurationChangeHandler OnAudioConfigurationChanged; //Field offset: 0x0
	[CompilerGenerated]
	[DebuggerBrowsable(/*Cpp2IL Warning: missing at least one required parameter*/)]
	private static Action OnAudioSystemShuttingDown; //Field offset: 0x8
	[CompilerGenerated]
	[DebuggerBrowsable(/*Cpp2IL Warning: missing at least one required parameter*/)]
	private static Action OnAudioSystemStartedUp; //Field offset: 0x10

	[RequiredByNativeCode]
	internal static void InvokeOnAudioConfigurationChanged(bool deviceWasChanged) { }

	[RequiredByNativeCode]
	internal static void InvokeOnAudioSystemShuttingDown() { }

	[RequiredByNativeCode]
	internal static void InvokeOnAudioSystemStartedUp() { }

	internal static bool StartAudioOutput() { }

	internal static bool StopAudioOutput() { }

}

