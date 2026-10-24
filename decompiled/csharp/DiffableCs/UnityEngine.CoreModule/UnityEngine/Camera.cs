namespace UnityEngine;

[NativeHeader(/*Cpp2IL Warning: missing at least one required parameter*/)]
[NativeHeader(/*Cpp2IL Warning: missing at least one required parameter*/)]
[NativeHeader(/*Cpp2IL Warning: missing at least one required parameter*/)]
[NativeHeader(/*Cpp2IL Warning: missing at least one required parameter*/)]
[NativeHeader(/*Cpp2IL Warning: missing at least one required parameter*/)]
[NativeHeader(/*Cpp2IL Warning: missing at least one required parameter*/)]
[NativeHeader(/*Cpp2IL Warning: missing at least one required parameter*/)]
[RequireComponent(/*Cpp2IL Warning: missing at least one required parameter*/)]
[UsedByNativeCode]
public sealed class Camera : Behaviour
{
	internal sealed class CameraCallback : MulticastDelegate
	{

		public CameraCallback(object object, IntPtr method) { }

		public override IAsyncResult BeginInvoke(Camera cam, AsyncCallback callback, object object) { }

		public override void EndInvoke(IAsyncResult result) { }

		public override void Invoke(Camera cam) { }

	}

	internal enum MonoOrStereoscopicEye
	{
		Left = 0,
		Right = 1,
		Mono = 2,
	}

	internal struct RenderRequest
	{
		private readonly RenderRequestMode m_CameraRenderMode; //Field offset: 0x0
		private readonly RenderTexture m_ResultRT; //Field offset: 0x8
		private readonly RenderRequestOutputSpace m_OutputSpace; //Field offset: 0x10

	}

	internal enum RenderRequestMode
	{
		None = 0,
		ObjectId = 1,
		Depth = 2,
		VertexNormal = 3,
		WorldPosition = 4,
		EntityId = 5,
		BaseColor = 6,
		SpecularColor = 7,
		Metallic = 8,
		Emission = 9,
		Normal = 10,
		Smoothness = 11,
		Occlusion = 12,
		DiffuseColor = 13,
	}

	internal enum RenderRequestOutputSpace
	{
		ScreenSpace = -1,
		UV0 = 0,
		UV1 = 1,
		UV2 = 2,
		UV3 = 3,
		UV4 = 4,
		UV5 = 5,
		UV6 = 6,
		UV7 = 7,
		UV8 = 8,
	}

	public static CameraCallback onPreCull; //Field offset: 0x0
	public static CameraCallback onPreRender; //Field offset: 0x8
	public static CameraCallback onPostRender; //Field offset: 0x10

	public static int allCamerasCount
	{
		 get { } //Length: 52
	}

	public float aspect
	{
		 get { } //Length: 64
	}

	public Color backgroundColor
	{
		 set { } //Length: 88
	}

	public CameraClearFlags clearFlags
	{
		 get { } //Length: 64
		 set { } //Length: 80
	}

	public int cullingMask
	{
		 get { } //Length: 64
		 set { } //Length: 80
	}

	public static Camera current
	{
		[FreeFunction]
		 get { } //Length: 52
	}

	public float depth
	{
		 get { } //Length: 64
		 set { } //Length: 80
	}

	public int eventMask
	{
		 get { } //Length: 64
		 set { } //Length: 80
	}

	[NativeProperty]
	public float farClipPlane
	{
		 get { } //Length: 64
		 set { } //Length: 80
	}

	[NativeProperty]
	public float fieldOfView
	{
		 get { } //Length: 64
		 set { } //Length: 80
	}

	public static Camera main
	{
		[FreeFunction]
		 get { } //Length: 52
	}

	[NativeProperty]
	public float nearClipPlane
	{
		 get { } //Length: 64
		 set { } //Length: 80
	}

	public bool orthographic
	{
		 get { } //Length: 64
		 set { } //Length: 80
	}

	public float orthographicSize
	{
		 get { } //Length: 64
		 set { } //Length: 80
	}

	[NativeProperty]
	public Rect pixelRect
	{
		 get { } //Length: 92
	}

	[NativeProperty]
	public Rect rect
	{
		 get { } //Length: 92
		 set { } //Length: 88
	}

	public int targetDisplay
	{
		 get { } //Length: 64
	}

	public RenderTexture targetTexture
	{
		 get { } //Length: 64
	}

	public TransparencySortMode transparencySortMode
	{
		 get { } //Length: 64
		 set { } //Length: 80
	}

	public bool useOcclusionCulling
	{
		 get { } //Length: 64
	}

	public Camera() { }

	[RequiredByNativeCode]
	private static void FireOnPostRender(Camera cam) { }

	[RequiredByNativeCode]
	private static void FireOnPreCull(Camera cam) { }

	[RequiredByNativeCode]
	private static void FireOnPreRender(Camera cam) { }

	public static int get_allCamerasCount() { }

	public float get_aspect() { }

	public CameraClearFlags get_clearFlags() { }

	public int get_cullingMask() { }

	[FreeFunction]
	public static Camera get_current() { }

	public float get_depth() { }

	public int get_eventMask() { }

	public float get_farClipPlane() { }

	public float get_fieldOfView() { }

	[FreeFunction]
	public static Camera get_main() { }

	public float get_nearClipPlane() { }

	public bool get_orthographic() { }

	public float get_orthographicSize() { }

	public Rect get_pixelRect() { }

	private void get_pixelRect_Injected(out Rect ret) { }

	public Rect get_rect() { }

	private void get_rect_Injected(out Rect ret) { }

	public int get_targetDisplay() { }

	public RenderTexture get_targetTexture() { }

	public TransparencySortMode get_transparencySortMode() { }

	public bool get_useOcclusionCulling() { }

	public static int GetAllCameras(Camera[] cameras) { }

	[FreeFunction]
	private static int GetAllCamerasCount() { }

	[FreeFunction]
	private static int GetAllCamerasImpl(out Camera[] cam) { }

	public Ray ScreenPointToRay(Vector3 pos, MonoOrStereoscopicEye eye) { }

	public Ray ScreenPointToRay(Vector3 pos) { }

	private Ray ScreenPointToRay(Vector2 pos, MonoOrStereoscopicEye eye) { }

	private void ScreenPointToRay_Injected(ref Vector2 pos, MonoOrStereoscopicEye eye, out Ray ret) { }

	public Vector3 ScreenToViewportPoint(Vector3 position) { }

	private void ScreenToViewportPoint_Injected(ref Vector3 position, out Vector3 ret) { }

	public Vector3 ScreenToWorldPoint(Vector3 position, MonoOrStereoscopicEye eye) { }

	public Vector3 ScreenToWorldPoint(Vector3 position) { }

	private void ScreenToWorldPoint_Injected(ref Vector3 position, MonoOrStereoscopicEye eye, out Vector3 ret) { }

	public void set_backgroundColor(Color value) { }

	private void set_backgroundColor_Injected(ref Color value) { }

	public void set_clearFlags(CameraClearFlags value) { }

	public void set_cullingMask(int value) { }

	public void set_depth(float value) { }

	public void set_eventMask(int value) { }

	public void set_farClipPlane(float value) { }

	public void set_fieldOfView(float value) { }

	public void set_nearClipPlane(float value) { }

	public void set_orthographic(bool value) { }

	public void set_orthographicSize(float value) { }

	public void set_rect(Rect value) { }

	private void set_rect_Injected(ref Rect value) { }

	public void set_transparencySortMode(TransparencySortMode value) { }

	public Vector3 ViewportToWorldPoint(Vector3 position) { }

	public Vector3 ViewportToWorldPoint(Vector3 position, MonoOrStereoscopicEye eye) { }

	private void ViewportToWorldPoint_Injected(ref Vector3 position, MonoOrStereoscopicEye eye, out Vector3 ret) { }

	public Vector3 WorldToScreenPoint(Vector3 position, MonoOrStereoscopicEye eye) { }

	public Vector3 WorldToScreenPoint(Vector3 position) { }

	private void WorldToScreenPoint_Injected(ref Vector3 position, MonoOrStereoscopicEye eye, out Vector3 ret) { }

	public Vector3 WorldToViewportPoint(Vector3 position) { }

	public Vector3 WorldToViewportPoint(Vector3 position, MonoOrStereoscopicEye eye) { }

	private void WorldToViewportPoint_Injected(ref Vector3 position, MonoOrStereoscopicEye eye, out Vector3 ret) { }

}

