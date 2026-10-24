//Type is in global namespace

public class ContainerRemoveTankGravityUIController : UIControllerBase
{
	[CompilerGenerated]
	private sealed class <>c
	{
		public static readonly <>c <>9; //Field offset: 0x0
		public static Action<String> <>9__25_0; //Field offset: 0x8
		public static Action<String> <>9__25_1; //Field offset: 0x10
		public static Action<String> <>9__25_2; //Field offset: 0x18
		public static Action<String> <>9__25_3; //Field offset: 0x20
		public static Action<String> <>9__33_0; //Field offset: 0x28
		public static Action<String> <>9__33_1; //Field offset: 0x30
		public static Action<String> <>9__33_2; //Field offset: 0x38

		private static <>c() { }

		public <>c() { }

		internal void <OnClickButtonBlesetting>b__25_0(string msg) { }

		internal void <OnClickButtonBlesetting>b__25_1(string msg) { }

		internal void <OnClickButtonBlesetting>b__25_2(string msg) { }

		internal void <OnClickButtonBlesetting>b__25_3(string msg) { }

		internal void <Update>b__33_0(string msg) { }

		internal void <Update>b__33_1(string msg) { }

		internal void <Update>b__33_2(string msg) { }

	}

	private static long timer; //Field offset: 0x0
	private const float lowPassFilterFactor = 0.2; //Field offset: 0x0
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
	private bool gyro_enable_state; //Field offset: 0x3C
	private UISprite ButtonToptool_bg; //Field offset: 0x40
	private GameObject ButtonGravityStart; //Field offset: 0x48
	private GameObject ButtonGravityStartbg; //Field offset: 0x50
	private GameObject ButtonGravityDapao; //Field offset: 0x58
	private GameObject gyrohandle; //Field offset: 0x60
	private Gyroscope go; //Field offset: 0x68
	private bool gyinfo; //Field offset: 0x70
	private int misscode_index; //Field offset: 0x74
	private int send_misscode_timer; //Field offset: 0x78
	private int correct_key_number; //Field offset: 0x7C
	private int dapao_key_number; //Field offset: 0x80
	private int dapao_key_lock; //Field offset: 0x84
	private int send_code_dapao_timer; //Field offset: 0x88
	private int send_code_music_timer; //Field offset: 0x8C
	private GameObject ButtonToptool; //Field offset: 0x90
	private GameObject ButtonResult; //Field offset: 0x98
	private UIButton ButtonGravityCorrect; //Field offset: 0xA0

	private static ContainerRemoveTankGravityUIController() { }

	public ContainerRemoveTankGravityUIController() { }

	[CompilerGenerated]
	private void <OnClickButtonBlesetting>b__25_4(string data) { }

	private void Awake() { }

	public long gethaomiao() { }

	private void InitButtonEvent() { }

	public void LoadNewScene(string sceneName) { }

	private void OnClickButtonBlesetting() { }

	private void OnClickButtonGravityStart() { }

	private void OnClickButtonResult() { }

	private void Start() { }

	private void Update() { }

}

