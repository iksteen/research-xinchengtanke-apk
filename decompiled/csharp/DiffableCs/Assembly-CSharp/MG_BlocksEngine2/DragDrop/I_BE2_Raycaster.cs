namespace MG_BlocksEngine2.DragDrop;

public interface I_BE2_Raycaster
{

	public GraphicRaycaster[] AddRaycaster(GraphicRaycaster raycaster) { }

	public I_BE2_Spot FindClosestSpotForBlock(I_BE2_Drag drag, float maxDistance) { }

	public I_BE2_Spot FindClosestSpotOfType(I_BE2_Drag drag, float maxDistance) { }

	public I_BE2_Drag GetDragAtPosition(Vector2 position) { }

	public I_BE2_Spot GetSpotAtPosition(Vector3 position) { }

	public GraphicRaycaster[] RemoveRaycaster(GraphicRaycaster raycaster) { }

}

