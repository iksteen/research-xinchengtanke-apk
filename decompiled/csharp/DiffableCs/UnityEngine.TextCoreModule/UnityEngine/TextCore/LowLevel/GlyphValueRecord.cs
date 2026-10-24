namespace UnityEngine.TextCore.LowLevel;

[UsedByNativeCode]
public struct GlyphValueRecord : IEquatable<GlyphValueRecord>
{
	[NativeName(/*Cpp2IL Warning: missing at least one required parameter*/)]
	[SerializeField]
	private float m_XPlacement; //Field offset: 0x0
	[NativeName(/*Cpp2IL Warning: missing at least one required parameter*/)]
	[SerializeField]
	private float m_YPlacement; //Field offset: 0x4
	[NativeName(/*Cpp2IL Warning: missing at least one required parameter*/)]
	[SerializeField]
	private float m_XAdvance; //Field offset: 0x8
	[NativeName(/*Cpp2IL Warning: missing at least one required parameter*/)]
	[SerializeField]
	private float m_YAdvance; //Field offset: 0xC

	public float xAdvance
	{
		 get { } //Length: 8
	}

	public float xPlacement
	{
		 get { } //Length: 8
	}

	public float yAdvance
	{
		 get { } //Length: 8
	}

	public float yPlacement
	{
		 get { } //Length: 8
	}

	public virtual bool Equals(object obj) { }

	public override bool Equals(GlyphValueRecord other) { }

	public float get_xAdvance() { }

	public float get_xPlacement() { }

	public float get_yAdvance() { }

	public float get_yPlacement() { }

	public virtual int GetHashCode() { }

}

