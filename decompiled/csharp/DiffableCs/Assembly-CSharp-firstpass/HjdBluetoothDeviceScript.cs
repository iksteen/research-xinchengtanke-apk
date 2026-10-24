//Type is in global namespace

public class HjdBluetoothDeviceScript : MonoBehaviour
{
	public Action<String> InitializedAction; //Field offset: 0x18
	public Action<String> DeinitializedAction; //Field offset: 0x20
	public Action<String> StartingAdvertAction; //Field offset: 0x28
	public Action<String> StopAdvertAction; //Field offset: 0x30
	public Action<String> StartingScanAction; //Field offset: 0x38
	public Action<String> StopScanAction; //Field offset: 0x40
	public Action<String> ScanDataAction; //Field offset: 0x48

	public HjdBluetoothDeviceScript() { }

	public void OnDeInitReturn(string msg) { }

	public void OnInitReturn(string msg) { }

	public void OnScanData(string msg) { }

	public void OnStartingAdvert(string msg) { }

	public void OnStartingScan(string msg) { }

	public void OnStopAdvert(string msg) { }

	public void OnStopScan(string msg) { }

	private void Start() { }

	private void Update() { }

}

