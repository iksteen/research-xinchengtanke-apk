namespace UnityEngine.TextCore.LowLevel;

[UsedByNativeCode]
public struct GlyphAdjustmentRecord
{
	[NativeName(/*Cpp2IL Warning: missing at least one required parameter*/)]
	[SerializeField]
	private uint m_GlyphIndex; //Field offset: 0x0
	[NativeName(/*Cpp2IL Warning: missing at least one required parameter*/)]
	[SerializeField]
	private GlyphValueRecord m_GlyphValueRecord; //Field offset: 0x4

	public uint glyphIndex
	{
		 get { } //Length: 8
	}

	public GlyphValueRecord glyphValueRecord
	{
		 get { } //Length: 12
	}

	public uint get_glyphIndex() { }

	public GlyphValueRecord get_glyphValueRecord() { }

}

