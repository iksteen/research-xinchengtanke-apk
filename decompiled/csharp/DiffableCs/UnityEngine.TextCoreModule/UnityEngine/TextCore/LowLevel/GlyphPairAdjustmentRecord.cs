namespace UnityEngine.TextCore.LowLevel;

[DebuggerDisplay(/*Cpp2IL Warning: missing at least one required parameter*/)]
[UsedByNativeCode]
public struct GlyphPairAdjustmentRecord
{
	[NativeName(/*Cpp2IL Warning: missing at least one required parameter*/)]
	[SerializeField]
	private GlyphAdjustmentRecord m_FirstAdjustmentRecord; //Field offset: 0x0
	[NativeName(/*Cpp2IL Warning: missing at least one required parameter*/)]
	[SerializeField]
	private GlyphAdjustmentRecord m_SecondAdjustmentRecord; //Field offset: 0x14
	[SerializeField]
	private FontFeatureLookupFlags m_FeatureLookupFlags; //Field offset: 0x28

	public GlyphAdjustmentRecord firstAdjustmentRecord
	{
		 get { } //Length: 20
	}

	public GlyphAdjustmentRecord secondAdjustmentRecord
	{
		 get { } //Length: 20
	}

	public GlyphAdjustmentRecord get_firstAdjustmentRecord() { }

	public GlyphAdjustmentRecord get_secondAdjustmentRecord() { }

}

