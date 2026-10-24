namespace DG.Tweening.Plugins.Options;

public struct QuaternionOptions : IPlugOptions
{
	internal RotateMode rotateMode; //Field offset: 0x0
	internal AxisConstraint axisConstraint; //Field offset: 0x4
	internal Vector3 up; //Field offset: 0x8

	public override void Reset() { }

}

