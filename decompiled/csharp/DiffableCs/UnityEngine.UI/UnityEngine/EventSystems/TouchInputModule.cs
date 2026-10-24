namespace UnityEngine.EventSystems;

[AddComponentMenu(/*Cpp2IL Warning: missing at least one required parameter*/)]
[Obsolete]
public class TouchInputModule : PointerInputModule
{
	private Vector2 m_LastMousePosition; //Field offset: 0x58
	private Vector2 m_MousePosition; //Field offset: 0x60
	private PointerEventData m_InputPointerEvent; //Field offset: 0x68
	[FormerlySerializedAs(/*Cpp2IL Warning: missing at least one required parameter*/)]
	[SerializeField]
	private bool m_ForceModuleActive; //Field offset: 0x70

	[Obsolete]
	public bool allowActivationOnStandalone
	{
		 get { } //Length: 8
		 set { } //Length: 12
	}

	public bool forceModuleActive
	{
		 get { } //Length: 8
		 set { } //Length: 12
	}

	protected TouchInputModule() { }

	public virtual void DeactivateModule() { }

	private void FakeTouches() { }

	public bool get_allowActivationOnStandalone() { }

	public bool get_forceModuleActive() { }

	public virtual bool IsModuleSupported() { }

	public virtual void Process() { }

	private void ProcessTouchEvents() { }

	protected void ProcessTouchPress(PointerEventData pointerEvent, bool pressed, bool released) { }

	public void set_allowActivationOnStandalone(bool value) { }

	public void set_forceModuleActive(bool value) { }

	public virtual bool ShouldActivateModule() { }

	public virtual string ToString() { }

	public virtual void UpdateModule() { }

	private bool UseFakeInput() { }

}

