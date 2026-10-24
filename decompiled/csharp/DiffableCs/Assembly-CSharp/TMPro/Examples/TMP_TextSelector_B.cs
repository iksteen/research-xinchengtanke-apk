namespace TMPro.Examples;

public class TMP_TextSelector_B : MonoBehaviour, IPointerEnterHandler, IEventSystemHandler, IPointerExitHandler, IPointerClickHandler, IPointerUpHandler
{
	private const string k_LinkText = "You have selected link <#ffff00>"; //Field offset: 0x0
	private const string k_WordText = "Word Index: <#ffff00>"; //Field offset: 0x0
	public RectTransform TextPopup_Prefab_01; //Field offset: 0x18
	private RectTransform m_TextPopup_RectTransform; //Field offset: 0x20
	private TextMeshProUGUI m_TextPopup_TMPComponent; //Field offset: 0x28
	private TextMeshProUGUI m_TextMeshPro; //Field offset: 0x30
	private Canvas m_Canvas; //Field offset: 0x38
	private Camera m_Camera; //Field offset: 0x40
	private bool isHoveringObject; //Field offset: 0x48
	private int m_selectedWord; //Field offset: 0x4C
	private int m_selectedLink; //Field offset: 0x50
	private int m_lastIndex; //Field offset: 0x54
	private Matrix4x4 m_matrix; //Field offset: 0x58
	private TMP_MeshInfo[] m_cachedMeshInfoVertexData; //Field offset: 0x98

	public TMP_TextSelector_B() { }

	private void Awake() { }

	private void LateUpdate() { }

	private void ON_TEXT_CHANGED(object obj) { }

	private void OnDisable() { }

	private void OnEnable() { }

	public override void OnPointerClick(PointerEventData eventData) { }

	public override void OnPointerEnter(PointerEventData eventData) { }

	public override void OnPointerExit(PointerEventData eventData) { }

	public override void OnPointerUp(PointerEventData eventData) { }

	private void RestoreCachedVertexAttributes(int index) { }

}

