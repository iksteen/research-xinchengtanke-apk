namespace System.Runtime.Serialization;

internal class MemberHolder
{
	internal Type memberType; //Field offset: 0x10
	internal StreamingContext context; //Field offset: 0x18

	internal MemberHolder(Type type, StreamingContext ctx) { }

	public virtual bool Equals(object obj) { }

	public virtual int GetHashCode() { }

}

