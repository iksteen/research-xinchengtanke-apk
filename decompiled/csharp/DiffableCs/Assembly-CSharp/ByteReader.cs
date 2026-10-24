//Type is in global namespace

public class ByteReader
{
	private static BetterList<String> mTemp; //Field offset: 0x0
	private Byte[] mBuffer; //Field offset: 0x10
	private int mOffset; //Field offset: 0x18

	public bool canRead
	{
		 get { } //Length: 36
	}

	private static ByteReader() { }

	public ByteReader(Byte[] bytes) { }

	public ByteReader(TextAsset asset) { }

	public bool get_canRead() { }

	public static ByteReader Open(string path) { }

	public BetterList<String> ReadCSV() { }

	public Dictionary<String, String> ReadDictionary() { }

	private static string ReadLine(Byte[] buffer, int start, int count) { }

	public string ReadLine() { }

	public string ReadLine(bool skipEmptyLines) { }

}

