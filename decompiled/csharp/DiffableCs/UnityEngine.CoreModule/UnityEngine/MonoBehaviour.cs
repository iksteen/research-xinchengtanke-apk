namespace UnityEngine;

[ExtensionOfNativeClass]
[NativeHeader(/*Cpp2IL Warning: missing at least one required parameter*/)]
[NativeHeader(/*Cpp2IL Warning: missing at least one required parameter*/)]
[RequiredByNativeCode]
public class MonoBehaviour : Behaviour
{

	public bool useGUILayout
	{
		 get { } //Length: 64
		 set { } //Length: 80
	}

	public MonoBehaviour() { }

	public void CancelInvoke() { }

	[FreeFunction]
	private static void CancelInvoke(MonoBehaviour self, string methodName) { }

	public void CancelInvoke(string methodName) { }

	public bool get_useGUILayout() { }

	internal string GetScriptClassName() { }

	[FreeFunction]
	private static void Internal_CancelInvokeAll(MonoBehaviour self) { }

	[FreeFunction]
	private static bool Internal_IsInvokingAll(MonoBehaviour self) { }

	public void Invoke(string methodName, float time) { }

	[FreeFunction]
	private static void InvokeDelayed(MonoBehaviour self, string methodName, float time, float repeatRate) { }

	public void InvokeRepeating(string methodName, float time, float repeatRate) { }

	public bool IsInvoking(string methodName) { }

	[FreeFunction]
	private static bool IsInvoking(MonoBehaviour self, string methodName) { }

	public bool IsInvoking() { }

	[FreeFunction]
	private static bool IsObjectMonoBehaviour(object obj) { }

	public static void print(object message) { }

	public void set_useGUILayout(bool value) { }

	public Coroutine StartCoroutine(IEnumerator routine) { }

	public Coroutine StartCoroutine(string methodName, object value) { }

	[ExcludeFromDocs]
	public Coroutine StartCoroutine(string methodName) { }

	[Obsolete]
	public Coroutine StartCoroutine_Auto(IEnumerator routine) { }

	private Coroutine StartCoroutineManaged(string methodName, object value) { }

	private Coroutine StartCoroutineManaged2(IEnumerator enumerator) { }

	public void StopAllCoroutines() { }

	public void StopCoroutine(string methodName) { }

	public void StopCoroutine(Coroutine routine) { }

	public void StopCoroutine(IEnumerator routine) { }

	private void StopCoroutineFromEnumeratorManaged(IEnumerator routine) { }

	private void StopCoroutineManaged(Coroutine routine) { }

}

