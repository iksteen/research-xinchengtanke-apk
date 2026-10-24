namespace UnityEngine.EventSystems;

[RequireComponent(/*Cpp2IL Warning: missing at least one required parameter*/)]
public abstract class BaseInputModule : UIBehaviour
{
	protected List<RaycastResult> m_RaycastResultCache; //Field offset: 0x18
	private AxisEventData m_AxisEventData; //Field offset: 0x20
	private EventSystem m_EventSystem; //Field offset: 0x28
	private BaseEventData m_BaseEventData; //Field offset: 0x30
	protected BaseInput m_InputOverride; //Field offset: 0x38
	private BaseInput m_DefaultInput; //Field offset: 0x40

	protected EventSystem eventSystem
	{
		 get { } //Length: 8
	}

	public BaseInput input
	{
		 get { } //Length: 612
	}

	public BaseInput inputOverride
	{
		 get { } //Length: 8
		 set { } //Length: 8
	}

	protected BaseInputModule() { }

	public override void ActivateModule() { }

	public override void DeactivateModule() { }

	protected static MoveDirection DetermineMoveDirection(float x, float y, float deadZone) { }

	protected static MoveDirection DetermineMoveDirection(float x, float y) { }

	protected static GameObject FindCommonRoot(GameObject g1, GameObject g2) { }

	protected static RaycastResult FindFirstRaycast(List<RaycastResult> candidates) { }

	protected EventSystem get_eventSystem() { }

	public BaseInput get_input() { }

	public BaseInput get_inputOverride() { }

	protected override AxisEventData GetAxisEventData(float x, float y, float moveDeadZone) { }

	protected override BaseEventData GetBaseEventData() { }

	protected void HandlePointerExitAndEnter(PointerEventData currentPointerData, GameObject newEnterTarget) { }

	public override bool IsModuleSupported() { }

	public override bool IsPointerOverGameObject(int pointerId) { }

	protected virtual void OnDisable() { }

	protected virtual void OnEnable() { }

	public abstract void Process() { }

	public void set_inputOverride(BaseInput value) { }

	public override bool ShouldActivateModule() { }

	public override void UpdateModule() { }

}

