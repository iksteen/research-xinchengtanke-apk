//Type is in global namespace

public class MouseLook : MonoBehaviour
{
	private Vector2 _mouseAbsolute; //Field offset: 0x18
	private Vector2 _smoothMouse; //Field offset: 0x20
	[Header(/*Cpp2IL Warning: missing at least one required parameter*/)]
	[Space]
	public Vector2 clampInDegrees; //Field offset: 0x28
	public CursorLockMode lockCursor; //Field offset: 0x30
	public Vector2 sensitivity; //Field offset: 0x34
	public Vector2 smoothing; //Field offset: 0x3C
	public Vector2 targetDirection; //Field offset: 0x44
	public Vector2 targetCharacterDirection; //Field offset: 0x4C
	public GameObject characterBody; //Field offset: 0x58
	[Header(/*Cpp2IL Warning: missing at least one required parameter*/)]
	[Space]
	public float acceleration; //Field offset: 0x60
	public float maxSpeed; //Field offset: 0x64
	public float dampingSpeed; //Field offset: 0x68
	public KeyCode fwdKey; //Field offset: 0x6C
	public KeyCode leftKey; //Field offset: 0x70
	public KeyCode backKey; //Field offset: 0x74
	public KeyCode rightKey; //Field offset: 0x78
	private float speedX; //Field offset: 0x7C
	private float speedZ; //Field offset: 0x80

	public MouseLook() { }

	private void FixedUpdate() { }

	private void Start() { }

	private void Update() { }

}

