namespace UnityEngine;

[NativeHeader(/*Cpp2IL Warning: missing at least one required parameter*/)]
[RequiredByNativeCode]
public sealed class Mesh : object
{
	[NativeHeader(/*Cpp2IL Warning: missing at least one required parameter*/)]
	[StaticAccessor(/*Cpp2IL Warning: missing at least one required parameter*/)]
	internal struct MeshData
	{
		[NativeDisableUnsafePtrRestriction]
		internal IntPtr m_Ptr; //Field offset: 0x0

	}


	public Bounds bounds
	{
		 get { } //Length: 108
		 set { } //Length: 80
	}

	internal bool canAccess
	{
		[NativeMethod]
		internal get { } //Length: 64
	}

	public Color32[] colors32
	{
		 get { } //Length: 88
		 set { } //Length: 108
	}

	public Vector3[] normals
	{
		 get { } //Length: 80
		 set { } //Length: 100
	}

	public int subMeshCount
	{
		[NativeMethod]
		 get { } //Length: 64
	}

	public Vector4[] tangents
	{
		 get { } //Length: 80
		 set { } //Length: 100
	}

	public Int32[] triangles
	{
		 set { } //Length: 200
	}

	public Vector2[] uv
	{
		 set { } //Length: 100
	}

	public Vector2[] uv2
	{
		 set { } //Length: 100
	}

	public int vertexCount
	{
		[NativeMethod]
		 get { } //Length: 64
	}

	public Vector3[] vertices
	{
		 get { } //Length: 80
		 set { } //Length: 100
	}

	[RequiredByNativeCode]
	public Mesh() { }

	private bool CheckCanAccessSubmesh(int submesh, bool errorAboutTriangles) { }

	private bool CheckCanAccessSubmeshIndices(int submesh) { }

	private bool CheckCanAccessSubmeshTriangles(int submesh) { }

	private void CheckIndicesArrayRange(int valuesLength, int start, int length) { }

	[ExcludeFromDocs]
	public void Clear() { }

	[NativeMethod]
	private void ClearImpl(bool keepVertexLayout) { }

	internal static int DefaultDimensionForChannel(VertexAttribute channel) { }

	public Bounds get_bounds() { }

	private void get_bounds_Injected(out Bounds ret) { }

	[NativeMethod]
	internal bool get_canAccess() { }

	public Color32[] get_colors32() { }

	public Vector3[] get_normals() { }

	[NativeMethod]
	public int get_subMeshCount() { }

	public Vector4[] get_tangents() { }

	[NativeMethod]
	public int get_vertexCount() { }

	public Vector3[] get_vertices() { }

	private T[] GetAllocArrayFromChannel(VertexAttribute channel) { }

	private T[] GetAllocArrayFromChannel(VertexAttribute channel, VertexAttributeFormat format, int dim) { }

	[FreeFunction]
	private Array GetAllocArrayFromChannelImpl(VertexAttribute channel, VertexAttributeFormat format, int dim) { }

	[FreeFunction]
	private void GetArrayFromChannelImpl(VertexAttribute channel, VertexAttributeFormat format, int dim, Array values) { }

	public Int32[] GetIndices(int submesh, bool applyBaseVertex) { }

	[ExcludeFromDocs]
	public Int32[] GetIndices(int submesh) { }

	[FreeFunction]
	private Int32[] GetIndicesImpl(int submesh, bool applyBaseVertex) { }

	private void GetListForChannel(List<T> buffer, int capacity, VertexAttribute channel, int dim) { }

	private void GetListForChannel(List<T> buffer, int capacity, VertexAttribute channel, int dim, VertexAttributeFormat channelType) { }

	internal static VertexAttribute GetUVChannel(int uvIndex) { }

	public void GetUVs(int channel, List<Vector4> uvs) { }

	private void GetUVsImpl(int uvIndex, List<T> uvs, int dim) { }

	[FreeFunction]
	public bool HasVertexAttribute(VertexAttribute attr) { }

	[FreeFunction]
	private static void Internal_Create(Mesh mono) { }

	public void MarkDynamic() { }

	[NativeMethod]
	private void MarkDynamicImpl() { }

	[FreeFunction]
	private void PrintErrorCantAccessChannel(VertexAttribute ch) { }

	private void PrintErrorCantAccessIndices() { }

	public void RecalculateBounds(MeshUpdateFlags flags) { }

	[ExcludeFromDocs]
	public void RecalculateBounds() { }

	[NativeMethod]
	private void RecalculateBoundsImpl(MeshUpdateFlags flags) { }

	public void set_bounds(Bounds value) { }

	private void set_bounds_Injected(ref Bounds value) { }

	public void set_colors32(Color32[] value) { }

	public void set_normals(Vector3[] value) { }

	public void set_tangents(Vector4[] value) { }

	public void set_triangles(Int32[] value) { }

	public void set_uv(Vector2[] value) { }

	public void set_uv2(Vector2[] value) { }

	public void set_vertices(Vector3[] value) { }

	private void SetArrayForChannel(VertexAttribute channel, T[] values, MeshUpdateFlags flags = 0) { }

	private void SetArrayForChannel(VertexAttribute channel, VertexAttributeFormat format, int dim, T[] values, MeshUpdateFlags flags = 0) { }

	[FreeFunction]
	private void SetArrayForChannelImpl(VertexAttribute channel, VertexAttributeFormat format, int dim, Array values, int arraySize, int valuesStart, int valuesCount, MeshUpdateFlags flags) { }

	public void SetColors(List<Color> inColors) { }

	[ExcludeFromDocs]
	public void SetColors(List<Color> inColors, int start, int length) { }

	public void SetColors(List<Color32> inColors) { }

	[ExcludeFromDocs]
	public void SetColors(List<Color32> inColors, int start, int length) { }

	public void SetColors(List<Color32> inColors, int start, int length, MeshUpdateFlags flags) { }

	public void SetColors(List<Color> inColors, int start, int length, MeshUpdateFlags flags) { }

	[FreeFunction]
	private void SetIndicesImpl(int submesh, MeshTopology topology, IndexFormat indicesFormat, Array indices, int arrayStart, int arraySize, bool calculateBounds, int baseVertex) { }

	private void SetListForChannel(VertexAttribute channel, List<T> values, int start, int length, MeshUpdateFlags flags) { }

	private void SetListForChannel(VertexAttribute channel, VertexAttributeFormat format, int dim, List<T> values, int start, int length, MeshUpdateFlags flags) { }

	public void SetNormals(List<Vector3> inNormals) { }

	[ExcludeFromDocs]
	public void SetNormals(List<Vector3> inNormals, int start, int length) { }

	public void SetNormals(List<Vector3> inNormals, int start, int length, MeshUpdateFlags flags) { }

	private void SetSizedArrayForChannel(VertexAttribute channel, VertexAttributeFormat format, int dim, Array values, int valuesArrayLength, int valuesStart, int valuesCount, MeshUpdateFlags flags) { }

	public void SetTangents(List<Vector4> inTangents, int start, int length, MeshUpdateFlags flags) { }

	[ExcludeFromDocs]
	public void SetTangents(List<Vector4> inTangents, int start, int length) { }

	public void SetTangents(List<Vector4> inTangents) { }

	[ExcludeFromDocs]
	public void SetTriangles(Int32[] triangles, int submesh, bool calculateBounds) { }

	public void SetTriangles(List<Int32> triangles, int trianglesStart, int trianglesLength, int submesh, bool calculateBounds = true, int baseVertex = 0) { }

	public void SetTriangles(List<Int32> triangles, int submesh, bool calculateBounds, int baseVertex) { }

	[ExcludeFromDocs]
	public void SetTriangles(List<Int32> triangles, int submesh) { }

	public void SetTriangles(Int32[] triangles, int trianglesStart, int trianglesLength, int submesh, bool calculateBounds = true, int baseVertex = 0) { }

	public void SetTriangles(Int32[] triangles, int submesh, bool calculateBounds, int baseVertex) { }

	private void SetTrianglesImpl(int submesh, IndexFormat indicesFormat, Array triangles, int trianglesArrayLength, int start, int length, bool calculateBounds, int baseVertex) { }

	[ExcludeFromDocs]
	public void SetUVs(int channel, List<Vector4> uvs, int start, int length) { }

	public void SetUVs(int channel, List<Vector2> uvs) { }

	public void SetUVs(int channel, List<Vector4> uvs) { }

	[ExcludeFromDocs]
	public void SetUVs(int channel, List<Vector2> uvs, int start, int length) { }

	public void SetUVs(int channel, List<Vector2> uvs, int start, int length, MeshUpdateFlags flags) { }

	public void SetUVs(int channel, List<Vector4> uvs, int start, int length, MeshUpdateFlags flags) { }

	private void SetUvsImpl(int uvIndex, int dim, List<T> uvs, int start, int length, MeshUpdateFlags flags) { }

	[ExcludeFromDocs]
	public void SetVertices(List<Vector3> inVertices, int start, int length) { }

	public void SetVertices(List<Vector3> inVertices) { }

	public void SetVertices(List<Vector3> inVertices, int start, int length, MeshUpdateFlags flags) { }

}

