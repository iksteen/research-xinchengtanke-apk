namespace UnityEngine;

[NativeHeader(/*Cpp2IL Warning: missing at least one required parameter*/)]
[NativeHeader(/*Cpp2IL Warning: missing at least one required parameter*/)]
[NativeHeader(/*Cpp2IL Warning: missing at least one required parameter*/)]
[NativeHeader(/*Cpp2IL Warning: missing at least one required parameter*/)]
[NativeHeader(/*Cpp2IL Warning: missing at least one required parameter*/)]
[NativeHeader(/*Cpp2IL Warning: missing at least one required parameter*/)]
[NativeHeader(/*Cpp2IL Warning: missing at least one required parameter*/)]
[NativeHeader(/*Cpp2IL Warning: missing at least one required parameter*/)]
[RequireComponent(/*Cpp2IL Warning: missing at least one required parameter*/)]
[UsedByNativeCode]
public sealed class ParticleSystem : Component
{
	internal struct EmitParams
	{
		[NativeName(/*Cpp2IL Warning: missing at least one required parameter*/)]
		private Particle m_Particle; //Field offset: 0x0
		[NativeName(/*Cpp2IL Warning: missing at least one required parameter*/)]
		private bool m_PositionSet; //Field offset: 0x84
		[NativeName(/*Cpp2IL Warning: missing at least one required parameter*/)]
		private bool m_VelocitySet; //Field offset: 0x85
		[NativeName(/*Cpp2IL Warning: missing at least one required parameter*/)]
		private bool m_AxisOfRotationSet; //Field offset: 0x86
		[NativeName(/*Cpp2IL Warning: missing at least one required parameter*/)]
		private bool m_RotationSet; //Field offset: 0x87
		[NativeName(/*Cpp2IL Warning: missing at least one required parameter*/)]
		private bool m_AngularVelocitySet; //Field offset: 0x88
		[NativeName(/*Cpp2IL Warning: missing at least one required parameter*/)]
		private bool m_StartSizeSet; //Field offset: 0x89
		[NativeName(/*Cpp2IL Warning: missing at least one required parameter*/)]
		private bool m_StartColorSet; //Field offset: 0x8A
		[NativeName(/*Cpp2IL Warning: missing at least one required parameter*/)]
		private bool m_RandomSeedSet; //Field offset: 0x8B
		[NativeName(/*Cpp2IL Warning: missing at least one required parameter*/)]
		private bool m_StartLifetimeSet; //Field offset: 0x8C
		[NativeName(/*Cpp2IL Warning: missing at least one required parameter*/)]
		private bool m_MeshIndexSet; //Field offset: 0x8D
		[NativeName(/*Cpp2IL Warning: missing at least one required parameter*/)]
		private bool m_ApplyShapeToPosition; //Field offset: 0x8E

	}

	[RequiredByNativeCode]
	internal struct Particle
	{
		private Vector3 m_Position; //Field offset: 0x0
		private Vector3 m_Velocity; //Field offset: 0xC
		private Vector3 m_AnimatedVelocity; //Field offset: 0x18
		private Vector3 m_InitialVelocity; //Field offset: 0x24
		private Vector3 m_AxisOfRotation; //Field offset: 0x30
		private Vector3 m_Rotation; //Field offset: 0x3C
		private Vector3 m_AngularVelocity; //Field offset: 0x48
		private Vector3 m_StartSize; //Field offset: 0x54
		private Color32 m_StartColor; //Field offset: 0x60
		private uint m_RandomSeed; //Field offset: 0x64
		private uint m_ParentRandomSeed; //Field offset: 0x68
		private float m_Lifetime; //Field offset: 0x6C
		private float m_StartLifetime; //Field offset: 0x70
		private int m_MeshIndex; //Field offset: 0x74
		private float m_EmitAccumulator0; //Field offset: 0x78
		private float m_EmitAccumulator1; //Field offset: 0x7C
		private uint m_Flags; //Field offset: 0x80

		public Vector3 angularVelocity3D
		{
			 set { } //Length: 44
		}

		[Obsolete]
		public float lifetime
		{
			 set { } //Length: 8
		}

		public Vector3 position
		{
			 set { } //Length: 12
		}

		public uint randomSeed
		{
			 set { } //Length: 8
		}

		public float remainingLifetime
		{
			 set { } //Length: 8
		}

		public Vector3 rotation3D
		{
			 set { } //Length: 44
		}

		public Color32 startColor
		{
			 set { } //Length: 8
		}

		public float startLifetime
		{
			 set { } //Length: 8
		}

		public float startSize
		{
			 set { } //Length: 12
		}

		public Vector3 velocity
		{
			 set { } //Length: 12
		}

		public void set_angularVelocity3D(Vector3 value) { }

		public void set_lifetime(float value) { }

		public void set_position(Vector3 value) { }

		public void set_randomSeed(uint value) { }

		public void set_remainingLifetime(float value) { }

		public void set_rotation3D(Vector3 value) { }

		public void set_startColor(Color32 value) { }

		public void set_startLifetime(float value) { }

		public void set_startSize(float value) { }

		public void set_velocity(Vector3 value) { }

	}


	[Obsolete]
	public void Emit(Vector3 position, Vector3 velocity, float size, float lifetime, Color32 color) { }

	[Obsolete]
	public void Emit(Particle particle) { }

	[RequiredByNativeCode]
	public void Emit(int count) { }

	[NativeName(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public void Emit(EmitParams emitParams, int count) { }

	private void Emit_Injected(ref EmitParams emitParams, int count) { }

	[NativeName(/*Cpp2IL Warning: missing at least one required parameter*/)]
	private void Emit_Internal(int count) { }

	[NativeName(/*Cpp2IL Warning: missing at least one required parameter*/)]
	private void EmitOld_Internal(ref Particle particle) { }

}

