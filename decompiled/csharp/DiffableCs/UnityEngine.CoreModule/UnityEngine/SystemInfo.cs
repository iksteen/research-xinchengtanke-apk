namespace UnityEngine;

[NativeHeader(/*Cpp2IL Warning: missing at least one required parameter*/)]
[NativeHeader(/*Cpp2IL Warning: missing at least one required parameter*/)]
[NativeHeader(/*Cpp2IL Warning: missing at least one required parameter*/)]
[NativeHeader(/*Cpp2IL Warning: missing at least one required parameter*/)]
[NativeHeader(/*Cpp2IL Warning: missing at least one required parameter*/)]
[NativeHeader(/*Cpp2IL Warning: missing at least one required parameter*/)]
public sealed class SystemInfo
{

	public static string deviceModel
	{
		 get { } //Length: 52
	}

	public static string deviceUniqueIdentifier
	{
		 get { } //Length: 52
	}

	public static string graphicsDeviceVersion
	{
		 get { } //Length: 52
	}

	public static int graphicsShaderLevel
	{
		 get { } //Length: 52
	}

	public static OperatingSystemFamily operatingSystemFamily
	{
		 get { } //Length: 52
	}

	public static bool supportsGyroscope
	{
		 get { } //Length: 52
	}

	public static string get_deviceModel() { }

	public static string get_deviceUniqueIdentifier() { }

	public static string get_graphicsDeviceVersion() { }

	public static int get_graphicsShaderLevel() { }

	public static OperatingSystemFamily get_operatingSystemFamily() { }

	public static bool get_supportsGyroscope() { }

	[FreeFunction]
	public static GraphicsFormat GetCompatibleFormat(GraphicsFormat format, FormatUsage usage) { }

	[FreeFunction]
	private static string GetDeviceModel() { }

	[FreeFunction]
	private static string GetDeviceUniqueIdentifier() { }

	[FreeFunction]
	private static string GetGraphicsDeviceVersion() { }

	[FreeFunction]
	public static GraphicsFormat GetGraphicsFormat(DefaultFormat format) { }

	[FreeFunction]
	private static int GetGraphicsShaderLevel() { }

	[FreeFunction]
	private static OperatingSystemFamily GetOperatingSystemFamily() { }

	[FreeFunction]
	public static bool IsFormatSupported(GraphicsFormat format, FormatUsage usage) { }

	[FreeFunction]
	private static bool IsGyroAvailable() { }

	private static bool IsValidEnumValue(Enum value) { }

	public static bool SupportsTextureFormat(TextureFormat format) { }

	[FreeFunction]
	private static bool SupportsTextureFormatNative(TextureFormat format) { }

}

