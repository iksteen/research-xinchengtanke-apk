namespace MG_BlocksEngine2.Environment;

public class BE2_Zoom : MonoBehaviour
{
	public float startSize; //Field offset: 0x18
	public float minSize; //Field offset: 0x1C
	public float maxSize; //Field offset: 0x20
	public float zoomRate; //Field offset: 0x24
	private Vector3 unscaledMousePositin; //Field offset: 0x28
	private I_BE2_ProgrammingEnv _programmingEnv; //Field offset: 0x38
	private bool primaryKey; //Field offset: 0x40
	private bool auxKey; //Field offset: 0x41

	public BE2_Zoom() { }

	private float ConvertValueToNewRange(float oldValue, Vector2 oldScale, Vector2 newScale) { }

	public void HandleZoom() { }

	private void OnDisable() { }

	private void OnEnable() { }

	private void SetAuxKeyDown() { }

	private void SetAuxKeyUp() { }

	private void SetPrimaryKeyDown() { }

	private void SetPrimaryKeyUp() { }

	private void TranslateView(float x, float y) { }

	public void Zoom(float scrollWheel, Vector3 zoomAnchorPosition) { }

	public void ZoomCenter() { }

	public void ZoomIn() { }

	public void ZoomOut() { }

}

