//Type is in global namespace

public class Painter : MonoBehaviour
{
	private static long timer; //Field offset: 0x0
	private LineRenderer _selfLine; //Field offset: 0x18
	private Vector3 prevPosition; //Field offset: 0x20
	private bool isinit; //Field offset: 0x2C
	[SerializeField]
	private float minDistance; //Field offset: 0x30
	[Range(/*Cpp2IL Warning: missing at least one required parameter*/)]
	[SerializeField]
	private float width; //Field offset: 0x34
	private List<Vector3> _posList; //Field offset: 0x38
	public GameObject BgSprite; //Field offset: 0x40
	public GameObject CarSprite; //Field offset: 0x48
	public GameObject paintSprite; //Field offset: 0x50
	public float speed; //Field offset: 0x58
	private int moveIndex; //Field offset: 0x5C
	private Vector2 areaMin; //Field offset: 0x60
	private Vector2 areaMax; //Field offset: 0x68
	private List<Vector3> positions; //Field offset: 0x70
	private int send_lock_timer; //Field offset: 0x78
	private GameObject ButtonRouteStart; //Field offset: 0x80
	private UISprite ButtonRouteStart_bg; //Field offset: 0x88
	public GameObject ceshiobj0; //Field offset: 0x90
	public GameObject ceshiobj1; //Field offset: 0x98
	public GameObject ceshiobj2; //Field offset: 0xA0
	public GameObject ceshiobj3; //Field offset: 0xA8
	public GameObject ceshiobj4; //Field offset: 0xB0
	public Transform parentobj; //Field offset: 0xB8
	private UIButton ButtonRouteClear; //Field offset: 0xC0
	private bool button_iskeydown; //Field offset: 0xC8

	private static Painter() { }

	public Painter() { }

	private bool checkinpaint() { }

	private GameObject createpointsprite(int ftype) { }

	public long gethaomiao() { }

	private bool IsPointInsideArea(Vector3 point, Vector3 areaMin, Vector3 areaMax) { }

	public void judge_direction(Vector3 nowposition, Vector3 nextposition) { }

	private void OnClickButtonRouteClear() { }

	private void OnClickButtonRouteStart() { }

	private void Start() { }

	private void start_button() { }

	private void StartLine(Vector3 position) { }

	private void Update() { }

	private void UpdateLine() { }

}

