//Type is in global namespace

public class PanelMainUIController : UIControllerBase
{
	internal enum UILayer
	{
		L_Background = 1,
		L_Buttom = 2,
		L_PopupWindow = 3,
		L_PopupTip = 4,
		L_Top = 5,
	}

	private static PanelMainUIController instance; //Field offset: 0x0
	private static readonly object lockHelper; //Field offset: 0x8
	public static string login_load; //Field offset: 0x10
	public static Byte[] tankeaddr; //Field offset: 0x18
	public static bool isconnect; //Field offset: 0x20
	public static string active_programe_command; //Field offset: 0x28
	public static string sysdoctype; //Field offset: 0x30
	public static bool startMovement; //Field offset: 0x38
	public static byte active_route_cmd; //Field offset: 0x39
	public static float correct_x; //Field offset: 0x3C
	public static float correct_y; //Field offset: 0x40
	public static int gravity_rate_value; //Field offset: 0x44
	public static float route_rate_value; //Field offset: 0x48
	public static int active_leftright_type; //Field offset: 0x4C
	public static int active_updown_type; //Field offset: 0x50
	public static string device_select_type; //Field offset: 0x58
	public static string car_select_type; //Field offset: 0x60
	public static string tank_select_type; //Field offset: 0x68
	public static string car_scene_type; //Field offset: 0x70
	public static string tank_scene_type; //Field offset: 0x78
	public static string tank_jumpto_state; //Field offset: 0x80
	public static string car_jumpto_state; //Field offset: 0x88
	public static bool scapescreen_state; //Field offset: 0x90
	public static float tank_active_left_rate; //Field offset: 0x94
	public static float tank_active_right_rate; //Field offset: 0x98
	public static float car_active_left_rate; //Field offset: 0x9C
	public static float car_active_right_rate; //Field offset: 0xA0
	public static int tank_response_randon_data; //Field offset: 0xA4
	public static int tank_blood_volume_data; //Field offset: 0xA8
	public static float tank_rotation_x; //Field offset: 0xAC
	public static float tank_rotation_y; //Field offset: 0xB0
	public static float car_rotation_x; //Field offset: 0xB4
	public static float car_rotation_y; //Field offset: 0xB8
	public static bool isenglish; //Field offset: 0xBC
	public static string initble_str; //Field offset: 0xC0
	public static string scanble_str; //Field offset: 0xC8
	public static string scantankeble_str; //Field offset: 0xD0
	public static string initble_errostr; //Field offset: 0xD8
	public static string scanble_errostr; //Field offset: 0xE0
	public static string findcar_str; //Field offset: 0xE8
	public static string findtank_str; //Field offset: 0xF0
	public static string ble_errostr; //Field offset: 0xF8
	public GameObject PanelBackground; //Field offset: 0x18
	public Vector3 UIOriginalPositionPanelBackground; //Field offset: 0x20
	public GameObject PanelButtom; //Field offset: 0x30
	public Vector3 UIOriginalPositionPanelButtom; //Field offset: 0x38
	public GameObject PanelPopupTip; //Field offset: 0x48
	public Vector3 UIOriginalPositionPanelPopupTip; //Field offset: 0x50
	public GameObject PanelPopupWindow; //Field offset: 0x60
	public Vector3 UIOriginalPositionPanelPopupWindow; //Field offset: 0x68
	public GameObject PanelTop; //Field offset: 0x78
	public Vector3 UIOriginalPositionPanelTop; //Field offset: 0x80
	public GameObject PanelDebug; //Field offset: 0x90
	public Vector3 UIOriginalPositionPanelDebug; //Field offset: 0x98

	public static PanelMainUIController Instance
	{
		 get { } //Length: 976
	}

	private static PanelMainUIController() { }

	public PanelMainUIController() { }

	public GameObject AddUI(UILayer layer, string uiName) { }

	private void Awake() { }

	public void CleanAllUI() { }

	public void ClearNowScene() { }

	public void EnterCompayintro() { }

	public void EnterLoginScreen(string nscreen) { }

	public void EnterOperdoc() { }

	public void EnterRcForest() { }

	public void EnterRcIndoor() { }

	public void EnterRcSnow() { }

	public void EnterRcTrack() { }

	public void EnterRcTrackCeshi() { }

	public void EnterRemoteCar() { }

	public void EnterRemoteHandCar() { }

	public void EnterRemoteHandTank() { }

	public void EnterRemoteTank() { }

	public void EnterRemoveBeforeLogin() { }

	public void EnterRemoveBeforeSelect() { }

	public void EnterRemoveCarGravity() { }

	public void EnterRemoveCarPrograme() { }

	public void EnterRemoveCarRoute() { }

	public void EnterRemoveCust(string custname) { }

	public void EnterRemoveTankGravity() { }

	public void EnterResultDevice() { }

	public void EnterYinsi() { }

	public static PanelMainUIController get_Instance() { }

	public string GetDeviceUniqueIdentifier() { }

	public GameObject GetLayerContainer(UILayer ul) { }

	private void OnDestroy() { }

	private void Start() { }

	public void SwitchLandscapescreen() { }

	public void SwitchVerticalscreen() { }

	private void Update() { }

}

