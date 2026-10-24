namespace UnityEngine;

[ExcludeFromPreset]
[NativeHeader(/*Cpp2IL Warning: missing at least one required parameter*/)]
[UsedByNativeCode]
public sealed class GameObject : object
{

	public bool activeInHierarchy
	{
		[NativeMethod]
		 get { } //Length: 64
	}

	public bool activeSelf
	{
		[NativeMethod]
		 get { } //Length: 64
	}

	public GameObject gameObject
	{
		 get { } //Length: 4
	}

	public int layer
	{
		 get { } //Length: 64
		 set { } //Length: 80
	}

	public Scene scene
	{
		[FreeFunction]
		 get { } //Length: 88
	}

	public string tag
	{
		[FreeFunction]
		 get { } //Length: 64
		[FreeFunction]
		 set { } //Length: 80
	}

	public Transform transform
	{
		[FreeFunction]
		 get { } //Length: 64
	}

	public GameObject(string name, Type[] components) { }

	public GameObject() { }

	public GameObject(string name) { }

	public T AddComponent() { }

	[TypeInferenceRule(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public Component AddComponent(Type componentType) { }

	[ExcludeFromDocs]
	public void BroadcastMessage(string methodName) { }

	[FreeFunction]
	public void BroadcastMessage(string methodName, object parameter, SendMessageOptions options) { }

	[FreeFunction]
	public static GameObject Find(string name) { }

	[NativeMethod]
	public bool get_activeInHierarchy() { }

	[NativeMethod]
	public bool get_activeSelf() { }

	public GameObject get_gameObject() { }

	public int get_layer() { }

	[FreeFunction]
	public Scene get_scene() { }

	private void get_scene_Injected(out Scene ret) { }

	[FreeFunction]
	public string get_tag() { }

	[FreeFunction]
	public Transform get_transform() { }

	public T GetComponent() { }

	[FreeFunction]
	[TypeInferenceRule(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public Component GetComponent(Type type) { }

	[FreeFunction]
	[NativeWritableSelf]
	internal void GetComponentFastPath(Type type, IntPtr oneFurtherThanResultValue) { }

	[FreeFunction]
	[TypeInferenceRule(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public Component GetComponentInChildren(Type type, bool includeInactive) { }

	[ExcludeFromDocs]
	public T GetComponentInChildren() { }

	public T GetComponentInChildren(bool includeInactive) { }

	public T GetComponentInParent(bool includeInactive) { }

	[FreeFunction]
	[TypeInferenceRule(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public Component GetComponentInParent(Type type, bool includeInactive) { }

	[ExcludeFromDocs]
	public T GetComponentInParent() { }

	public void GetComponents(List<T> results) { }

	public T[] GetComponents() { }

	public void GetComponentsInChildren(List<T> results) { }

	public T[] GetComponentsInChildren() { }

	public void GetComponentsInChildren(bool includeInactive, List<T> results) { }

	public T[] GetComponentsInChildren(bool includeInactive) { }

	public T[] GetComponentsInParent(bool includeInactive) { }

	public void GetComponentsInParent(bool includeInactive, List<T> results) { }

	[FreeFunction]
	private Array GetComponentsInternal(Type type, bool useSearchTypeAsArrayReturnType, bool recursive, bool includeInactive, bool reverse, object resultList) { }

	[FreeFunction]
	private Component Internal_AddComponentWithType(Type componentType) { }

	[FreeFunction]
	private static void Internal_CreateGameObject(GameObject self, string name) { }

	public void SendMessage(string methodName, SendMessageOptions options) { }

	[FreeFunction]
	public void SendMessage(string methodName, object value, SendMessageOptions options) { }

	public void set_layer(int value) { }

	[FreeFunction]
	public void set_tag(string value) { }

	[NativeMethod]
	public void SetActive(bool value) { }

	public bool TryGetComponent(out T component) { }

	[FreeFunction]
	[NativeWritableSelf]
	internal void TryGetComponentFastPath(Type type, IntPtr oneFurtherThanResultValue) { }

}

