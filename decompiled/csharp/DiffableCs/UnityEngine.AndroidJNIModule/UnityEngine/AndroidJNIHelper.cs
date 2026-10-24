namespace UnityEngine;

[NativeConditional(/*Cpp2IL Warning: missing at least one required parameter*/)]
[NativeHeader(/*Cpp2IL Warning: missing at least one required parameter*/)]
[StaticAccessor(/*Cpp2IL Warning: missing at least one required parameter*/)]
[UsedByNativeCode]
public static class AndroidJNIHelper
{

	public static bool debug
	{
		 get { } //Length: 52
		 set { } //Length: 64
	}

	public static ArrayType ConvertFromJNIArray(IntPtr array) { }

	public static IntPtr ConvertToJNIArray(Array array) { }

	public static IntPtr CreateJavaProxy(AndroidJavaProxy proxy) { }

	public static IntPtr CreateJavaRunnable(AndroidJavaRunnable jrunnable) { }

	public static jvalue[] CreateJNIArgArray(Object[] args) { }

	public static void DeleteJNIArgArray(Object[] args, jvalue[] jniArgs) { }

	public static bool get_debug() { }

	public static IntPtr GetConstructorID(IntPtr javaClass, string signature) { }

	public static IntPtr GetConstructorID(IntPtr javaClass) { }

	public static IntPtr GetConstructorID(IntPtr jclass, Object[] args) { }

	public static IntPtr GetFieldID(IntPtr javaClass, string fieldName) { }

	public static IntPtr GetFieldID(IntPtr javaClass, string fieldName, string signature) { }

	public static IntPtr GetFieldID(IntPtr javaClass, string fieldName, string signature, bool isStatic) { }

	public static IntPtr GetFieldID(IntPtr jclass, string fieldName, bool isStatic) { }

	public static IntPtr GetMethodID(IntPtr javaClass, string methodName, string signature) { }

	public static IntPtr GetMethodID(IntPtr javaClass, string methodName) { }

	public static IntPtr GetMethodID(IntPtr jclass, string methodName, Object[] args, bool isStatic) { }

	public static IntPtr GetMethodID(IntPtr jclass, string methodName, Object[] args, bool isStatic) { }

	public static IntPtr GetMethodID(IntPtr javaClass, string methodName, string signature, bool isStatic) { }

	public static string GetSignature(object obj) { }

	public static string GetSignature(Object[] args) { }

	public static string GetSignature(Object[] args) { }

	public static void set_debug(bool value) { }

}

