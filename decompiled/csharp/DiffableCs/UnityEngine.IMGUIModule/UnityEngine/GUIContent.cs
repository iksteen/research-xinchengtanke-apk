namespace UnityEngine;

[NativeHeader(/*Cpp2IL Warning: missing at least one required parameter*/)]
[RequiredByNativeCode]
public class GUIContent
{
	private static readonly GUIContent s_Text; //Field offset: 0x0
	private static readonly GUIContent s_Image; //Field offset: 0x8
	private static readonly GUIContent s_TextImage; //Field offset: 0x10
	public static GUIContent none; //Field offset: 0x18
	[SerializeField]
	private string m_Text; //Field offset: 0x10
	[SerializeField]
	private Texture m_Image; //Field offset: 0x18
	[SerializeField]
	private string m_Tooltip; //Field offset: 0x20

	public Texture image
	{
		 set { } //Length: 8
	}

	public string text
	{
		 get { } //Length: 8
		 set { } //Length: 8
	}

	public string tooltip
	{
		 get { } //Length: 8
		 set { } //Length: 8
	}

	private static GUIContent() { }

	public GUIContent() { }

	public GUIContent(string text) { }

	public GUIContent(string text, Texture image, string tooltip) { }

	internal static void ClearStaticCache() { }

	public string get_text() { }

	public string get_tooltip() { }

	public void set_image(Texture value) { }

	public void set_text(string value) { }

	public void set_tooltip(string value) { }

	internal static GUIContent Temp(string t) { }

}

