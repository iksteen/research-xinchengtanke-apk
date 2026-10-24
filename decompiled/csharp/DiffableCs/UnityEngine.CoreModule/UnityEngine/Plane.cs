namespace UnityEngine;

[UsedByNativeCode]
public struct Plane : IFormattable
{
	internal const int size = 16; //Field offset: 0x0
	private Vector3 m_Normal; //Field offset: 0x0
	private float m_Distance; //Field offset: 0xC

	public Plane(Vector3 inNormal, Vector3 inPoint) { }

	public Plane(Vector3 inNormal, float d) { }

	public Plane(Vector3 a, Vector3 b, Vector3 c) { }

	public bool Raycast(Ray ray, out float enter) { }

	public virtual string ToString() { }

	public override string ToString(string format, IFormatProvider formatProvider) { }

}

