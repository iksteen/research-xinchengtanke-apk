namespace System.Reflection;

internal abstract class RuntimeAssembly : Assembly
{

	protected RuntimeAssembly() { }

	public virtual AssemblyName GetName(bool copiedName) { }

	public virtual void GetObjectData(SerializationInfo info, StreamingContext context) { }

	internal static RuntimeAssembly LoadWithPartialNameInternal(string partialName, Evidence securityEvidence, ref StackCrawlMark stackMark) { }

	internal static RuntimeAssembly LoadWithPartialNameInternal(AssemblyName an, Evidence securityEvidence, ref StackCrawlMark stackMark) { }

}

