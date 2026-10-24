namespace UnityEngine.Rendering;

public struct ShaderTagId : IEquatable<ShaderTagId>
{
	public static readonly ShaderTagId none; //Field offset: 0x0
	private int m_Id; //Field offset: 0x0

	private static ShaderTagId() { }

	public ShaderTagId(string name) { }

	public virtual bool Equals(object obj) { }

	public override bool Equals(ShaderTagId other) { }

	public virtual int GetHashCode() { }

}

