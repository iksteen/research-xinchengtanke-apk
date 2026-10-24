//Type is in global namespace

public class HjdBluetoothHardwareInterface
{
	private static AndroidJavaObject _android; //Field offset: 0x0
	private static HjdBluetoothDeviceScript bluetoothDeviceScript; //Field offset: 0x8
	public static bool BleisRequest; //Field offset: 0x10
	public static bool BleisInit; //Field offset: 0x11
	public static byte machine_a; //Field offset: 0x12
	public static byte machine_b; //Field offset: 0x13
	public static byte machine_c; //Field offset: 0x14

	private static HjdBluetoothHardwareInterface() { }

	public HjdBluetoothHardwareInterface() { }

	public static int bleuseNumber() { }

	public static Byte[] cal_AndroidBle_sumdata(Byte[] bledata) { }

	public static bool calDataIsTrue(Byte[] codes, byte machine_type, byte revice_duima, byte machine_a, byte machine_b, byte machine_c, Byte[] resultdata) { }

	public static void DeInitialize(Action<String> action) { }

	public static void Initialize(Action<String> action) { }

	public static void StartAdvertising(Action<String> action, Byte[] data) { }

	public static void StartingScanToGetData(Action<String> action, Action<String> dataaction) { }

	public static void StopAdvertising(Action<String> action) { }

	public static void StopScanToGetData(Action<String> action) { }

}

