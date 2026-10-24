namespace MG_BlocksEngine2.Block;

[ExecuteInEditMode]
public class BE2_InputFieldDynamicResize : MonoBehaviour
{
	private RectTransform _rectTransform; //Field offset: 0x18
	private TMP_InputField _inputField; //Field offset: 0x20
	public float minWidth; //Field offset: 0x28
	public float widthOffset; //Field offset: 0x2C
	public float maxWidth; //Field offset: 0x30

	public BE2_InputFieldDynamicResize() { }

	private void Awake() { }

	private void OnDisable() { }

	private void OnEnable() { }

	public void Resize(string value) { }

}

