namespace TMPro.Examples;

public class ObjectSpin : MonoBehaviour
{
	internal enum MotionType
	{
		Rotation = 0,
		BackAndForth = 1,
		Translation = 2,
	}

	public float SpinSpeed; //Field offset: 0x18
	public int RotationRange; //Field offset: 0x1C
	private Transform m_transform; //Field offset: 0x20
	private float m_time; //Field offset: 0x28
	private Vector3 m_prevPOS; //Field offset: 0x2C
	private Vector3 m_initial_Rotation; //Field offset: 0x38
	private Vector3 m_initial_Position; //Field offset: 0x44
	private Color32 m_lightColor; //Field offset: 0x50
	private int frames; //Field offset: 0x54
	public MotionType Motion; //Field offset: 0x58

	public ObjectSpin() { }

	private void Awake() { }

	private void Update() { }

}

