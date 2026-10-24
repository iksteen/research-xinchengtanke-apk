namespace System.Reflection;

internal abstract class RuntimeConstructorInfo : ConstructorInfo, ISerializable
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

	protected RuntimeConstructorInfo() { }

	internal BindingFlags get_BindingFlags() { }

	public virtual Module get_Module() { }

	private RuntimeType get_ReflectedTypeInternal() { }

	public override void GetObjectData(SerializationInfo info, StreamingContext context) { }

	internal RuntimeModule GetRuntimeModule() { }

	internal void SerializationInvoke(object target, SerializationInfo info, StreamingContext context) { }

	internal string SerializationToString() { }

}

