//Type is in global namespace

public class HandCarEngineController : MonoBehaviour
{
	private static long timer; //Field offset: 0x0
	private WheelCollider FL; //Field offset: 0x18
	private WheelCollider FR; //Field offset: 0x20
	private WheelCollider BL; //Field offset: 0x28
	private WheelCollider BR; //Field offset: 0x30
	private GameObject carobj; //Field offset: 0x38
	private float max_torque; //Field offset: 0x40
	private float max_angle; //Field offset: 0x44
	private int now_key_number; //Field offset: 0x48
	private int shache_key_number; //Field offset: 0x4C
	private int now_key_type; //Field offset: 0x50
	private GameObject HCar_Joystick; //Field offset: 0x58

	private static HandCarEngineController() { }

	public HandCarEngineController() { }

	public void CarbrakeActive(bool isBraking) { }

	public void doSomething() { }

	public long gethaomiao() { }

	private void Start() { }

	private void Update() { }

}

