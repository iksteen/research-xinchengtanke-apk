namespace Unity.Jobs;

[NativeType]
public struct JobHandle
{
	[NativeDisableUnsafePtrRestriction]
	internal IntPtr jobGroup; //Field offset: 0x0
	internal int version; //Field offset: 0x8

	[NativeMethod]
	public static void ScheduleBatchedJobs() { }

}

