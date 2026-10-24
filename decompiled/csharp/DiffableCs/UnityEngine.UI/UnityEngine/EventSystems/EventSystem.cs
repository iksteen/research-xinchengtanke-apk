namespace UnityEngine.EventSystems;

[AddComponentMenu(/*Cpp2IL Warning: missing at least one required parameter*/)]
[DisallowMultipleComponent]
public class EventSystem : UIBehaviour
{
	private static List<EventSystem> m_EventSystems; //Field offset: 0x0
	private static readonly Comparison<RaycastResult> s_RaycastComparer; //Field offset: 0x8
	private List<BaseInputModule> m_SystemInputModules; //Field offset: 0x18
	private BaseInputModule m_CurrentInputModule; //Field offset: 0x20
	[FormerlySerializedAs(/*Cpp2IL Warning: missing at least one required parameter*/)]
	[SerializeField]
	private GameObject m_FirstSelected; //Field offset: 0x28
	[SerializeField]
	private bool m_sendNavigationEvents; //Field offset: 0x30
	[SerializeField]
	private int m_DragThreshold; //Field offset: 0x34
	private GameObject m_CurrentSelected; //Field offset: 0x38
	private bool m_HasFocus; //Field offset: 0x40
	private bool m_SelectionGuard; //Field offset: 0x41
	private BaseEventData m_DummyData; //Field offset: 0x48

	public bool alreadySelecting
	{
		 get { } //Length: 8
	}

	private BaseEventData baseEventDataCache
	{
		private get { } //Length: 144
	}

	public static EventSystem current
	{
		 get { } //Length: 212
		 set { } //Length: 448
	}

	public BaseInputModule currentInputModule
	{
		 get { } //Length: 8
	}

	public GameObject currentSelectedGameObject
	{
		 get { } //Length: 8
	}

	public GameObject firstSelectedGameObject
	{
		 get { } //Length: 8
		 set { } //Length: 8
	}

	public bool isFocused
	{
		 get { } //Length: 8
	}

	[Obsolete]
	public GameObject lastSelectedGameObject
	{
		 get { } //Length: 8
	}

	public int pixelDragThreshold
	{
		 get { } //Length: 8
		 set { } //Length: 8
	}

	public bool sendNavigationEvents
	{
		 get { } //Length: 8
		 set { } //Length: 12
	}

	private static EventSystem() { }

	protected EventSystem() { }

	private void ChangeEventModule(BaseInputModule module) { }

	public bool get_alreadySelecting() { }

	private BaseEventData get_baseEventDataCache() { }

	public static EventSystem get_current() { }

	public BaseInputModule get_currentInputModule() { }

	public GameObject get_currentSelectedGameObject() { }

	public GameObject get_firstSelectedGameObject() { }

	public bool get_isFocused() { }

	public GameObject get_lastSelectedGameObject() { }

	public int get_pixelDragThreshold() { }

	public bool get_sendNavigationEvents() { }

	public bool IsPointerOverGameObject(int pointerId) { }

	public bool IsPointerOverGameObject() { }

	protected override void OnApplicationFocus(bool hasFocus) { }

	protected virtual void OnDisable() { }

	protected virtual void OnEnable() { }

	public void RaycastAll(PointerEventData eventData, List<RaycastResult> raycastResults) { }

	private static int RaycastComparer(RaycastResult lhs, RaycastResult rhs) { }

	public static void set_current(EventSystem value) { }

	public void set_firstSelectedGameObject(GameObject value) { }

	public void set_pixelDragThreshold(int value) { }

	public void set_sendNavigationEvents(bool value) { }

	public void SetSelectedGameObject(GameObject selected, BaseEventData pointer) { }

	public void SetSelectedGameObject(GameObject selected) { }

	private void TickModules() { }

	public virtual string ToString() { }

	protected override void Update() { }

	public void UpdateModules() { }

}

