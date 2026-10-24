namespace TMPro.Examples;

public class Benchmark03 : MonoBehaviour
{
	internal enum BenchmarkType
	{
		TMP_SDF_MOBILE = 0,
		TMP_SDF__MOBILE_SSD = 1,
		TMP_SDF = 2,
		TMP_BITMAP_MOBILE = 3,
		TEXTMESH_BITMAP = 4,
	}

	public int NumberOfSamples; //Field offset: 0x18
	public BenchmarkType Benchmark; //Field offset: 0x1C
	public Font SourceFont; //Field offset: 0x20

	public Benchmark03() { }

	private void Awake() { }

	private void Start() { }

}

