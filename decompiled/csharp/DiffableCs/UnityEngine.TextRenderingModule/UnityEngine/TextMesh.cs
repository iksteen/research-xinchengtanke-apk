namespace UnityEngine;

[NativeClass(/*Cpp2IL Warning: missing at least one required parameter*/)]
[NativeHeader(/*Cpp2IL Warning: missing at least one required parameter*/)]
[RequireComponent(/*Cpp2IL Warning: missing at least one required parameter*/)]
public sealed class TextMesh : Component
{

	public TextAnchor anchor
	{
		 set { } //Length: 80
	}

	public Color color
	{
		 get { } //Length: 92
		 set { } //Length: 88
	}

	public Font font
	{
		 get { } //Length: 64
		 set { } //Length: 80
	}

	public int fontSize
	{
		 set { } //Length: 80
	}

	public string text
	{
		 set { } //Length: 80
	}

	public Color get_color() { }

	private void get_color_Injected(out Color ret) { }

	public Font get_font() { }

	public void set_anchor(TextAnchor value) { }

	public void set_color(Color value) { }

	private void set_color_Injected(ref Color value) { }

	public void set_font(Font value) { }

	public void set_fontSize(int value) { }

	public void set_text(string value) { }

}

