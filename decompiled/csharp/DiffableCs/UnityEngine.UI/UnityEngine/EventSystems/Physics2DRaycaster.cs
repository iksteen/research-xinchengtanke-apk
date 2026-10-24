namespace UnityEngine.EventSystems;

[AddComponentMenu(/*Cpp2IL Warning: missing at least one required parameter*/)]
[RequireComponent(/*Cpp2IL Warning: missing at least one required parameter*/)]
public class Physics2DRaycaster : PhysicsRaycaster
{
	private RaycastHit2D[] m_Hits; //Field offset: 0x40

	protected Physics2DRaycaster() { }

	public virtual void Raycast(PointerEventData eventData, List<RaycastResult> resultAppendList) { }

}

