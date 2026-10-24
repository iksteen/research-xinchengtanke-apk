namespace MG_BlocksEngine2.Block;

[ExecuteInEditMode]
public class BE2_DropdownDynamicResize : MonoBehaviour
{
	private RectTransform _rectTransform; //Field offset: 0x18
	private TMP_Dropdown _dropdown; //Field offset: 0x20
	private float _minWidth; //Field offset: 0x28
	private float _offset; //Field offset: 0x2C
	public float maxWidth; //Field offset: 0x30

	public BE2_DropdownDynamicResize() { }

	private void Awake() { }

	private void OnDisable() { }

	private void OnEnable() { }

	public void Resize(int value) { }

	private void Start() { }

}

