namespace System.Collections;

[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
public sealed class Comparer : IComparer, ISerializable
{
	public static readonly Comparer Default; //Field offset: 0x0
	public static readonly Comparer DefaultInvariant; //Field offset: 0x8
	private CompareInfo m_compareInfo; //Field offset: 0x10

	private static Comparer() { }

	private Comparer() { }

	public Comparer(CultureInfo culture) { }

	private Comparer(SerializationInfo info, StreamingContext context) { }

	public override int Compare(object a, object b) { }

	public override void GetObjectData(SerializationInfo info, StreamingContext context) { }

}

