// Namespace: 
internal class <Module> // TypeDefIndex: 3973
{}

// Namespace: 
public class HjdBluetoothDeviceScript : MonoBehaviour // TypeDefIndex: 3974
{
	// Fields
	public Action<string> InitializedAction; // 0x18
	public Action<string> DeinitializedAction; // 0x20
	public Action<string> StartingAdvertAction; // 0x28
	public Action<string> StopAdvertAction; // 0x30
	public Action<string> StartingScanAction; // 0x38
	public Action<string> StopScanAction; // 0x40
	public Action<string> ScanDataAction; // 0x48

	// Methods

	// RVA: 0xDC36B8 Offset: 0xDC36B8 VA: 0xDC36B8
	private void Start() { }

	// RVA: 0xDC36BC Offset: 0xDC36BC VA: 0xDC36BC
	public void OnInitReturn(string msg) { }

	// RVA: 0xDC372C Offset: 0xDC372C VA: 0xDC372C
	public void OnStartingAdvert(string msg) { }

	// RVA: 0xDC379C Offset: 0xDC379C VA: 0xDC379C
	public void OnStopAdvert(string msg) { }

	// RVA: 0xDC380C Offset: 0xDC380C VA: 0xDC380C
	public void OnStartingScan(string msg) { }

	// RVA: 0xDC387C Offset: 0xDC387C VA: 0xDC387C
	public void OnStopScan(string msg) { }

	// RVA: 0xDC38EC Offset: 0xDC38EC VA: 0xDC38EC
	public void OnScanData(string msg) { }

	// RVA: 0xDC395C Offset: 0xDC395C VA: 0xDC395C
	public void OnDeInitReturn(string msg) { }

	// RVA: 0xDC39CC Offset: 0xDC39CC VA: 0xDC39CC
	private void Update() { }

	// RVA: 0xDC39D0 Offset: 0xDC39D0 VA: 0xDC39D0
	public void .ctor() { }
}

// Namespace: 
public class HjdBluetoothHardwareInterface // TypeDefIndex: 3975
{
	// Fields
	private static AndroidJavaObject _android; // 0x0
	private static HjdBluetoothDeviceScript bluetoothDeviceScript; // 0x8
	public static bool BleisRequest; // 0x10
	public static bool BleisInit; // 0x11
	public static byte machine_a; // 0x12
	public static byte machine_b; // 0x13
	public static byte machine_c; // 0x14

	// Methods

	// RVA: 0xDC39D8 Offset: 0xDC39D8 VA: 0xDC39D8
	public static void Initialize(Action<string> action) { }

	// RVA: 0xDC3E54 Offset: 0xDC3E54 VA: 0xDC3E54
	public static void DeInitialize(Action<string> action) { }

	// RVA: 0xDC4054 Offset: 0xDC4054 VA: 0xDC4054
	public static void StartAdvertising(Action<string> action, byte[] data) { }

	// RVA: 0xDC423C Offset: 0xDC423C VA: 0xDC423C
	public static void StopAdvertising(Action<string> action) { }

	// RVA: 0xDC443C Offset: 0xDC443C VA: 0xDC443C
	public static void StartingScanToGetData(Action<string> action, Action<string> dataaction) { }

	// RVA: 0xDC465C Offset: 0xDC465C VA: 0xDC465C
	public static void StopScanToGetData(Action<string> action) { }

	// RVA: 0xDC41DC Offset: 0xDC41DC VA: 0xDC41DC
	public static byte[] cal_AndroidBle_sumdata(byte[] bledata) { }

	// RVA: 0xDC485C Offset: 0xDC485C VA: 0xDC485C
	public static bool calDataIsTrue(byte[] codes, byte machine_type, byte revice_duima, byte machine_a, byte machine_b, byte machine_c, byte[] resultdata) { }

	// RVA: 0xDC4940 Offset: 0xDC4940 VA: 0xDC4940
	public static int bleuseNumber() { }

	// RVA: 0xDC4948 Offset: 0xDC4948 VA: 0xDC4948
	public void .ctor() { }

	// RVA: 0xDC4950 Offset: 0xDC4950 VA: 0xDC4950
	private static void .cctor() { }
}

