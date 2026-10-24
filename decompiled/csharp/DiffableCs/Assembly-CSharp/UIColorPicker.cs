//Type is in global namespace

[RequireComponent(/*Cpp2IL Warning: missing at least one required parameter*/)]
public class UIColorPicker : MonoBehaviour
{
	public static UIColorPicker current; //Field offset: 0x0
	private static AnimationCurve mRed; //Field offset: 0x8
	private static AnimationCurve mGreen; //Field offset: 0x10
	private static AnimationCurve mBlue; //Field offset: 0x18
	public Color value; //Field offset: 0x18
	public UIWidget selectionWidget; //Field offset: 0x28
	public List<EventDelegate> onChange; //Field offset: 0x30
	private Transform mTrans; //Field offset: 0x38
	private UITexture mUITex; //Field offset: 0x40
	private Texture2D mTex; //Field offset: 0x48
	private UICamera mCam; //Field offset: 0x50
	private Vector2 mPos; //Field offset: 0x58
	private int mWidth; //Field offset: 0x60
	private int mHeight; //Field offset: 0x64

	public UIColorPicker() { }

	private void OnDestroy() { }

	private void OnDrag(Vector2 delta) { }

	private void OnPan(Vector2 delta) { }

	private void OnPress(bool pressed) { }

	private void Sample() { }

	public static Color Sample(float x, float y) { }

	public void Select(Vector2 v) { }

	public Vector2 Select(Color c) { }

	private void Start() { }

}

