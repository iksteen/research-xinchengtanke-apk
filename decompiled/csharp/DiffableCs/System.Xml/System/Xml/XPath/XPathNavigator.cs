namespace System.Xml.XPath;

[DebuggerDisplay(/*Cpp2IL Warning: missing at least one required parameter*/)]
public abstract class XPathNavigator : XPathItem, ICloneable, IXmlNamespaceResolver
{
	internal static readonly XPathNavigatorKeyComparer comparer; //Field offset: 0x0
	internal static readonly Char[] NodeTypeLetter; //Field offset: 0x8
	internal static readonly Char[] UniqueIdTbl; //Field offset: 0x10
	internal static readonly Int32[] ContentKindMasks; //Field offset: 0x18

	public abstract string LocalName
	{
		 get { } //Length: 0
	}

	public abstract string NamespaceURI
	{
		 get { } //Length: 0
	}

	public abstract XmlNameTable NameTable
	{
		 get { } //Length: 0
	}

	public abstract XPathNodeType NodeType
	{
		 get { } //Length: 0
	}

	public abstract string Prefix
	{
		 get { } //Length: 0
	}

	public override IXmlSchemaInfo SchemaInfo
	{
		 get { } //Length: 76
	}

	public virtual object TypedValue
	{
		 get { } //Length: 768
	}

	public override object UnderlyingObject
	{
		 get { } //Length: 8
	}

	public virtual bool ValueAsBoolean
	{
		 get { } //Length: 752
	}

	public virtual DateTime ValueAsDateTime
	{
		 get { } //Length: 760
	}

	public virtual double ValueAsDouble
	{
		 get { } //Length: 760
	}

	public virtual int ValueAsInt
	{
		 get { } //Length: 760
	}

	public virtual long ValueAsLong
	{
		 get { } //Length: 760
	}

	public virtual Type ValueType
	{
		 get { } //Length: 568
	}

	public virtual XmlSchemaType XmlType
	{
		 get { } //Length: 420
	}

	private static XPathNavigator() { }

	protected XPathNavigator() { }

	public abstract XPathNavigator Clone() { }

	public abstract string get_LocalName() { }

	public abstract string get_NamespaceURI() { }

	public abstract XmlNameTable get_NameTable() { }

	public abstract XPathNodeType get_NodeType() { }

	public abstract string get_Prefix() { }

	public override IXmlSchemaInfo get_SchemaInfo() { }

	public virtual object get_TypedValue() { }

	public override object get_UnderlyingObject() { }

	public virtual bool get_ValueAsBoolean() { }

	public virtual DateTime get_ValueAsDateTime() { }

	public virtual double get_ValueAsDouble() { }

	public virtual int get_ValueAsInt() { }

	public virtual long get_ValueAsLong() { }

	public virtual Type get_ValueType() { }

	public virtual XmlSchemaType get_XmlType() { }

	public override IDictionary<String, String> GetNamespacesInScope(XmlNamespaceScope scope) { }

	public abstract bool IsSamePosition(XPathNavigator other) { }

	internal static bool IsText(XPathNodeType type) { }

	public override string LookupNamespace(string prefix) { }

	public override string LookupPrefix(string namespaceURI) { }

	public abstract bool MoveToFirstNamespace(XPathNamespaceScope namespaceScope) { }

	public override bool MoveToNamespace(string name) { }

	public abstract bool MoveToNextNamespace(XPathNamespaceScope namespaceScope) { }

	public abstract bool MoveToParent() { }

	private override object System.ICloneable.Clone() { }

	public virtual string ToString() { }

	public virtual object ValueAs(Type returnType, IXmlNamespaceResolver nsResolver) { }

}

