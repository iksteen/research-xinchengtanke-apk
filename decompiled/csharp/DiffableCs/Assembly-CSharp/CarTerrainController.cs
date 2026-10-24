//Type is in global namespace

public class CarTerrainController : MonoBehaviour
{
	public Transform _player; //Field offset: 0x18
	public Transform _terrParent; //Field offset: 0x20
	public GameObject TerrainHengyi1; //Field offset: 0x28
	public GameObject TerrainHengyi2; //Field offset: 0x30
	public GameObject TerrainHengyi3; //Field offset: 0x38
	public GameObject TerrainHengyi4; //Field offset: 0x40
	public Dictionary<Int32, GameObject> _terrainLoaded; //Field offset: 0x48
	public int oldiindex; //Field offset: 0x50

	public CarTerrainController() { }

	private void Awake() { }

	private GameObject CreateTerrain(int iindex) { }

	private void GetTerrain(int getindex) { }

	private void LoadTerrain(int nowiindex) { }

	private void Start() { }

	private void Update() { }

}

