//Type is in global namespace

[AddComponentMenu(/*Cpp2IL Warning: missing at least one required parameter*/)]
[ExecuteInEditMode]
public class UILabel : UIWidget
{
	[DoNotObfuscateNGUI]
	internal enum Crispness
	{
		Never = 0,
		OnDesktop = 1,
		Always = 2,
	}

	[DoNotObfuscateNGUI]
	internal enum Effect
	{
		None = 0,
		Shadow = 1,
		Outline = 2,
		Outline8 = 3,
	}

	[DoNotObfuscateNGUI]
	internal enum Modifier
	{
		None = 0,
		ToUppercase = 1,
		ToLowercase = 2,
		Custom = 255,
	}

	internal sealed class ModifierFunc : MulticastDelegate
	{

		public ModifierFunc(object object, IntPtr method) { }

		public override IAsyncResult BeginInvoke(string s, AsyncCallback callback, object object) { }

		public override string EndInvoke(IAsyncResult result) { }

		public override string Invoke(string s) { }

	}

	[DoNotObfuscateNGUI]
	internal enum Overflow
	{
		ShrinkContent = 0,
		ClampContent = 1,
		ResizeFreely = 2,
		ResizeHeight = 3,
	}

	private static BetterList<UILabel> mList; //Field offset: 0x0
	private static Dictionary<Font, Int32> mFontUsage; //Field offset: 0x8
	private static BetterList<UIDrawCall> mTempDrawcalls; //Field offset: 0x10
	private static bool mTexRebuildAdded; //Field offset: 0x18
	private static List<Vector3> mTempVerts; //Field offset: 0x20
	private static List<Int32> mTempIndices; //Field offset: 0x28
	public Crispness keepCrispWhenShrunk; //Field offset: 0x190
	[HideInInspector]
	[SerializeField]
	private Font mTrueTypeFont; //Field offset: 0x198
	[HideInInspector]
	[SerializeField]
	private object mFont; //Field offset: 0x1A0
	[HideInInspector]
	[Multiline(/*Cpp2IL Warning: missing at least one required parameter*/)]
	[SerializeField]
	private string mText; //Field offset: 0x1A8
	[HideInInspector]
	[SerializeField]
	private int mFontSize; //Field offset: 0x1B0
	[HideInInspector]
	[SerializeField]
	private FontStyle mFontStyle; //Field offset: 0x1B4
	[HideInInspector]
	[SerializeField]
	private Alignment mAlignment; //Field offset: 0x1B8
	[HideInInspector]
	[SerializeField]
	private bool mEncoding; //Field offset: 0x1BC
	[HideInInspector]
	[SerializeField]
	private int mMaxLineCount; //Field offset: 0x1C0
	[HideInInspector]
	[SerializeField]
	private Effect mEffectStyle; //Field offset: 0x1C4
	[HideInInspector]
	[SerializeField]
	private Color mEffectColor; //Field offset: 0x1C8
	[HideInInspector]
	[SerializeField]
	private SymbolStyle mSymbols; //Field offset: 0x1D8
	[HideInInspector]
	[SerializeField]
	private Vector2 mEffectDistance; //Field offset: 0x1DC
	[HideInInspector]
	[SerializeField]
	private Overflow mOverflow; //Field offset: 0x1E4
	[HideInInspector]
	[SerializeField]
	private bool mApplyGradient; //Field offset: 0x1E8
	[HideInInspector]
	[SerializeField]
	private Color mGradientTop; //Field offset: 0x1EC
	[HideInInspector]
	[SerializeField]
	private Color mGradientBottom; //Field offset: 0x1FC
	[HideInInspector]
	[SerializeField]
	private int mSpacingX; //Field offset: 0x20C
	[HideInInspector]
	[SerializeField]
	private int mSpacingY; //Field offset: 0x210
	[HideInInspector]
	[SerializeField]
	private bool mUseFloatSpacing; //Field offset: 0x214
	[HideInInspector]
	[SerializeField]
	private float mFloatSpacingX; //Field offset: 0x218
	[HideInInspector]
	[SerializeField]
	private float mFloatSpacingY; //Field offset: 0x21C
	[HideInInspector]
	[SerializeField]
	private bool mOverflowEllipsis; //Field offset: 0x220
	[HideInInspector]
	[SerializeField]
	private int mOverflowWidth; //Field offset: 0x224
	[HideInInspector]
	[SerializeField]
	private int mOverflowHeight; //Field offset: 0x228
	[HideInInspector]
	[SerializeField]
	private Modifier mModifier; //Field offset: 0x22C
	[HideInInspector]
	[SerializeField]
	private int mSymbolDepth; //Field offset: 0x230
	[HideInInspector]
	[SerializeField]
	private bool mShrinkToFit; //Field offset: 0x234
	[HideInInspector]
	[SerializeField]
	private int mMaxLineWidth; //Field offset: 0x238
	[HideInInspector]
	[SerializeField]
	private int mMaxLineHeight; //Field offset: 0x23C
	[HideInInspector]
	[SerializeField]
	private float mLineWidth; //Field offset: 0x240
	[HideInInspector]
	[SerializeField]
	private bool mMultiline; //Field offset: 0x244
	private UILabelSymbols mLabSym; //Field offset: 0x248
	private Font mActiveTTF; //Field offset: 0x250
	private float mDensity; //Field offset: 0x258
	private bool mShouldBeProcessed; //Field offset: 0x25C
	private string mProcessedText; //Field offset: 0x260
	private bool mPremultiply; //Field offset: 0x268
	private Vector2 mCalculatedSize; //Field offset: 0x26C
	private float mScale; //Field offset: 0x274
	private int mFinalFontSize; //Field offset: 0x278
	private int mLastWidth; //Field offset: 0x27C
	private int mLastHeight; //Field offset: 0x280
	public ModifierFunc customModifier; //Field offset: 0x288

	public Alignment alignment
	{
		 get { } //Length: 8
		 set { } //Length: 36
	}

	public object ambigiousFont
	{
		 get { } //Length: 128
		 set { } //Length: 172
	}

	public bool applyGradient
	{
		 get { } //Length: 8
		 set { } //Length: 48
	}

	public INGUIAtlas atlas
	{
		 get { } //Length: 192
		 set { } //Length: 212
	}

	[Obsolete]
	public INGUIFont bitmapFont
	{
		 get { } //Length: 4
		 set { } //Length: 4
	}

	public int defaultFontSize
	{
		 get { } //Length: 284
	}

	public virtual Vector4 drawingDimensions
	{
		 get { } //Length: 60
	}

	public Color effectColor
	{
		 get { } //Length: 20
		 set { } //Length: 144
	}

	public Vector2 effectDistance
	{
		 get { } //Length: 12
		 set { } //Length: 68
	}

	public float effectiveSpacingX
	{
		 get { } //Length: 28
	}

	public float effectiveSpacingY
	{
		 get { } //Length: 28
	}

	public Effect effectStyle
	{
		 get { } //Length: 8
		 set { } //Length: 32
	}

	public int finalFontSize
	{
		 get { } //Length: 156
	}

	public float floatSpacingX
	{
		 get { } //Length: 8
		 set { } //Length: 100
	}

	public float floatSpacingY
	{
		 get { } //Length: 8
		 set { } //Length: 100
	}

	public INGUIFont font
	{
		 get { } //Length: 76
		 set { } //Length: 252
	}

	public int fontSize
	{
		 get { } //Length: 8
		 set { } //Length: 92
	}

	public FontStyle fontStyle
	{
		 get { } //Length: 8
		 set { } //Length: 36
	}

	public Color gradientBottom
	{
		 get { } //Length: 20
		 set { } //Length: 168
	}

	public Color gradientTop
	{
		 get { } //Length: 20
		 set { } //Length: 168
	}

	public virtual bool isAnchoredHorizontally
	{
		 get { } //Length: 60
	}

	public virtual bool isAnchoredVertically
	{
		 get { } //Length: 64
	}

	private bool isValid
	{
		private get { } //Length: 184
	}

	private bool keepCrisp
	{
		private get { } //Length: 148
	}

	[Obsolete]
	public int lineHeight
	{
		 get { } //Length: 8
		 set { } //Length: 8
	}

	[Obsolete]
	public int lineWidth
	{
		 get { } //Length: 8
		 set { } //Length: 8
	}

	public virtual Vector3[] localCorners
	{
		 get { } //Length: 60
	}

	public virtual Vector2 localSize
	{
		 get { } //Length: 60
	}

	public virtual Texture mainTexture
	{
		 get { } //Length: 376
		 set { } //Length: 8
	}

	public virtual Material material
	{
		 get { } //Length: 364
		 set { } //Length: 8
	}

	public int maxLineCount
	{
		 get { } //Length: 8
		 set { } //Length: 108
	}

	public Modifier modifier
	{
		 get { } //Length: 8
		 set { } //Length: 68
	}

	public bool multiLine
	{
		 get { } //Length: 16
		 set { } //Length: 48
	}

	public bool overflowEllipsis
	{
		 get { } //Length: 8
		 set { } //Length: 48
	}

	public int overflowHeight
	{
		 get { } //Length: 8
		 set { } //Length: 40
	}

	public Overflow overflowMethod
	{
		 get { } //Length: 8
		 set { } //Length: 32
	}

	public int overflowWidth
	{
		 get { } //Length: 8
		 set { } //Length: 40
	}

	private bool packedFontShader
	{
		private get { } //Length: 192
	}

	public virtual Pivot pivot
	{
		 get { } //Length: 8
		 set { } //Length: 188
	}

	private bool premultipliedAlphaShader
	{
		private get { } //Length: 192
	}

	public Vector2 printedSize
	{
		 get { } //Length: 60
	}

	public string printedText
	{
		 get { } //Length: 168
	}

	public string processedText
	{
		 get { } //Length: 152
	}

	public int quadsPerCharacter
	{
		 get { } //Length: 52
	}

	public bool separateSymbols
	{
		 get { } //Length: 264
	}

	private bool shouldBeProcessed
	{
		private get { } //Length: 8
		private set { } //Length: 28
	}

	[Obsolete]
	public bool shrinkToFit
	{
		 get { } //Length: 16
		 set { } //Length: 32
	}

	public int spacingX
	{
		 get { } //Length: 8
		 set { } //Length: 36
	}

	public int spacingY
	{
		 get { } //Length: 8
		 set { } //Length: 36
	}

	public bool supportEncoding
	{
		 get { } //Length: 8
		 set { } //Length: 44
	}

	public int symbolDepth
	{
		 get { } //Length: 8
		 set { } //Length: 208
	}

	public bool symbolLabel
	{
		 get { } //Length: 104
	}

	public SymbolStyle symbolStyle
	{
		 get { } //Length: 8
		 set { } //Length: 32
	}

	public string text
	{
		 get { } //Length: 8
		 set { } //Length: 252
	}

	public Font trueTypeFont
	{
		 get { } //Length: 268
		 set { } //Length: 292
	}

	public bool useFloatSpacing
	{
		 get { } //Length: 8
		 set { } //Length: 44
	}

	public virtual Vector3[] worldCorners
	{
		 get { } //Length: 60
	}

	private static UILabel() { }

	public UILabel() { }

	public Vector2 ApplyOffset(List<Vector3> verts, int start) { }

	public void ApplyShadow(List<Vector3> verts, List<Vector2> uvs, List<Color> cols, int start, int end, float x, float y) { }

	public void AssumeNaturalSize() { }

	public int CalculateOffsetToFit(string text) { }

	private void CreateSymbolLabel() { }

	public void Fill(List<Vector3> verts, List<Vector2> uvs, List<Color> cols, List<Vector3> symbolVerts, List<Vector2> symbolUVs, List<Color> symbolCols) { }

	public Alignment get_alignment() { }

	public object get_ambigiousFont() { }

	public bool get_applyGradient() { }

	public INGUIAtlas get_atlas() { }

	public INGUIFont get_bitmapFont() { }

	public int get_defaultFontSize() { }

	public virtual Vector4 get_drawingDimensions() { }

	public Color get_effectColor() { }

	public Vector2 get_effectDistance() { }

	public float get_effectiveSpacingX() { }

	public float get_effectiveSpacingY() { }

	public Effect get_effectStyle() { }

	public int get_finalFontSize() { }

	public float get_floatSpacingX() { }

	public float get_floatSpacingY() { }

	public INGUIFont get_font() { }

	public int get_fontSize() { }

	public FontStyle get_fontStyle() { }

	public Color get_gradientBottom() { }

	public Color get_gradientTop() { }

	public virtual bool get_isAnchoredHorizontally() { }

	public virtual bool get_isAnchoredVertically() { }

	private bool get_isValid() { }

	private bool get_keepCrisp() { }

	public int get_lineHeight() { }

	public int get_lineWidth() { }

	public virtual Vector3[] get_localCorners() { }

	public virtual Vector2 get_localSize() { }

	public virtual Texture get_mainTexture() { }

	public virtual Material get_material() { }

	public int get_maxLineCount() { }

	public Modifier get_modifier() { }

	public bool get_multiLine() { }

	public bool get_overflowEllipsis() { }

	public int get_overflowHeight() { }

	public Overflow get_overflowMethod() { }

	public int get_overflowWidth() { }

	private bool get_packedFontShader() { }

	public virtual Pivot get_pivot() { }

	private bool get_premultipliedAlphaShader() { }

	public Vector2 get_printedSize() { }

	public string get_printedText() { }

	public string get_processedText() { }

	public int get_quadsPerCharacter() { }

	public bool get_separateSymbols() { }

	private bool get_shouldBeProcessed() { }

	public bool get_shrinkToFit() { }

	public int get_spacingX() { }

	public int get_spacingY() { }

	public bool get_supportEncoding() { }

	public int get_symbolDepth() { }

	public bool get_symbolLabel() { }

	public SymbolStyle get_symbolStyle() { }

	public string get_text() { }

	public Font get_trueTypeFont() { }

	public bool get_useFloatSpacing() { }

	public virtual Vector3[] get_worldCorners() { }

	[Obsolete]
	public int GetCharacterIndex(Vector3 worldPos) { }

	public int GetCharacterIndex(int currentIndex, KeyCode key) { }

	[Obsolete]
	public int GetCharacterIndex(Vector2 localPos) { }

	public int GetCharacterIndexAtPosition(Vector3 worldPos, bool precise) { }

	public int GetCharacterIndexAtPosition(Vector2 localPos, bool precise) { }

	public virtual Vector3[] GetSides(Transform relativeTo) { }

	public string GetUrlAtCharacterIndex(int characterIndex) { }

	public string GetUrlAtPosition(Vector2 localPos) { }

	public string GetUrlAtPosition(Vector3 worldPos) { }

	public string GetWordAtCharacterIndex(int characterIndex) { }

	public string GetWordAtPosition(Vector2 localPos) { }

	public string GetWordAtPosition(Vector3 worldPos) { }

	public virtual void MakePixelPerfect() { }

	public virtual void MarkAsChanged() { }

	protected virtual void OnAnchor() { }

	private void OnApplicationPause(bool paused) { }

	protected virtual void OnDisable() { }

	protected virtual void OnEnable() { }

	public virtual void OnFill(List<Vector3> verts, List<Vector2> uvs, List<Color> cols) { }

	private static void OnFontChanged(Font font) { }

	protected virtual void OnInit() { }

	protected virtual void OnStart() { }

	public void PrintOverlay(int start, int end, UIGeometry caret, UIGeometry highlight, Color caretColor, Color highlightColor) { }

	private void ProcessAndRequest() { }

	public void ProcessText(bool legacyMode = false, bool full = true) { }

	public void set_alignment(Alignment value) { }

	public void set_ambigiousFont(object value) { }

	public void set_applyGradient(bool value) { }

	public void set_atlas(INGUIAtlas value) { }

	public void set_bitmapFont(INGUIFont value) { }

	public void set_effectColor(Color value) { }

	public void set_effectDistance(Vector2 value) { }

	public void set_effectStyle(Effect value) { }

	public void set_floatSpacingX(float value) { }

	public void set_floatSpacingY(float value) { }

	public void set_font(INGUIFont value) { }

	public void set_fontSize(int value) { }

	public void set_fontStyle(FontStyle value) { }

	public void set_gradientBottom(Color value) { }

	public void set_gradientTop(Color value) { }

	public void set_lineHeight(int value) { }

	public void set_lineWidth(int value) { }

	public virtual void set_mainTexture(Texture value) { }

	public virtual void set_material(Material value) { }

	public void set_maxLineCount(int value) { }

	public void set_modifier(Modifier value) { }

	public void set_multiLine(bool value) { }

	public void set_overflowEllipsis(bool value) { }

	public void set_overflowHeight(int value) { }

	public void set_overflowMethod(Overflow value) { }

	public void set_overflowWidth(int value) { }

	public virtual void set_pivot(Pivot value) { }

	private void set_shouldBeProcessed(bool value) { }

	public void set_shrinkToFit(bool value) { }

	public void set_spacingX(int value) { }

	public void set_spacingY(int value) { }

	public void set_supportEncoding(bool value) { }

	public void set_symbolDepth(int value) { }

	public void set_symbolStyle(SymbolStyle value) { }

	public void set_text(string value) { }

	public void set_trueTypeFont(Font value) { }

	public void set_useFloatSpacing(bool value) { }

	protected void SetActiveFont(Font fnt) { }

	public void SetCurrentPercent() { }

	public void SetCurrentProgress() { }

	public void SetCurrentSelection() { }

	public virtual void SetDirty() { }

	public void UpdateNGUIText() { }

	protected virtual void UpgradeFrom265() { }

	public bool Wrap(string text, out string final) { }

	public bool Wrap(string text, out string final, int height) { }

}

