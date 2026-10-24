//Type is in global namespace

public class Slided : MonoBehaviour
{
	private static int totalWaypoint; //Field offset: 0x0
	public GameObject slidepivot; //Field offset: 0x18
	public float camspeed; //Field offset: 0x20
	public float pivotspeed; //Field offset: 0x24
	public float decalX; //Field offset: 0x28
	public float decalY; //Field offset: 0x2C
	public float zoomValue; //Field offset: 0x30
	public int currentWaypoint; //Field offset: 0x34
	public GameObject[] waypoints; //Field offset: 0x38
	private int previoustWaypoint; //Field offset: 0x40
	private float currentPivotX; //Field offset: 0x44
	private float currentPivotY; //Field offset: 0x48
	private float currentPivotZ; //Field offset: 0x4C
	private float nextPivotX; //Field offset: 0x50
	private float nextPivotY; //Field offset: 0x54
	private float nextPivotZ; //Field offset: 0x58
	private float currentSlideX; //Field offset: 0x5C
	private float currentSlideY; //Field offset: 0x60
	private float currentSlideZ; //Field offset: 0x64
	private float nextslideX; //Field offset: 0x68
	private float nextslideY; //Field offset: 0x6C
	private float nextslideZ; //Field offset: 0x70
	private float cameraSmooth; //Field offset: 0x74
	private float pivotSmooth; //Field offset: 0x78
	private float oldDecalX; //Field offset: 0x7C
	private float oldDecalY; //Field offset: 0x80

	private static Slided() { }

	public Slided() { }

	private void Awake() { }

	private void FacingCamera() { }

	private void GetInputKey() { }

	public void GoToNextSlide() { }

	public void GoToPrevSlide() { }

	public void GoToSlideNumber(int num) { }

	public float InterpolateAngle(float ValueA, float ValueB, float Smooth) { }

	public float InterpolateValue(float ValueA, float ValueB, float Smooth, float Velocity) { }

	private void OnTriggerEnter(Collider other) { }

	private void OnTriggerExit(Collider other) { }

	public void Reset3DView() { }

	public void Set3DView() { }

	private void Update() { }

}

