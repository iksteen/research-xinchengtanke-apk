namespace UnityEngine;

[NativeHeader(/*Cpp2IL Warning: missing at least one required parameter*/)]
[NativeHeader(/*Cpp2IL Warning: missing at least one required parameter*/)]
public class Material : object
{

	public Color color
	{
		 get { } //Length: 140
		 set { } //Length: 184
	}

	public Texture mainTexture
	{
		 get { } //Length: 192
		 set { } //Length: 204
	}

	public Vector2 mainTextureOffset
	{
		 set { } //Length: 160
	}

	public Vector2 mainTextureScale
	{
		 set { } //Length: 160
	}

	public int passCount
	{
		[NativeName(/*Cpp2IL Warning: missing at least one required parameter*/)]
		 get { } //Length: 64
	}

	public int renderQueue
	{
		[NativeName(/*Cpp2IL Warning: missing at least one required parameter*/)]
		 get { } //Length: 64
		[NativeName(/*Cpp2IL Warning: missing at least one required parameter*/)]
		 set { } //Length: 80
	}

	public Shader shader
	{
		 get { } //Length: 64
		 set { } //Length: 80
	}

	public String[] shaderKeywords
	{
		 get { } //Length: 64
		 set { } //Length: 80
	}

	public Material(Shader shader) { }

	[RequiredByNativeCode]
	public Material(Material source) { }

	[EditorBrowsable(/*Cpp2IL Warning: missing at least one required parameter*/)]
	[Obsolete]
	public Material(string contents) { }

	public int ComputeCRC() { }

	[FreeFunction]
	public void CopyPropertiesFromMaterial(Material mat) { }

	[FreeFunction]
	private static void CreateWithMaterial(Material self, Material source) { }

	[FreeFunction]
	private static void CreateWithShader(Material self, Shader shader) { }

	[FreeFunction]
	private static void CreateWithString(Material self) { }

	public void DisableKeyword(string keyword) { }

	public void EnableKeyword(string keyword) { }

	public Color get_color() { }

	public Texture get_mainTexture() { }

	[NativeName(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public int get_passCount() { }

	[NativeName(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public int get_renderQueue() { }

	public Shader get_shader() { }

	public String[] get_shaderKeywords() { }

	public Color GetColor(string name) { }

	public Color GetColor(int nameID) { }

	[NativeName(/*Cpp2IL Warning: missing at least one required parameter*/)]
	private Color GetColorImpl(int name) { }

	private void GetColorImpl_Injected(int name, out Color ret) { }

	[NativeName(/*Cpp2IL Warning: missing at least one required parameter*/)]
	private int GetFirstPropertyNameIdByAttribute(ShaderPropertyFlags attributeFlag) { }

	public float GetFloat(string name) { }

	public float GetFloat(int nameID) { }

	[NativeName(/*Cpp2IL Warning: missing at least one required parameter*/)]
	private float GetFloatImpl(int name) { }

	[FreeFunction]
	private String[] GetShaderKeywords() { }

	public Texture GetTexture(string name) { }

	public Texture GetTexture(int nameID) { }

	[NativeName(/*Cpp2IL Warning: missing at least one required parameter*/)]
	private Texture GetTextureImpl(int name) { }

	public Vector4 GetVector(int nameID) { }

	public bool HasProperty(string name) { }

	[NativeName(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public bool HasProperty(int nameID) { }

	public void set_color(Color value) { }

	public void set_mainTexture(Texture value) { }

	public void set_mainTextureOffset(Vector2 value) { }

	public void set_mainTextureScale(Vector2 value) { }

	[NativeName(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public void set_renderQueue(int value) { }

	public void set_shader(Shader value) { }

	public void set_shaderKeywords(String[] value) { }

	public void SetColor(int nameID, Color value) { }

	public void SetColor(string name, Color value) { }

	[NativeName(/*Cpp2IL Warning: missing at least one required parameter*/)]
	private void SetColorImpl(int name, Color value) { }

	private void SetColorImpl_Injected(int name, ref Color value) { }

	public void SetFloat(int nameID, float value) { }

	public void SetFloat(string name, float value) { }

	[NativeName(/*Cpp2IL Warning: missing at least one required parameter*/)]
	private void SetFloatImpl(int name, float value) { }

	public void SetInt(string name, int value) { }

	public void SetMatrix(string name, Matrix4x4 value) { }

	public void SetMatrix(int nameID, Matrix4x4 value) { }

	[NativeName(/*Cpp2IL Warning: missing at least one required parameter*/)]
	private void SetMatrixImpl(int name, Matrix4x4 value) { }

	private void SetMatrixImpl_Injected(int name, ref Matrix4x4 value) { }

	[FreeFunction]
	private void SetShaderKeywords(String[] names) { }

	public void SetTexture(string name, Texture value) { }

	public void SetTexture(int nameID, Texture value) { }

	[NativeName(/*Cpp2IL Warning: missing at least one required parameter*/)]
	private void SetTextureImpl(int name, Texture value) { }

	public void SetTextureOffset(string name, Vector2 value) { }

	public void SetTextureOffset(int nameID, Vector2 value) { }

	[NativeName(/*Cpp2IL Warning: missing at least one required parameter*/)]
	private void SetTextureOffsetImpl(int name, Vector2 offset) { }

	private void SetTextureOffsetImpl_Injected(int name, ref Vector2 offset) { }

	public void SetTextureScale(string name, Vector2 value) { }

	public void SetTextureScale(int nameID, Vector2 value) { }

	[NativeName(/*Cpp2IL Warning: missing at least one required parameter*/)]
	private void SetTextureScaleImpl(int name, Vector2 scale) { }

	private void SetTextureScaleImpl_Injected(int name, ref Vector2 scale) { }

	public void SetVector(string name, Vector4 value) { }

	public void SetVector(int nameID, Vector4 value) { }

}

