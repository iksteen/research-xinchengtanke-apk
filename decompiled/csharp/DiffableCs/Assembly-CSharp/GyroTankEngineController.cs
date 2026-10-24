//Type is in global namespace

public class GyroTankEngineController : MonoBehaviour
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
	private GameObject tankobj; //Field offset: 0x58
	private float max_torque; //Field offset: 0x60

	private static GyroTankEngineController() { }

	public GyroTankEngineController() { }

	public void CarbrakeActive(bool isBraking) { }

	public void doSomething() { }

	public long gethaomiao() { }

	private void Start() { }

	private void Update() { }

}

