namespace MG_BlocksEngine2.Utils;

public class BE2_Dropdown
{
	[CompilerGenerated]
	private sealed class <>c__DisplayClass16_0
	{
		public string text; //Field offset: 0x10

		public <>c__DisplayClass16_0() { }

		internal bool <GetIndexOf>b__0(OptionData option) { }

		internal bool <GetIndexOf>b__1(OptionData option) { }

	}

	private Transform _transform; //Field offset: 0x10
	private Dropdown _legacyComponent; //Field offset: 0x18
	private TMP_Dropdown _tmpComponent; //Field offset: 0x20
	private bool _isNull; //Field offset: 0x28

	public float captionTextpreferredWidth
	{
		 get { } //Length: 248
	}

	public bool enabled
	{
		 get { } //Length: 208
		 set { } //Length: 212
	}

	public bool isNull
	{
		 get { } //Length: 8
	}

	public UnityEvent<Int32> onValueChanged
	{
		 get { } //Length: 204
	}

	public int value
	{
		 get { } //Length: 208
		 set { } //Length: 236
	}

	public BE2_Dropdown(Transform transform) { }

	public void AddOption(string option) { }

	public void ClearOptions() { }

	public float get_captionTextpreferredWidth() { }

	public bool get_enabled() { }

	public bool get_isNull() { }

	public UnityEvent<Int32> get_onValueChanged() { }

	public int get_value() { }

	public static BE2_Dropdown GetBE2Component(Transform transform) { }

	public static BE2_Dropdown GetBE2ComponentInChildren(Transform transform) { }

	public static BE2_Dropdown[] GetBE2ComponentsInChildren(Transform transform) { }

	public int GetIndexOf(string text) { }

	public int GetOptionsCount() { }

	public string GetOptionTextAtIndex(int index) { }

	public string GetSelectedOptionText() { }

	private void Init() { }

	public void RefreshShownValue() { }

	public void set_enabled(bool value) { }

	public void set_value(int value) { }

}

