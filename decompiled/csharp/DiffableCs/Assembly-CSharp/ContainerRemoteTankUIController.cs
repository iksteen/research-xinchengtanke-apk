//Type is in global namespace

public class ContainerRemoteTankUIController : UIControllerBase
{
	[CompilerGenerated]
	private sealed class <>c
	{
		public static readonly <>c <>9; //Field offset: 0x0
		public static Action<String> <>9__21_0; //Field offset: 0x8
		public static Action<String> <>9__21_1; //Field offset: 0x10
		public static Action<String> <>9__21_2; //Field offset: 0x18
		public static Action<String> <>9__21_3; //Field offset: 0x20
		public static Action<String> <>9__29_0; //Field offset: 0x28
		public static Action<String> <>9__29_1; //Field offset: 0x30
		public static Action<String> <>9__29_2; //Field offset: 0x38

		private static <>c() { }

		public <>c() { }

		internal void <OnClickButtonBlesetting>b__21_0(string msg) { }

		internal void <OnClickButtonBlesetting>b__21_1(string msg) { }

		internal void <OnClickButtonBlesetting>b__21_2(string msg) { }

		internal void <OnClickButtonBlesetting>b__21_3(string msg) { }

		internal void <Update>b__29_0(string msg) { }

		internal void <Update>b__29_1(string msg) { }

		internal void <Update>b__29_2(string msg) { }

	}

	private static long timer; //Field offset: 0x0
	private byte machine_type; //Field offset: 0x18
	private byte send_duima_code; //Field offset: 0x19
	private byte send_now_code; //Field offset: 0x1A
	private byte revice_duima_code; //Field offset: 0x1B
	private byte revice_now_code; //Field offset: 0x1C
	private bool isstart_broad; //Field offset: 0x1D
	private Byte[] carbroad_data; //Field offset: 0x20
	private Byte[] send_data; //Field offset: 0x28
	private Byte[] old_data; //Field offset: 0x30
	private int send_lock_timer; //Field offset: 0x38
	private GameObject TankBloodbar; //Field offset: 0x40
	private GameObject TankBloodbar_xue1; //Field offset: 0x48
	private GameObject TankBloodbar_xue2; //Field offset: 0x50
	private GameObject TankBloodbar_xue3; //Field offset: 0x58
	private GameObject TankBloodbar_xue4; //Field offset: 0x60
	private GameObject TankBloodbar_xue5; //Field offset: 0x68
	private int misscode_index; //Field offset: 0x70
	private int send_misscode_timer; //Field offset: 0x74
	private int dapao_key_number; //Field offset: 0x78
	private int dapao_key_lock; //Field offset: 0x7C
	private int send_code_dapao_timer; //Field offset: 0x80
	private int send_code_music_timer; //Field offset: 0x84
	private GameObject ButtonBack; //Field offset: 0x88
	private GameObject ButtonRTankPao; //Field offset: 0x90
	private GameObject ButtonRTankroate; //Field offset: 0x98
	private GameObject xue1; //Field offset: 0xA0
	private GameObject xue2; //Field offset: 0xA8
	private GameObject xue3; //Field offset: 0xB0
	private GameObject xue4; //Field offset: 0xB8
	private GameObject xue5; //Field offset: 0xC0
	private GameObject ButtonToptool; //Field offset: 0xC8

	private static ContainerRemoteTankUIController() { }

	public ContainerRemoteTankUIController() { }

	[CompilerGenerated]
	private void <OnClickButtonBlesetting>b__21_4(string data) { }

	private void Awake() { }

	public long gethaomiao() { }

	private void InitButtonEvent() { }

	public void LoadNewScene(string sceneName) { }

	private void LoadTankBloodbar_data() { }

	private void OnClickButtonBack() { }

	private void OnClickButtonBlesetting() { }

	private void Start() { }

	private void Update() { }

}

