namespace UnityEngine.TextCore.LowLevel;

[NativeHeader(/*Cpp2IL Warning: missing at least one required parameter*/)]
public sealed class FontEngine
{
	private static Glyph[] s_Glyphs; //Field offset: 0x0
	private static UInt32[] s_GlyphIndexes_MarshallingArray_A; //Field offset: 0x8
	private static GlyphMarshallingStruct[] s_GlyphMarshallingStruct_IN; //Field offset: 0x10
	private static GlyphMarshallingStruct[] s_GlyphMarshallingStruct_OUT; //Field offset: 0x18
	private static GlyphRect[] s_FreeGlyphRects; //Field offset: 0x20
	private static GlyphRect[] s_UsedGlyphRects; //Field offset: 0x28
	private static GlyphPairAdjustmentRecord[] s_PairAdjustmentRecords_MarshallingArray; //Field offset: 0x30
	private static Dictionary<UInt32, Glyph> s_GlyphLookupDictionary; //Field offset: 0x38

	private static FontEngine() { }

	private static void GenericListToMarshallingArray(ref List<T>& srcList, ref T[] dstArray) { }

	public static FaceInfo GetFaceInfo() { }

	[NativeMethod]
	private static int GetFaceInfo_Internal(ref FaceInfo faceInfo) { }

	[NativeMethod]
	internal static uint GetGlyphIndex(uint unicode) { }

	internal static GlyphPairAdjustmentRecord[] GetGlyphPairAdjustmentRecords(List<UInt32> glyphIndexes, out int recordCount) { }

	[NativeMethod]
	private static int GetGlyphPairAdjustmentRecordsFromMarshallingArray(out GlyphPairAdjustmentRecord[] glyphPairAdjustmentRecords) { }

	internal static GlyphPairAdjustmentRecord[] GetGlyphPairAdjustmentTable(UInt32[] glyphIndexes) { }

	public static FontEngineError InitializeFontEngine() { }

	[NativeMethod]
	private static int InitializeFontEngine_Internal() { }

	public static FontEngineError LoadFontFace(Font font, int pointSize) { }

	[NativeMethod]
	private static int LoadFontFace_With_Size_FromFont_Internal(Font font, int pointSize) { }

	[NativeMethod]
	private static int PopulatePairAdjustmentRecordMarshallingArray_from_GlyphIndexes(UInt32[] glyphIndexes, out int recordCount) { }

	[NativeMethod]
	internal static void ResetAtlasTexture(Texture2D texture) { }

	private static void SetMarshallingArraySize(ref T[] marshallingArray, int recordCount) { }

	internal static bool TryAddGlyphsToTexture(List<UInt32> glyphIndexes, int padding, GlyphPackingMode packingMode, List<GlyphRect> freeGlyphRects, List<GlyphRect> usedGlyphRects, GlyphRenderMode renderMode, Texture2D texture, out Glyph[] glyphs) { }

	[NativeMethod]
	private static bool TryAddGlyphsToTexture_Internal(UInt32[] glyphIndex, int padding, GlyphPackingMode packingMode, out GlyphRect[] freeGlyphRects, ref int freeGlyphRectCount, out GlyphRect[] usedGlyphRects, ref int usedGlyphRectCount, GlyphRenderMode renderMode, Texture2D texture, out GlyphMarshallingStruct[] glyphs, ref int glyphCount) { }

	internal static bool TryAddGlyphToTexture(uint glyphIndex, int padding, GlyphPackingMode packingMode, List<GlyphRect> freeGlyphRects, List<GlyphRect> usedGlyphRects, GlyphRenderMode renderMode, Texture2D texture, out Glyph glyph) { }

	[NativeMethod]
	private static bool TryAddGlyphToTexture_Internal(uint glyphIndex, int padding, GlyphPackingMode packingMode, out GlyphRect[] freeGlyphRects, ref int freeGlyphRectCount, out GlyphRect[] usedGlyphRects, ref int usedGlyphRectCount, GlyphRenderMode renderMode, Texture2D texture, out GlyphMarshallingStruct glyph) { }

	public static bool TryGetGlyphWithIndexValue(uint glyphIndex, GlyphLoadFlags flags, out Glyph glyph) { }

	[NativeMethod]
	private static bool TryGetGlyphWithIndexValue_Internal(uint glyphIndex, GlyphLoadFlags loadFlags, ref GlyphMarshallingStruct glyphStruct) { }

	public static bool TryGetGlyphWithUnicodeValue(uint unicode, GlyphLoadFlags flags, out Glyph glyph) { }

	[NativeMethod]
	private static bool TryGetGlyphWithUnicodeValue_Internal(uint unicode, GlyphLoadFlags loadFlags, ref GlyphMarshallingStruct glyphStruct) { }

}

