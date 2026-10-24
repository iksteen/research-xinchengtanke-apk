namespace UnityEngine;

[NativeHeader(/*Cpp2IL Warning: missing at least one required parameter*/)]
[NativeHeader(/*Cpp2IL Warning: missing at least one required parameter*/)]
[NativeHeader(/*Cpp2IL Warning: missing at least one required parameter*/)]
[RequiredByNativeCode]
public class Transform : Component, IEnumerable
{
	private class Enumerator : IEnumerator
	{
		private Transform outer; //Field offset: 0x10
		private int currentIndex; //Field offset: 0x18

		public override object Current
		{
			 get { } //Length: 88
		}

		internal Enumerator(Transform outer) { }

		public override object get_Current() { }

		public override bool MoveNext() { }

		public override void Reset() { }

	}


	public int childCount
	{
		[NativeMethod]
		 get { } //Length: 64
	}

	public Vector3 forward
	{
		 get { } //Length: 84
		 set { } //Length: 92
	}

	[NativeProperty]
	public bool hasChanged
	{
		 get { } //Length: 64
		 set { } //Length: 80
	}

	public Vector3 localEulerAngles
	{
		 set { } //Length: 56
	}

	public Vector3 localPosition
	{
		 get { } //Length: 96
		 set { } //Length: 88
	}

	public Quaternion localRotation
	{
		 get { } //Length: 92
		 set { } //Length: 88
	}

	public Vector3 localScale
	{
		 get { } //Length: 96
		 set { } //Length: 88
	}

	public Matrix4x4 localToWorldMatrix
	{
		 get { } //Length: 120
	}

	public Vector3 lossyScale
	{
		[NativeMethod]
		 get { } //Length: 96
	}

	public Transform parent
	{
		 get { } //Length: 64
		 set { } //Length: 224
	}

	internal Transform parentInternal
	{
		internal get { } //Length: 64
		internal set { } //Length: 84
	}

	public Vector3 position
	{
		 get { } //Length: 96
		 set { } //Length: 88
	}

	public Quaternion rotation
	{
		 get { } //Length: 92
		 set { } //Length: 88
	}

	public Vector3 up
	{
		 get { } //Length: 84
	}

	public Matrix4x4 worldToLocalMatrix
	{
		 get { } //Length: 120
	}

	protected Transform() { }

	public Transform Find(string n) { }

	[Obsolete]
	public Transform FindChild(string n) { }

	[FreeFunction]
	private static Transform FindRelativeTransformWithPath(Transform transform, string path, bool isActiveOnly) { }

	[NativeMethod]
	public int get_childCount() { }

	public Vector3 get_forward() { }

	public bool get_hasChanged() { }

	public Vector3 get_localPosition() { }

	private void get_localPosition_Injected(out Vector3 ret) { }

	public Quaternion get_localRotation() { }

	private void get_localRotation_Injected(out Quaternion ret) { }

	public Vector3 get_localScale() { }

	private void get_localScale_Injected(out Vector3 ret) { }

	public Matrix4x4 get_localToWorldMatrix() { }

	private void get_localToWorldMatrix_Injected(out Matrix4x4 ret) { }

	[NativeMethod]
	public Vector3 get_lossyScale() { }

	private void get_lossyScale_Injected(out Vector3 ret) { }

	public Transform get_parent() { }

	internal Transform get_parentInternal() { }

	public Vector3 get_position() { }

	private void get_position_Injected(out Vector3 ret) { }

	public Quaternion get_rotation() { }

	private void get_rotation_Injected(out Quaternion ret) { }

	public Vector3 get_up() { }

	public Matrix4x4 get_worldToLocalMatrix() { }

	private void get_worldToLocalMatrix_Injected(out Matrix4x4 ret) { }

	[FreeFunction]
	[NativeThrows]
	public Transform GetChild(int index) { }

	public override IEnumerator GetEnumerator() { }

	private Transform GetParent() { }

	public int GetSiblingIndex() { }

	[FreeFunction]
	private void Internal_LookAt(Vector3 worldPosition, Vector3 worldUp) { }

	private void Internal_LookAt_Injected(ref Vector3 worldPosition, ref Vector3 worldUp) { }

	public Vector3 InverseTransformDirection(Vector3 direction) { }

	private void InverseTransformDirection_Injected(ref Vector3 direction, out Vector3 ret) { }

	public Vector3 InverseTransformPoint(Vector3 position) { }

	private void InverseTransformPoint_Injected(ref Vector3 position, out Vector3 ret) { }

	[FreeFunction]
	public bool IsChildOf(Transform parent) { }

	public void LookAt(Vector3 worldPosition, Vector3 worldUp) { }

	public void LookAt(Transform target) { }

	public void Rotate(float xAngle, float yAngle, float zAngle, Space relativeTo) { }

	public void Rotate(Vector3 eulers, Space relativeTo) { }

	public void Rotate(float xAngle, float yAngle, float zAngle) { }

	public void Rotate(Vector3 axis, float angle) { }

	public void Rotate(Vector3 axis, float angle, Space relativeTo) { }

	public void Rotate(Vector3 eulers) { }

	[NativeMethod]
	internal void RotateAroundInternal(Vector3 axis, float angle) { }

	private void RotateAroundInternal_Injected(ref Vector3 axis, float angle) { }

	public void set_forward(Vector3 value) { }

	public void set_hasChanged(bool value) { }

	public void set_localEulerAngles(Vector3 value) { }

	public void set_localPosition(Vector3 value) { }

	private void set_localPosition_Injected(ref Vector3 value) { }

	public void set_localRotation(Quaternion value) { }

	private void set_localRotation_Injected(ref Quaternion value) { }

	public void set_localScale(Vector3 value) { }

	private void set_localScale_Injected(ref Vector3 value) { }

	public void set_parent(Transform value) { }

	internal void set_parentInternal(Transform value) { }

	public void set_position(Vector3 value) { }

	private void set_position_Injected(ref Vector3 value) { }

	public void set_rotation(Quaternion value) { }

	private void set_rotation_Injected(ref Quaternion value) { }

	public void SetAsFirstSibling() { }

	public void SetAsLastSibling() { }

	[FreeFunction]
	public void SetParent(Transform parent, bool worldPositionStays) { }

	public void SetParent(Transform p) { }

	public void SetSiblingIndex(int index) { }

	public Vector3 TransformDirection(float x, float y, float z) { }

	public Vector3 TransformDirection(Vector3 direction) { }

	private void TransformDirection_Injected(ref Vector3 direction, out Vector3 ret) { }

	public Vector3 TransformPoint(float x, float y, float z) { }

	public Vector3 TransformPoint(Vector3 position) { }

	private void TransformPoint_Injected(ref Vector3 position, out Vector3 ret) { }

	public void Translate(float x, float y, float z) { }

	public void Translate(float x, float y, float z, Space relativeTo) { }

	public void Translate(Vector3 translation) { }

	public void Translate(Vector3 translation, Space relativeTo) { }

}

