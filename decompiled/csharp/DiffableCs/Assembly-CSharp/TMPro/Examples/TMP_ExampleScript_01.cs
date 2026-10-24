namespace TMPro.Examples;

public class TMP_ExampleScript_01 : MonoBehaviour
{
	internal enum objectType
	{
		TextMeshPro = 0,
		TextMeshProUGUI = 1,
	}

	private const string k_label = "The count is <#0080ff>{0}</color>"; //Field offset: 0x0
	public objectType ObjectType; //Field offset: 0x18
	public bool isStatic; //Field offset: 0x1C
	private TMP_Text m_text; //Field offset: 0x20
	private int count; //Field offset: 0x28

	public TMP_ExampleScript_01() { }

	private void Awake() { }

	private void Update() { }

}

