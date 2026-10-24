namespace UnityEngine;

[NativeHeader(/*Cpp2IL Warning: missing at least one required parameter*/)]
[NativeHeader(/*Cpp2IL Warning: missing at least one required parameter*/)]
[RequireComponent(/*Cpp2IL Warning: missing at least one required parameter*/)]
[RequireComponent(/*Cpp2IL Warning: missing at least one required parameter*/)]
public sealed class Light : Behaviour
{
	private int m_BakedIndex; //Field offset: 0x18

	public LightBakingOutput bakingOutput
	{
		 get { } //Length: 116
	}

	public float bounceIntensity
	{
		 get { } //Length: 64
	}

	public Color color
	{
		 get { } //Length: 92
		 set { } //Length: 88
	}

	public Texture cookie
	{
		 get { } //Length: 64
	}

	public float cookieSize
	{
		 get { } //Length: 64
	}

	public float intensity
	{
		 get { } //Length: 64
		 set { } //Length: 80
	}

	public float range
	{
		 get { } //Length: 64
	}

	public LightShadows shadows
	{
		[NativeMethod]
		 get { } //Length: 64
	}

	public float spotAngle
	{
		 get { } //Length: 64
	}

	[NativeProperty]
	public LightType type
	{
		 get { } //Length: 64
	}

	public LightBakingOutput get_bakingOutput() { }

	private void get_bakingOutput_Injected(out LightBakingOutput ret) { }

	public float get_bounceIntensity() { }

	public Color get_color() { }

	private void get_color_Injected(out Color ret) { }

	public Texture get_cookie() { }

	public float get_cookieSize() { }

	public float get_intensity() { }

	public float get_range() { }

	[NativeMethod]
	public LightShadows get_shadows() { }

	public float get_spotAngle() { }

	public LightType get_type() { }

	public void set_color(Color value) { }

	private void set_color_Injected(ref Color value) { }

	public void set_intensity(float value) { }

}

