namespace UnityEngine;

[ExcludeFromPreset]
[NativeHeader(/*Cpp2IL Warning: missing at least one required parameter*/)]
[NativeHeader(/*Cpp2IL Warning: missing at least one required parameter*/)]
[NativeHeader(/*Cpp2IL Warning: missing at least one required parameter*/)]
[NativeType]
public sealed class Sprite : object
{

	public Texture2D associatedAlphaSplitTexture
	{
		[NativeMethod]
		 get { } //Length: 64
	}

	public Vector4 border
	{
		 get { } //Length: 92
	}

	public Bounds bounds
	{
		 get { } //Length: 108
	}

	public bool isUsingPlaceholder
	{
		[NativeMethod]
		 get { } //Length: 64
	}

	public bool packed
	{
		 get { } //Length: 76
	}

	public SpritePackingMode packingMode
	{
		 get { } //Length: 64
	}

	public Vector2 pivot
	{
		[NativeMethod]
		 get { } //Length: 88
	}

	public float pixelsPerUnit
	{
		[NativeMethod]
		 get { } //Length: 64
	}

	public Rect rect
	{
		 get { } //Length: 92
	}

	public Texture2D texture
	{
		 get { } //Length: 64
	}

	public Rect textureRect
	{
		 get { } //Length: 148
	}

	public Vector2 textureRectOffset
	{
		 get { } //Length: 188
	}

	public UInt16[] triangles
	{
		[FreeFunction]
		 get { } //Length: 64
	}

	public Vector2[] uv
	{
		[FreeFunction]
		 get { } //Length: 64
	}

	public Vector2[] vertices
	{
		[FreeFunction]
		 get { } //Length: 64
	}

	[RequiredByNativeCode]
	private Sprite() { }

	[NativeMethod]
	public Texture2D get_associatedAlphaSplitTexture() { }

	public Vector4 get_border() { }

	private void get_border_Injected(out Vector4 ret) { }

	public Bounds get_bounds() { }

	private void get_bounds_Injected(out Bounds ret) { }

	[NativeMethod]
	public bool get_isUsingPlaceholder() { }

	public bool get_packed() { }

	public SpritePackingMode get_packingMode() { }

	[NativeMethod]
	public Vector2 get_pivot() { }

	private void get_pivot_Injected(out Vector2 ret) { }

	[NativeMethod]
	public float get_pixelsPerUnit() { }

	public Rect get_rect() { }

	private void get_rect_Injected(out Rect ret) { }

	public Texture2D get_texture() { }

	public Rect get_textureRect() { }

	public Vector2 get_textureRectOffset() { }

	[FreeFunction]
	public UInt16[] get_triangles() { }

	[FreeFunction]
	public Vector2[] get_uv() { }

	[FreeFunction]
	public Vector2[] get_vertices() { }

	internal Vector4 GetInnerUVs() { }

	private void GetInnerUVs_Injected(out Vector4 ret) { }

	internal Vector4 GetOuterUVs() { }

	private void GetOuterUVs_Injected(out Vector4 ret) { }

	internal int GetPacked() { }

	internal int GetPackingMode() { }

	internal Vector4 GetPadding() { }

	private void GetPadding_Injected(out Vector4 ret) { }

	internal Rect GetTextureRect() { }

	private void GetTextureRect_Injected(out Rect ret) { }

	internal Vector2 GetTextureRectOffset() { }

	private void GetTextureRectOffset_Injected(out Vector2 ret) { }

}

