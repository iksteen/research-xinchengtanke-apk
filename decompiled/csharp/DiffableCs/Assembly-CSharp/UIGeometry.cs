//Type is in global namespace

public class UIGeometry
{
	internal sealed class OnCustomWrite : MulticastDelegate
	{

		public OnCustomWrite(object object, IntPtr method) { }

		public override IAsyncResult BeginInvoke(List<Vector3> v, List<Vector2> u, List<Color> c, List<Vector3> n, List<Vector4> t, List<Vector4> u2, AsyncCallback callback, object object) { }

		public override void EndInvoke(IAsyncResult result) { }

		public override void Invoke(List<Vector3> v, List<Vector2> u, List<Color> c, List<Vector3> n, List<Vector4> t, List<Vector4> u2) { }

	}

	public List<Vector3> verts; //Field offset: 0x10
	public List<Vector2> uvs; //Field offset: 0x18
	public List<Color> cols; //Field offset: 0x20
	public OnCustomWrite onCustomWrite; //Field offset: 0x28
	private List<Vector3> mRtpVerts; //Field offset: 0x30
	private Vector3 mRtpNormal; //Field offset: 0x38
	private Vector4 mRtpTan; //Field offset: 0x44

	public bool hasTransformed
	{
		 get { } //Length: 112
	}

	public bool hasVertices
	{
		 get { } //Length: 84
	}

	public UIGeometry() { }

	public void ApplyTransform(Matrix4x4 widgetToPanel, bool generateNormals = true) { }

	public void Clear() { }

	public bool get_hasTransformed() { }

	public bool get_hasVertices() { }

	public void WriteToBuffers(List<Vector3> v, List<Vector2> u, List<Color> c, List<Vector3> n, List<Vector4> t, List<Vector4> u2) { }

}

