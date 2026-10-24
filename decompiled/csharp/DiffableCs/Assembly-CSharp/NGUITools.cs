//Type is in global namespace

[Extension]
public static class NGUITools
{
	internal sealed class OnInitFunc : MulticastDelegate
	{

		public OnInitFunc`1(object object, IntPtr method) { }

		public override IAsyncResult BeginInvoke(T w, AsyncCallback callback, object object) { }

		public override void EndInvoke(IAsyncResult result) { }

		public override void Invoke(T w) { }

	}

	private static AudioListener mListener; //Field offset: 0x0
	public static AudioSource audioSource; //Field offset: 0x8
	private static bool mLoaded; //Field offset: 0x10
	private static float mGlobalVolume; //Field offset: 0x14
	private static float mLastTimestamp; //Field offset: 0x18
	private static AudioClip mLastClip; //Field offset: 0x20
	private static List<UIWidget> s_widgets; //Field offset: 0x28
	private static Dictionary<Type, String> mTypeNames; //Field offset: 0x30
	private static Vector3[] mSides; //Field offset: 0x38
	public static KeyCode[] keys; //Field offset: 0x40
	private static Dictionary<String, UIWidget> mWidgets; //Field offset: 0x48
	private static UIPanel mRoot; //Field offset: 0x50
	private static GameObject mGo; //Field offset: 0x58
	private static ColorSpace mColorSpace; //Field offset: 0x60

	public static string clipboard
	{
		 get { } //Length: 112
		 set { } //Length: 132
	}

	public static bool fileAccess
	{
		 get { } //Length: 32
	}

	public static Vector2 screenSize
	{
		 get { } //Length: 52
	}

	public static float soundVolume
	{
		 get { } //Length: 224
		 set { } //Length: 216
	}

	private static NGUITools() { }

	private static void Activate(Transform t, bool compatibilityMode) { }

	private static void Activate(Transform t) { }

	[Extension]
	public static GameObject AddChild(GameObject parent, GameObject prefab, int layer) { }

	[Extension]
	public static GameObject AddChild(GameObject parent, GameObject prefab) { }

	[Extension]
	public static GameObject AddChild(Transform parent, GameObject prefab) { }

	[Extension]
	public static GameObject AddChild(GameObject parent, bool undo, int layer) { }

	[Extension]
	public static GameObject AddChild(GameObject parent, bool undo) { }

	[Extension]
	public static GameObject AddChild(GameObject parent, int layer) { }

	public static GameObject AddChild(GameObject parent) { }

	[Extension]
	public static T AddChild(GameObject parent) { }

	[Extension]
	public static T AddChild(GameObject parent, bool undo) { }

	[Extension]
	public static T AddMissingComponent(GameObject go) { }

	[Extension]
	public static UISprite AddSprite(GameObject go, INGUIAtlas atlas, string spriteName, int depth = 2147483647) { }

	[Extension]
	public static T AddWidget(GameObject go, int depth = 2147483647) { }

	public static void AddWidgetCollider(GameObject go) { }

	public static void AddWidgetCollider(GameObject go, bool considerInactive) { }

	public static int AdjustDepth(GameObject go, int adjustment) { }

	public static Color ApplyPMA(Color c) { }

	public static void BringForward(GameObject go) { }

	public static void Broadcast(string funcName, object param) { }

	public static void Broadcast(string funcName) { }

	public static int CalculateNextDepth(GameObject go, bool ignoreChildrenWithColliders) { }

	public static int CalculateNextDepth(GameObject go) { }

	public static int CalculateRaycastDepth(GameObject go) { }

	[DebuggerHidden]
	[DebuggerStepThrough]
	private static void CallCreatePanel(Transform t) { }

	public static KeyCode CaptionToKey(string caption) { }

	public static void CheckForPrefabStage(GameObject gameObject) { }

	public static bool CheckIfRelated(INGUIFont a, INGUIFont b) { }

	public static bool CheckIfRelated(INGUIAtlas a, INGUIAtlas b) { }

	public static UIPanel CreateUI(bool advanced3D, int layer) { }

	public static UIPanel CreateUI(Transform trans, bool advanced3D, int layer) { }

	public static UIPanel CreateUI(bool advanced3D) { }

	private static void Deactivate(Transform t) { }

	public static void Destroy(object obj) { }

	[Extension]
	public static void DestroyChildren(Transform t) { }

	public static void DestroyImmediate(object obj) { }

	public static T Draw(string id, OnInitFunc<T> onInit = null) { }

	[Obsolete]
	public static string EncodeColor(Color c) { }

	public static void Execute(GameObject go, string funcName) { }

	public static void ExecuteAll(GameObject root, string funcName) { }

	public static T[] FindActive() { }

	public static Camera FindCameraForLayer(int layer) { }

	public static T FindInParents(Transform trans) { }

	public static T FindInParents(GameObject go) { }

	[Extension]
	public static void FitOnScreen(Camera cam, Transform transform, Transform content, Vector3 pos, bool considerInactive = false) { }

	[Extension]
	public static void FitOnScreen(Camera cam, Transform transform, Transform content, Vector3 pos, out Bounds bounds, bool considerInactive = false) { }

	[Extension]
	public static void FitOnScreen(Camera cam, Transform t, bool considerInactive = false, bool considerChildren = true) { }

	[Extension]
	public static void FitOnScreen(Camera cam, Transform transform, Vector3 pos) { }

	[Extension]
	public static Color GammaToLinearSpace(Color c) { }

	public static string get_clipboard() { }

	public static bool get_fileAccess() { }

	public static Vector2 get_screenSize() { }

	public static float get_soundVolume() { }

	[DebuggerHidden]
	[DebuggerStepThrough]
	public static bool GetActive(GameObject go) { }

	[DebuggerHidden]
	[DebuggerStepThrough]
	public static bool GetActive(Behaviour mb) { }

	public static string GetFuncName(object obj, string method) { }

	public static string GetHierarchy(GameObject obj) { }

	public static GameObject GetRoot(GameObject go) { }

	[Extension]
	public static Vector3[] GetSides(Camera cam) { }

	[Extension]
	public static Vector3[] GetSides(Camera cam, float depth) { }

	[Extension]
	public static Vector3[] GetSides(Camera cam, Transform relativeTo) { }

	[Extension]
	public static Vector3[] GetSides(Camera cam, float depth, Transform relativeTo) { }

	public static string GetTypeName(object obj) { }

	public static string GetTypeName() { }

	[Extension]
	public static Vector3[] GetWorldCorners(Camera cam) { }

	[Extension]
	public static Vector3[] GetWorldCorners(Camera cam, float depth) { }

	[Extension]
	public static Vector3[] GetWorldCorners(Camera cam, Transform relativeTo) { }

	[Extension]
	public static Vector3[] GetWorldCorners(Camera cam, float depth, Transform relativeTo) { }

	public static void ImmediatelyCreateDrawCalls(GameObject root) { }

	[Obsolete]
	public static bool IsActive(Behaviour mb) { }

	public static bool IsChild(Transform parent, Transform child) { }

	public static string KeyToCaption(KeyCode key) { }

	[Extension]
	public static Color LinearToGammaSpace(Color c) { }

	public static Byte[] Load(string fileName) { }

	public static void MakePixelPerfect(Transform t) { }

	public static void MarkParentAsChanged(GameObject go) { }

	public static void NormalizeDepths() { }

	public static void NormalizePanelDepths() { }

	public static void NormalizeWidgetDepths() { }

	public static void NormalizeWidgetDepths(GameObject go) { }

	public static void NormalizeWidgetDepths(UIWidget[] list) { }

	[Obsolete]
	public static Color ParseColor(string text, int offset) { }

	public static AudioSource PlaySound(AudioClip clip, float volume) { }

	public static AudioSource PlaySound(AudioClip clip) { }

	public static AudioSource PlaySound(AudioClip clip, float volume, float pitch) { }

	public static void PushBack(GameObject go) { }

	public static int RandomRange(int min, int max) { }

	public static void RegisterUndo(object obj, string name) { }

	public static void Replace(INGUIAtlas before, INGUIAtlas after) { }

	public static Vector3 Round(Vector3 v) { }

	public static bool Save(string fileName, Byte[] bytes) { }

	public static void set_clipboard(string value) { }

	public static void set_soundVolume(float value) { }

	public static void SetActive(GameObject go, bool state, bool compatibilityMode) { }

	public static void SetActive(GameObject go, bool state) { }

	public static void SetActiveChildren(GameObject go, bool state) { }

	[DebuggerHidden]
	[DebuggerStepThrough]
	public static void SetActiveSelf(GameObject go, bool state) { }

	[Extension]
	public static void SetChildLayer(Transform t, int layer) { }

	public static void SetDirty(object obj, string undoName = "last change") { }

	public static void SetLayer(GameObject go, int layer) { }

	[Obsolete]
	public static string StripSymbols(string text) { }

	public static void UpdateWidgetCollider(GameObject go) { }

	public static void UpdateWidgetCollider(UIWidget w, BoxCollider2D box) { }

	public static void UpdateWidgetCollider(UIWidget w, BoxCollider box) { }

	public static void UpdateWidgetCollider(UIWidget w) { }

	public static void UpdateWidgetCollider(BoxCollider box, bool considerInactive) { }

	public static void UpdateWidgetCollider(BoxCollider2D box, bool considerInactive) { }

	public static void UpdateWidgetCollider(GameObject go, bool considerInactive) { }

}

