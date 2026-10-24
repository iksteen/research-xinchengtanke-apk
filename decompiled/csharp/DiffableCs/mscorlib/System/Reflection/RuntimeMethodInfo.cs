namespace System.Reflection;

internal abstract class RuntimeMethodInfo : MethodInfo, ISerializable
{

	internal BindingFlags BindingFlags
	{
		internal get { } //Length: 8
	}

	public virtual Module Module
	{
		 get { } //Length: 4
	}

	private RuntimeType ReflectedTypeInternal
	{
		private get { } //Length: 136
	}

	protected RuntimeMethodInfo() { }

	internal virtual string FormatNameAndSig(bool serialization) { }

	internal BindingFlags get_BindingFlags() { }

	public virtual Module get_Module() { }

	private RuntimeType get_ReflectedTypeInternal() { }

	public override void GetObjectData(SerializationInfo info, StreamingContext context) { }

	internal RuntimeModule GetRuntimeModule() { }

	internal string SerializationToString() { }

	public virtual string ToString() { }

}

