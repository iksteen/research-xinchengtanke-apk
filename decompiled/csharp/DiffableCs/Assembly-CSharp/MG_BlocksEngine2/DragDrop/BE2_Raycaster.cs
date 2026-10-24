namespace MG_BlocksEngine2.DragDrop;

public class BE2_Raycaster : MonoBehaviour, I_BE2_Raycaster
{
	[CompilerGenerated]
	private sealed class <>c__DisplayClass5_0
	{
		public GraphicRaycaster raycaster; //Field offset: 0x10

		public <>c__DisplayClass5_0() { }

		internal bool <AddRaycaster>b__0(GraphicRaycaster x) { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass6_0
	{
		public GraphicRaycaster raycaster; //Field offset: 0x10

		public <>c__DisplayClass6_0() { }

		internal bool <RemoveRaycaster>b__0(GraphicRaycaster x) { }

	}

	private BE2_DragDropManager _dragDropManager; //Field offset: 0x18
	private PointerEventData _pointerEventData; //Field offset: 0x20
	[SerializeField]
	private GraphicRaycaster[] raycasters; //Field offset: 0x28
	[SerializeField]
	private EventSystem eventSystem; //Field offset: 0x30

	public BE2_Raycaster() { }

	public override GraphicRaycaster[] AddRaycaster(GraphicRaycaster raycaster = null) { }

	private void Awake() { }

	public override I_BE2_Spot FindClosestSpotForBlock(I_BE2_Drag drag, float maxDistance) { }

	public override I_BE2_Spot FindClosestSpotOfType(I_BE2_Drag drag, float maxDistance) { }

	public override I_BE2_Drag GetDragAtPosition(Vector2 position) { }

	public override I_BE2_Spot GetSpotAtPosition(Vector3 position) { }

	public override GraphicRaycaster[] RemoveRaycaster(GraphicRaycaster raycaster) { }

}

