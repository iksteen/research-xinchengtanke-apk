namespace UnityEngine;

[NativeHeader(/*Cpp2IL Warning: missing at least one required parameter*/)]
[NativeHeader(/*Cpp2IL Warning: missing at least one required parameter*/)]
[NativeHeader(/*Cpp2IL Warning: missing at least one required parameter*/)]
[RequiredByNativeCode]
public class object
{
	internal static int OffsetOfInstanceIDInCPlusPlusObject; //Field offset: 0x0
	private const string objectIsNullMessage = "The Object you want to instantiate is null."; //Field offset: 0x0
	private const string cloneDestroyedMessage = "Instantiate failed because the clone was destroyed during creation. This can happen if DestroyImmediate is called in MonoBehaviour.Awake."; //Field offset: 0x0
	private IntPtr m_CachedPtr; //Field offset: 0x10

	public HideFlags hideFlags
	{
		 get { } //Length: 64
		 set { } //Length: 80
	}

	public string name
	{
		 get { } //Length: 128
		 set { } //Length: 144
	}

	private static Object() { }

	public Object() { }

	private static void CheckNullArgument(object arg, string message) { }

	private static bool CompareBaseObjects(object lhs, object rhs) { }

	[NativeMethod]
	public static void Destroy(object obj, float t) { }

	[ExcludeFromDocs]
	public static void Destroy(object obj) { }

	[NativeMethod]
	public static void DestroyImmediate(object obj, bool allowDestroyingAssets) { }

	[ExcludeFromDocs]
	public static void DestroyImmediate(object obj) { }

	[FreeFunction]
	public static void DontDestroyOnLoad(object target) { }

	public virtual bool Equals(object other) { }

	[FreeFunction]
	[VisibleToOtherModules]
	internal static object FindObjectFromInstanceID(int instanceID) { }

	public static T FindObjectOfType() { }

	[TypeInferenceRule(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public static object FindObjectOfType(Type type) { }

	[TypeInferenceRule(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public static object FindObjectOfType(Type type, bool includeInactive) { }

	public static T[] FindObjectsOfType() { }

	public static Object[] FindObjectsOfType(Type type) { }

	[FreeFunction]
	[TypeInferenceRule(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public static Object[] FindObjectsOfType(Type type, bool includeInactive) { }

	public HideFlags get_hideFlags() { }

	public string get_name() { }

	private IntPtr GetCachedPtr() { }

	public virtual int GetHashCode() { }

	public int GetInstanceID() { }

	[FreeFunction]
	private static string GetName(object obj) { }

	[NativeMethod]
	private static int GetOffsetOfInstanceIDInCPlusPlusObject() { }

	public static T Instantiate(T original, Transform parent) { }

	public static T Instantiate(T original, Vector3 position, Quaternion rotation, Transform parent) { }

	public static T Instantiate(T original, Vector3 position, Quaternion rotation) { }

	public static T Instantiate(T original) { }

	[TypeInferenceRule(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public static object Instantiate(object original, Transform parent, bool instantiateInWorldSpace) { }

	[TypeInferenceRule(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public static object Instantiate(object original) { }

	[TypeInferenceRule(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public static object Instantiate(object original, Vector3 position, Quaternion rotation, Transform parent) { }

	[TypeInferenceRule(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public static object Instantiate(object original, Vector3 position, Quaternion rotation) { }

	public static T Instantiate(T original, Transform parent, bool worldPositionStays) { }

	[FreeFunction]
	private static object Internal_CloneSingle(object data) { }

	[FreeFunction]
	private static object Internal_CloneSingleWithParent(object data, Transform parent, bool worldPositionStays) { }

	[FreeFunction]
	private static object Internal_InstantiateSingle(object data, Vector3 pos, Quaternion rot) { }

	private static object Internal_InstantiateSingle_Injected(object data, ref Vector3 pos, ref Quaternion rot) { }

	[FreeFunction]
	private static object Internal_InstantiateSingleWithParent(object data, Transform parent, Vector3 pos, Quaternion rot) { }

	private static object Internal_InstantiateSingleWithParent_Injected(object data, Transform parent, ref Vector3 pos, ref Quaternion rot) { }

	private static bool IsNativeObjectAlive(object o) { }

	public static bool op_Equality(object x, object y) { }

	public static bool op_Implicit(object exists) { }

	public static bool op_Inequality(object x, object y) { }

	public void set_hideFlags(HideFlags value) { }

	public void set_name(string value) { }

	[FreeFunction]
	private static void SetName(object obj, string name) { }

	public virtual string ToString() { }

	[FreeFunction]
	private static string ToString(object obj) { }

}

