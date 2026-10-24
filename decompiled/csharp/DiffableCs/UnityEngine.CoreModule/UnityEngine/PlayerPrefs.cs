namespace UnityEngine;

[NativeHeader(/*Cpp2IL Warning: missing at least one required parameter*/)]
public class PlayerPrefs
{

	public static void DeleteKey(string key) { }

	public static float GetFloat(string key, float defaultValue) { }

	public static int GetInt(string key, int defaultValue) { }

	public static string GetString(string key, string defaultValue) { }

	public static string GetString(string key) { }

	public static bool HasKey(string key) { }

	[NativeMethod]
	public static void Save() { }

	public static void SetFloat(string key, float value) { }

	public static void SetInt(string key, int value) { }

	public static void SetString(string key, string value) { }

	[NativeMethod]
	private static bool TrySetFloat(string key, float value) { }

	[NativeMethod]
	private static bool TrySetInt(string key, int value) { }

	[NativeMethod]
	private static bool TrySetSetString(string key, string value) { }

}

