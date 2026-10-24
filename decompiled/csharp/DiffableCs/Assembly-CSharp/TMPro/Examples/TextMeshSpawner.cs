namespace TMPro.Examples;

public class TextMeshSpawner : MonoBehaviour
{
	public int SpawnType; //Field offset: 0x18
	public int NumberOfNPC; //Field offset: 0x1C
	public Font TheFont; //Field offset: 0x20
	private TextMeshProFloatingText floatingText_Script; //Field offset: 0x28

	public TextMeshSpawner() { }

	private void Awake() { }

	private void Start() { }

}

