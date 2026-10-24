namespace UnityEngine.SceneManagement;

[NativeHeader(/*Cpp2IL Warning: missing at least one required parameter*/)]
[RequiredByNativeCode]
public class SceneManager
{
	internal static bool s_AllowLoadScene; //Field offset: 0x0
	[CompilerGenerated]
	[DebuggerBrowsable(/*Cpp2IL Warning: missing at least one required parameter*/)]
	private static UnityAction<Scene, LoadSceneMode> sceneLoaded; //Field offset: 0x8
	[CompilerGenerated]
	[DebuggerBrowsable(/*Cpp2IL Warning: missing at least one required parameter*/)]
	private static UnityAction<Scene> sceneUnloaded; //Field offset: 0x10
	[CompilerGenerated]
	[DebuggerBrowsable(/*Cpp2IL Warning: missing at least one required parameter*/)]
	private static UnityAction<Scene, Scene> activeSceneChanged; //Field offset: 0x18

	public static int sceneCount
	{
		[NativeHeader(/*Cpp2IL Warning: missing at least one required parameter*/)]
		[NativeMethod]
		[StaticAccessor(/*Cpp2IL Warning: missing at least one required parameter*/)]
		 get { } //Length: 52
	}

	private static SceneManager() { }

	[NativeHeader(/*Cpp2IL Warning: missing at least one required parameter*/)]
	[NativeMethod]
	[StaticAccessor(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public static int get_sceneCount() { }

	[NativeThrows]
	[StaticAccessor(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public static Scene GetSceneAt(int index) { }

	private static void GetSceneAt_Injected(int index, out Scene ret) { }

	[RequiredByNativeCode]
	private static void Internal_ActiveSceneChanged(Scene previousActiveScene, Scene newActiveScene) { }

	[RequiredByNativeCode]
	private static void Internal_SceneLoaded(Scene scene, LoadSceneMode mode) { }

	[RequiredByNativeCode]
	private static void Internal_SceneUnloaded(Scene scene) { }

	[RequiredByNativeCode]
	internal static AsyncOperation LoadFirstScene_Internal(bool async) { }

	public static void LoadScene(string sceneName, LoadSceneMode mode) { }

	[ExcludeFromDocs]
	public static void LoadScene(string sceneName) { }

	public static Scene LoadScene(string sceneName, LoadSceneParameters parameters) { }

	public static AsyncOperation LoadSceneAsync(string sceneName, LoadSceneMode mode) { }

	public static AsyncOperation LoadSceneAsync(string sceneName, LoadSceneParameters parameters) { }

	private static AsyncOperation LoadSceneAsyncNameIndexInternal(string sceneName, int sceneBuildIndex, LoadSceneParameters parameters, bool mustCompleteNextFrame) { }

	[NativeThrows]
	[StaticAccessor(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public static void MoveGameObjectToScene(GameObject go, Scene scene) { }

	private static void MoveGameObjectToScene_Injected(GameObject go, ref Scene scene) { }

}

