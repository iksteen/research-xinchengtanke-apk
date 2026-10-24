namespace UnityEngine.LowLevel;

[MovedFrom(/*Cpp2IL Warning: missing at least one required parameter*/)]
[NativeType]
[RequiredByNativeCode]
internal struct PlayerLoopSystemInternal
{
	public Type type; //Field offset: 0x0
	public UpdateFunction updateDelegate; //Field offset: 0x8
	public IntPtr updateFunction; //Field offset: 0x10
	public IntPtr loopConditionFunction; //Field offset: 0x18
	public int numSubSystems; //Field offset: 0x20

}

