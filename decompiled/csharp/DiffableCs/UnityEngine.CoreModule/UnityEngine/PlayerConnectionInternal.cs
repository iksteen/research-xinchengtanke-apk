namespace UnityEngine;

[NativeHeader(/*Cpp2IL Warning: missing at least one required parameter*/)]
internal class PlayerConnectionInternal : IPlayerEditorConnectionNative
{

	public PlayerConnectionInternal() { }

	[FreeFunction]
	private static void DisconnectAll() { }

	[FreeFunction]
	private static void Initialize() { }

	[FreeFunction]
	private static bool IsConnected() { }

	[FreeFunction]
	private static void PollInternal() { }

	[FreeFunction]
	private static void RegisterInternal(string messageId) { }

	[FreeFunction]
	private static void SendMessage(string messageId, Byte[] data, int playerId) { }

	[FreeFunction]
	private static bool TrySendMessage(string messageId, Byte[] data, int playerId) { }

	private override void UnityEngine.IPlayerEditorConnectionNative.DisconnectAll() { }

	private override void UnityEngine.IPlayerEditorConnectionNative.Initialize() { }

	private override bool UnityEngine.IPlayerEditorConnectionNative.IsConnected() { }

	private override void UnityEngine.IPlayerEditorConnectionNative.Poll() { }

	private override void UnityEngine.IPlayerEditorConnectionNative.RegisterInternal(Guid messageId) { }

	private override void UnityEngine.IPlayerEditorConnectionNative.SendMessage(Guid messageId, Byte[] data, int playerId) { }

	private override bool UnityEngine.IPlayerEditorConnectionNative.TrySendMessage(Guid messageId, Byte[] data, int playerId) { }

	private override void UnityEngine.IPlayerEditorConnectionNative.UnregisterInternal(Guid messageId) { }

	[FreeFunction]
	private static void UnregisterInternal(string messageId) { }

}

