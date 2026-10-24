namespace TMPro.Examples;

public class TMP_UiFrameRateCounter : MonoBehaviour
{
	internal enum FpsCounterAnchorPositions
	{
		TopLeft = 0,
		BottomLeft = 1,
		TopRight = 2,
		BottomRight = 3,
	}

	private const string fpsLabel = "{0:2}</color> <#8080ff>FPS 
<#FF8000>{1:2} <#8080ff>MS"; //Field offset: 0x0
	public float UpdateInterval; //Field offset: 0x18
	private float m_LastInterval; //Field offset: 0x1C
	private int m_Frames; //Field offset: 0x20
	public FpsCounterAnchorPositions AnchorPosition; //Field offset: 0x24
	private string htmlColorTag; //Field offset: 0x28
	private TextMeshProUGUI m_TextMeshPro; //Field offset: 0x30
	private RectTransform m_frameCounter_transform; //Field offset: 0x38
	private FpsCounterAnchorPositions last_AnchorPosition; //Field offset: 0x40

	public TMP_UiFrameRateCounter() { }

	private void Awake() { }

	private void Set_FrameCounter_Position(FpsCounterAnchorPositions anchor_position) { }

	private void Start() { }

	private void Update() { }

}

