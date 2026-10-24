namespace UnityEngine;

[NativeClass(/*Cpp2IL Warning: missing at least one required parameter*/)]
[NativeHeader(/*Cpp2IL Warning: missing at least one required parameter*/)]
[NativeHeader(/*Cpp2IL Warning: missing at least one required parameter*/)]
[StaticAccessor(/*Cpp2IL Warning: missing at least one required parameter*/)]
public sealed class Font : object
{
	internal sealed class FontTextureRebuildCallback : MulticastDelegate
	{

		public FontTextureRebuildCallback(object object, IntPtr method) { }

		public override IAsyncResult BeginInvoke(AsyncCallback callback, object object) { }

		public override void EndInvoke(IAsyncResult result) { }

		public override void Invoke() { }

	}

	[CompilerGenerated]
	[DebuggerBrowsable(/*Cpp2IL Warning: missing at least one required parameter*/)]
	private static Action<Font> textureRebuilt; //Field offset: 0x0
	[CompilerGenerated]
	[DebuggerBrowsable(/*Cpp2IL Warning: missing at least one required parameter*/)]
	private FontTextureRebuildCallback m_FontTextureRebuildCallback; //Field offset: 0x18

	public static event Action<Font> textureRebuilt
	{
		[CompilerGenerated]
		 add { } //Length: 188
		[CompilerGenerated]
		 remove { } //Length: 188
	}

	public bool dynamic
	{
		 get { } //Length: 64
	}

	public String[] fontNames
	{
		 get { } //Length: 64
	}

	public int fontSize
	{
		 get { } //Length: 64
	}

	public Material material
	{
		 get { } //Length: 64
	}

	public Font() { }

	[CompilerGenerated]
	public static void add_textureRebuilt(Action<Font> value) { }

	public bool get_dynamic() { }

	public String[] get_fontNames() { }

	public int get_fontSize() { }

	public Material get_material() { }

	[FreeFunction]
	public bool GetCharacterInfo(char ch, out CharacterInfo info, int size, FontStyle style) { }

	public bool HasCharacter(char c) { }

	private bool HasCharacter(int c) { }

	private static void Internal_CreateFont(Font self, string name) { }

	[RequiredByNativeCode]
	internal static void InvokeTextureRebuilt_Internal(Font font) { }

	[CompilerGenerated]
	public static void remove_textureRebuilt(Action<Font> value) { }

	public void RequestCharactersInTexture(string characters, int size, FontStyle style) { }

}

