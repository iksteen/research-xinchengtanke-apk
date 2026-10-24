//Type is in global namespace

public static class NGUIText
{
	[DoNotObfuscateNGUI]
	internal enum Alignment
	{
		Automatic = 0,
		Left = 1,
		Center = 2,
		Right = 3,
		Justified = 4,
	}

	internal class GlyphInfo
	{
		public Vector2 v0; //Field offset: 0x10
		public Vector2 v1; //Field offset: 0x18
		public Vector2 u0; //Field offset: 0x20
		public Vector2 u1; //Field offset: 0x28
		public Vector2 u2; //Field offset: 0x30
		public Vector2 u3; //Field offset: 0x38
		public float advance; //Field offset: 0x40
		public int channel; //Field offset: 0x44

		public GlyphInfo() { }

	}

	[DoNotObfuscateNGUI]
	internal enum SymbolStyle
	{
		None = 0,
		Normal = 1,
		Colored = 2,
		NoOutline = 3,
	}

	public static INGUIFont nguiFont; //Field offset: 0x0
	public static Font dynamicFont; //Field offset: 0x8
	public static GlyphInfo glyph; //Field offset: 0x10
	public static int spaceWidth; //Field offset: 0x18
	public static int fontSize; //Field offset: 0x1C
	public static float fontScale; //Field offset: 0x20
	public static float pixelDensity; //Field offset: 0x24
	public static FontStyle fontStyle; //Field offset: 0x28
	public static Alignment alignment; //Field offset: 0x2C
	public static Color tint; //Field offset: 0x30
	public static int rectWidth; //Field offset: 0x40
	public static int rectHeight; //Field offset: 0x44
	public static int regionWidth; //Field offset: 0x48
	public static int regionHeight; //Field offset: 0x4C
	public static int maxLines; //Field offset: 0x50
	public static bool gradient; //Field offset: 0x54
	public static Color gradientBottom; //Field offset: 0x58
	public static Color gradientTop; //Field offset: 0x68
	public static bool encoding; //Field offset: 0x78
	public static float spacingX; //Field offset: 0x7C
	public static float spacingY; //Field offset: 0x80
	public static bool premultiply; //Field offset: 0x84
	public static SymbolStyle symbolStyle; //Field offset: 0x88
	public static int finalSize; //Field offset: 0x8C
	public static float finalSpacingX; //Field offset: 0x90
	public static float finalLineHeight; //Field offset: 0x94
	public static float baseline; //Field offset: 0x98
	public static bool useSymbols; //Field offset: 0x9C
	private static StringBuilder mTempSB; //Field offset: 0xA0
	private static Color mInvisible; //Field offset: 0xA8
	private static BetterList<Color> mColors; //Field offset: 0xB8
	private static float mAlpha; //Field offset: 0xC0
	private static CharacterInfo mTempChar; //Field offset: 0xC4
	private static BetterList<Single> mSizes; //Field offset: 0xF8
	private static StringBuilder mSB; //Field offset: 0x100
	private static Color s_c0; //Field offset: 0x108
	private static Color s_c1; //Field offset: 0x118
	private static Single[] mBoldOffset; //Field offset: 0x128

	private static bool symbolCentered
	{
		private get { } //Length: 268
	}

	private static int symbolMaxHeight
	{
		private get { } //Length: 260
	}

	private static float symbolOffset
	{
		private get { } //Length: 264
	}

	private static float symbolScale
	{
		private get { } //Length: 328
	}

	private static NGUIText() { }

	public static void Align(List<Vector3> verts, int indexOffset, float printedWidth, int elements = 4) { }

	public static int CalculateOffsetToFit(string text, bool prepare = true) { }

	public static Vector2 CalculatePrintedSize(string text, bool prepare = true) { }

	[DebuggerHidden]
	[DebuggerStepThrough]
	public static string EncodeAlpha(float a) { }

	[DebuggerHidden]
	[DebuggerStepThrough]
	public static string EncodeColor(string text, Color c) { }

	[DebuggerHidden]
	[DebuggerStepThrough]
	public static string EncodeColor(Color c) { }

	[DebuggerHidden]
	[DebuggerStepThrough]
	public static string EncodeColor24(Color c) { }

	[DebuggerHidden]
	[DebuggerStepThrough]
	public static string EncodeColor32(Color c) { }

	[DebuggerHidden]
	[DebuggerStepThrough]
	public static void EndLine(ref StringBuilder s) { }

	private static bool get_symbolCentered() { }

	private static int get_symbolMaxHeight() { }

	private static float get_symbolOffset() { }

	private static float get_symbolScale() { }

	public static int GetApproximateCharacterIndex(List<Vector3> verts, List<Int32> indices, Vector2 pos) { }

	public static string GetEndOfLineThatFits(string text) { }

	public static int GetExactCharacterIndex(List<Vector3> verts, List<Int32> indices, Vector2 pos) { }

	public static GlyphInfo GetGlyph(int ch, int prev, bool bold, bool italic, float fontScale = 1) { }

	public static float GetGlyphWidth(int ch, int prev, float fontScale, bool bold, bool italic) { }

	public static BMSymbol GetSymbol(ref string text, int index, int textLength) { }

	public static bool InsertHyperlink(ref string text, ref int index, string keyword, string link, string prefix = null, string suffix = null) { }

	[DebuggerHidden]
	[DebuggerStepThrough]
	public static bool IsHex(char ch) { }

	[DebuggerHidden]
	[DebuggerStepThrough]
	public static bool IsSpace(int ch) { }

	[DebuggerHidden]
	[DebuggerStepThrough]
	public static float ParseAlpha(string text, int index) { }

	[DebuggerHidden]
	[DebuggerStepThrough]
	public static Color ParseColor(string text, int offset = 0) { }

	[DebuggerHidden]
	[DebuggerStepThrough]
	public static Color ParseColor24(string text, int offset = 0) { }

	[DebuggerHidden]
	[DebuggerStepThrough]
	public static bool ParseColor24(ref string text, int offset, out Color c) { }

	[DebuggerHidden]
	[DebuggerStepThrough]
	public static Color ParseColor32(string text, int offset) { }

	[DebuggerHidden]
	[DebuggerStepThrough]
	public static bool ParseColor32(ref string text, int offset, out Color c) { }

	public static bool ParseSymbol(string text, ref int index, BetterList<Color> colors, bool premultiply, ref int sub, ref float fontScaleMult, ref bool bold, ref bool italic, ref bool underline, ref bool strike, ref bool ignoreColor, ref bool forceSpriteColor) { }

	public static bool ParseSymbol(string text, ref int index) { }

	public static void Prepare(string text) { }

	public static void Print(string text, List<Vector3> verts, List<Vector2> uvs, List<Color> cols, List<Vector3> sverts = null, List<Vector2> suvs = null, List<Color> scols = null) { }

	public static void PrintApproximateCharacterPositions(string text, List<Vector3> verts, List<Int32> indices) { }

	public static void PrintCaretAndSelection(string text, int start, int end, List<Vector3> caret, List<Vector3> highlight) { }

	public static void PrintExactCharacterPositions(string text, List<Vector3> verts, List<Int32> indices) { }

	public static bool ReplaceLink(ref string text, ref int index, string type, string prefix = null, string suffix = null) { }

	public static void ReplaceLinks(ref string text, string prefix = null, string suffix = null) { }

	[DebuggerHidden]
	[DebuggerStepThrough]
	private static void ReplaceSpaceWithNewline(ref StringBuilder s) { }

	public static string StripSymbols(string text) { }

	public static void Update(bool request) { }

	public static void Update() { }

	public static bool WrapText(string text, out string finalText, bool wrapLineColors = false) { }

	public static bool WrapText(string text, out string finalText, bool keepCharCount, bool wrapLineColors, bool useEllipsis = false) { }

}

