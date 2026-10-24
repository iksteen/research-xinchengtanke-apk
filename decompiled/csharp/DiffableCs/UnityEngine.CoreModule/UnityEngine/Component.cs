namespace UnityEngine;

[NativeClass(/*Cpp2IL Warning: missing at least one required parameter*/)]
[NativeHeader(/*Cpp2IL Warning: missing at least one required parameter*/)]
[RequiredByNativeCode]
public class Component : object
{

	public GameObject gameObject
	{
		[FreeFunction]
		 get { } //Length: 64
	}

	public string tag
	{
		 get { } //Length: 116
		 set { } //Length: 132
	}

	public Transform transform
	{
		[FreeFunction]
		 get { } //Length: 64
	}

	public Component() { }

	[ExcludeFromDocs]
	public void BroadcastMessage(string methodName) { }

	[FreeFunction]
	public void BroadcastMessage(string methodName, object parameter, SendMessageOptions options) { }

	public void BroadcastMessage(string methodName, SendMessageOptions options) { }

	[FreeFunction]
	public GameObject get_gameObject() { }

	public string get_tag() { }

	[FreeFunction]
	public Transform get_transform() { }

	[TypeInferenceRule(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public Component GetComponent(Type type) { }

	public T GetComponent() { }

	[FreeFunction]
	internal void GetComponentFastPath(Type type, IntPtr oneFurtherThanResultValue) { }

	[TypeInferenceRule(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public Component GetComponentInChildren(Type t, bool includeInactive) { }

	[ExcludeFromDocs]
	public T GetComponentInChildren() { }

	public T GetComponentInParent() { }

	[TypeInferenceRule(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public Component GetComponentInParent(Type t, bool includeInactive) { }

	public T[] GetComponents() { }

	public void GetComponents(List<T> results) { }

	public void GetComponents(Type type, List<Component> results) { }

	[FreeFunction]
	private void GetComponentsForListInternal(Type searchType, object resultList) { }

	public void GetComponentsInChildren(List<T> results) { }

	public T[] GetComponentsInChildren() { }

	public void GetComponentsInChildren(bool includeInactive, List<T> result) { }

	public T[] GetComponentsInChildren(bool includeInactive) { }

	public void GetComponentsInParent(bool includeInactive, List<T> results) { }

	public T[] GetComponentsInParent(bool includeInactive) { }

	public T[] GetComponentsInParent() { }

	public void set_tag(string value) { }

}

