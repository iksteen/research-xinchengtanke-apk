namespace UnityEngine.U2D;

[NativeHeader(/*Cpp2IL Warning: missing at least one required parameter*/)]
[NativeHeader(/*Cpp2IL Warning: missing at least one required parameter*/)]
[StaticAccessor(/*Cpp2IL Warning: missing at least one required parameter*/)]
public class SpriteAtlasManager
{
	[CompilerGenerated]
	[DebuggerBrowsable(/*Cpp2IL Warning: missing at least one required parameter*/)]
	private static Action<String, Action`1<SpriteAtlas>> atlasRequested; //Field offset: 0x0
	[CompilerGenerated]
	[DebuggerBrowsable(/*Cpp2IL Warning: missing at least one required parameter*/)]
	private static Action<SpriteAtlas> atlasRegistered; //Field offset: 0x8

	public static event Action<SpriteAtlas> atlasRegistered
	{
		[CompilerGenerated]
		 add { } //Length: 248
		[CompilerGenerated]
		 remove { } //Length: 248
	}

	private static SpriteAtlasManager() { }

	[CompilerGenerated]
	public static void add_atlasRegistered(Action<SpriteAtlas> value) { }

	[RequiredByNativeCode]
	private static void PostRegisteredAtlas(SpriteAtlas spriteAtlas) { }

	internal static void Register(SpriteAtlas spriteAtlas) { }

	[CompilerGenerated]
	public static void remove_atlasRegistered(Action<SpriteAtlas> value) { }

	[RequiredByNativeCode]
	private static bool RequestAtlas(string tag) { }

}

