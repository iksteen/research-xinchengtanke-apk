namespace System.Reflection;

internal abstract class RuntimeFieldInfo : FieldInfo, ISerializable
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

	protected RuntimeFieldInfo() { }

	internal BindingFlags get_BindingFlags() { }

	public virtual Module get_Module() { }

	private RuntimeType get_ReflectedTypeInternal() { }

	internal RuntimeType GetDeclaringTypeInternal() { }

	public override void GetObjectData(SerializationInfo info, StreamingContext context) { }

	internal RuntimeModule GetRuntimeModule() { }

}

