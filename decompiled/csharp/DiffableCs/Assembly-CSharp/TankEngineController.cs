//Type is in global namespace

public class TankEngineController : MonoBehaviour
{
	private static long timer; //Field offset: 0x0
	private WheelCollider FL; //Field offset: 0x18
	private WheelCollider FR; //Field offset: 0x20
	private WheelCollider FL1; //Field offset: 0x28
	private WheelCollider FR1; //Field offset: 0x30
	private WheelCollider FL2; //Field offset: 0x38
	private WheelCollider FR2; //Field offset: 0x40
	private WheelCollider BL; //Field offset: 0x48
	private WheelCollider BR; //Field offset: 0x50
	private GameObject ButtonRTankroate; //Field offset: 0x58
	private GameObject tankobj; //Field offset: 0x60
	private GameObject TankPaotai; //Field offset: 0x68
	private float max_torque; //Field offset: 0x70
	private GameObject leftJoystick; //Field offset: 0x78
	private GameObject rightJoystick; //Field offset: 0x80
	private bool roate_type; //Field offset: 0x88
	private int roate_key_number; //Field offset: 0x8C
	private GameObject ButtonRTankPao; //Field offset: 0x90
	private GameObject paoshell; //Field offset: 0x98
	public GameObject paoobject; //Field offset: 0xA0
	private int Shooting_task_state; //Field offset: 0xA8
	private int Shooting_task_timer; //Field offset: 0xAC
	private int Shooting_task_lock_timer; //Field offset: 0xB0

	private static TankEngineController() { }

	public TankEngineController() { }

	public void CarbrakeActive(bool isBraking) { }

	public void doSomething() { }

	public long gethaomiao() { }

	private void OnClickButtonRTankPao() { }

	private void Start() { }

	private void Update() { }

}

