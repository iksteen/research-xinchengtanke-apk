namespace UnityEngine;

[NativeHeader(/*Cpp2IL Warning: missing at least one required parameter*/)]
[NativeHeader(/*Cpp2IL Warning: missing at least one required parameter*/)]
[UsedByNativeCode]
public class Texture : object
{
	public static readonly int GenerateAllMips; //Field offset: 0x0

	internal ColorSpace activeTextureColorSpace
	{
		[VisibleToOtherModules]
		internal get { } //Length: 76
	}

	public FilterMode filterMode
	{
		 set { } //Length: 80
	}

	public override int height
	{
		 get { } //Length: 64
		 set { } //Length: 64
	}

	public override bool isReadable
	{
		 get { } //Length: 64
	}

	public Vector2 texelSize
	{
		[NativeName(/*Cpp2IL Warning: missing at least one required parameter*/)]
		 get { } //Length: 88
	}

	public override int width
	{
		 get { } //Length: 64
		 set { } //Length: 64
	}

	public TextureWrapMode wrapMode
	{
		[NativeName(/*Cpp2IL Warning: missing at least one required parameter*/)]
		 get { } //Length: 64
		 set { } //Length: 80
	}

	private static Texture() { }

	protected Texture() { }

	internal UnityException CreateNonReadableException(Texture t) { }

	[VisibleToOtherModules]
	internal ColorSpace get_activeTextureColorSpace() { }

	public override int get_height() { }

	public override bool get_isReadable() { }

	[NativeName(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public Vector2 get_texelSize() { }

	private void get_texelSize_Injected(out Vector2 ret) { }

	public override int get_width() { }

	[NativeName(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public TextureWrapMode get_wrapMode() { }

	private int GetScriptHeight() { }

	private int GetScriptWidth() { }

	[NativeMethod]
	private int Internal_GetActiveTextureColorSpace() { }

	public void set_filterMode(FilterMode value) { }

	public override void set_height(int value) { }

	public override void set_width(int value) { }

	public void set_wrapMode(TextureWrapMode value) { }

	internal bool ValidateFormat(TextureFormat format) { }

	internal bool ValidateFormat(GraphicsFormat format, FormatUsage usage) { }

}

