namespace MG_BlocksEngine2.Utils;

public class BE2_InputField
{
	private Transform _transform; //Field offset: 0x10
	private InputField _legacyComponent; //Field offset: 0x18
	private TMP_InputField _tmpComponent; //Field offset: 0x20
	private bool _isNull; //Field offset: 0x28

	public bool enabled
	{
		 get { } //Length: 208
		 set { } //Length: 212
	}

	public bool isNull
	{
		 get { } //Length: 8
	}

	public UnityEvent<String> onEndEdit
	{
		 get { } //Length: 204
	}

	public UnityEvent<String> onValueChanged
	{
		 get { } //Length: 204
	}

	public float preferredWidth
	{
		 get { } //Length: 232
	}

	public string text
	{
		 get { } //Length: 224
		 set { } //Length: 236
	}

	public BE2_InputField(Transform transform) { }

	public bool get_enabled() { }

	public bool get_isNull() { }

	public UnityEvent<String> get_onEndEdit() { }

	public UnityEvent<String> get_onValueChanged() { }

	public float get_preferredWidth() { }

	public string get_text() { }

	public static BE2_InputField GetBE2Component(Transform transform) { }

	public static BE2_InputField GetBE2ComponentInChildren(Transform transform) { }

	public static BE2_InputField[] GetBE2ComponentsInChildren(Transform transform) { }

	private void Init() { }

	public void set_enabled(bool value) { }

	public void set_text(string value) { }

}

