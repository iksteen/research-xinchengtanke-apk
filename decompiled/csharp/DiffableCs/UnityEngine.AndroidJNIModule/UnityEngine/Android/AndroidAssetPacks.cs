namespace UnityEngine.Android;

[NativeHeader(/*Cpp2IL Warning: missing at least one required parameter*/)]
[StaticAccessor(/*Cpp2IL Warning: missing at least one required parameter*/)]
public static class AndroidAssetPacks
{
	private class AssetPackManagerDownloadStatusCallback : AndroidJavaProxy
	{
		private Action<AndroidAssetPackInfo> m_Callback; //Field offset: 0x20
		private String[] m_AssetPacks; //Field offset: 0x28

		[Preserve]
		private void onStatusUpdate(string assetPackName, int assetPackStatus, long assetPackSize, long assetPackBytesDownloaded, int assetPackTransferProgress, int assetPackErrorCode) { }

	}

	private class AssetPackManagerMobileDataConfirmationCallback : AndroidJavaProxy
	{
		private Action<AndroidAssetPackUseMobileDataRequestResult> m_Callback; //Field offset: 0x20

		[Preserve]
		private void onMobileDataConfirmationResult(bool allowed) { }

	}

	private class AssetPackManagerStatusQueryCallback : AndroidJavaProxy
	{
		private Action<UInt64, AndroidAssetPackState[]> m_Callback; //Field offset: 0x20
		private List<String> m_AssetPackNames; //Field offset: 0x28
		private List<AndroidAssetPackState> m_States; //Field offset: 0x30
		private long m_Size; //Field offset: 0x38

		[Preserve]
		private void onStatusResult(long totalBytes, String[] assetPackNames, Int32[] assetPackStatuses, Int32[] assetPackErrorCodes) { }

	}

	private static AndroidJavaObject s_JavaPlayAssetDeliveryWrapper; //Field offset: 0x0
	private static bool s_ApiMissing; //Field offset: 0x8

	private static AndroidJavaObject GetAssetPackManager() { }

}

