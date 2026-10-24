namespace MG_BlocksEngine2.Utils;

public class BE2_Text
{
	private Transform _transform; //Field offset: 0x10
	private Text _textComponent; //Field offset: 0x18
	private TMP_Text _tmpComponent; //Field offset: 0x20
	private bool _isNull; //Field offset: 0x28

	public bool isNull
	{
		 get { } //Length: 8
	}

	public bool raycastTarget
	{
		 get { } //Length: 216
		 set { } //Length: 220
	}

	public string text
	{
		 get { } //Length: 252
		 set { } //Length: 236
	}

	public BE2_Text(Transform transform) { }

	public bool get_isNull() { }

	public bool get_raycastTarget() { }

	public string get_text() { }

	public static BE2_Text GetBE2Text(Transform transform) { }

	public static BE2_Text GetBE2TextInChildren(Transform transform) { }

	public static BE2_Text[] GetBE2TextsInChildren(Transform transform) { }

	public T GetComponent() { }

	private void Init() { }

	public void set_raycastTarget(bool value) { }

	public void set_text(string value) { }

}

