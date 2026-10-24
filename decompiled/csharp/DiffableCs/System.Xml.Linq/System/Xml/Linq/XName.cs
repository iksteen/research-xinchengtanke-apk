namespace System.Xml.Linq;

[KnownType(/*Cpp2IL Warning: missing at least one required parameter*/)]
public sealed class XName : IEquatable<XName>, ISerializable
{
	private XNamespace ns; //Field offset: 0x10
	private string localName; //Field offset: 0x18
	private int hashCode; //Field offset: 0x20

	public string LocalName
	{
		 get { } //Length: 8
	}

	public XNamespace Namespace
	{
		 get { } //Length: 8
	}

	public string NamespaceName
	{
		 get { } //Length: 28
	}

	internal XName(XNamespace ns, string localName) { }

	internal XName() { }

	public virtual bool Equals(object obj) { }

	public static XName Get(string expandedName) { }

	public string get_LocalName() { }

	public XNamespace get_Namespace() { }

	public string get_NamespaceName() { }

	public virtual int GetHashCode() { }

	public static bool op_Equality(XName left, XName right) { }

	[CLSCompliant(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public static XName op_Implicit(string expandedName) { }

	public static bool op_Inequality(XName left, XName right) { }

	private override bool System.IEquatable<System.Xml.Linq.XName>.Equals(XName other) { }

	private override void System.Runtime.Serialization.ISerializable.GetObjectData(SerializationInfo info, StreamingContext context) { }

	public virtual string ToString() { }

}

