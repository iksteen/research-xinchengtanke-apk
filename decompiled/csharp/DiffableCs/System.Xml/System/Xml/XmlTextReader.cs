namespace System.Xml;

[EditorBrowsable(/*Cpp2IL Warning: missing at least one required parameter*/)]
public class XmlTextReader : XmlReader, IXmlLineInfo, IXmlNamespaceResolver
{
	private XmlTextReaderImpl impl; //Field offset: 0x10

	public virtual int AttributeCount
	{
		 get { } //Length: 36
	}

	public virtual string BaseURI
	{
		 get { } //Length: 36
	}

	public virtual bool CanResolveEntity
	{
		 get { } //Length: 8
	}

	public virtual int Depth
	{
		 get { } //Length: 32
	}

	internal virtual IDtdInfo DtdInfo
	{
		internal get { } //Length: 36
	}

	public EntityHandling EntityHandling
	{
		 set { } //Length: 24
	}

	public virtual bool EOF
	{
		 get { } //Length: 36
	}

	internal XmlTextReaderImpl Impl
	{
		internal get { } //Length: 8
	}

	public virtual bool IsDefault
	{
		 get { } //Length: 36
	}

	public virtual bool IsEmptyElement
	{
		 get { } //Length: 36
	}

	public override int LineNumber
	{
		 get { } //Length: 40
	}

	public override int LinePosition
	{
		 get { } //Length: 40
	}

	public virtual string LocalName
	{
		 get { } //Length: 32
	}

	public virtual string Name
	{
		 get { } //Length: 32
	}

	internal virtual XmlNamespaceManager NamespaceManager
	{
		internal get { } //Length: 36
	}

	public virtual string NamespaceURI
	{
		 get { } //Length: 32
	}

	public virtual XmlNameTable NameTable
	{
		 get { } //Length: 36
	}

	public virtual XmlNodeType NodeType
	{
		 get { } //Length: 32
	}

	public virtual string Prefix
	{
		 get { } //Length: 32
	}

	public virtual ReadState ReadState
	{
		 get { } //Length: 36
	}

	public virtual string Value
	{
		 get { } //Length: 32
	}

	public XmlResolver XmlResolver
	{
		 set { } //Length: 24
	}

	internal bool XmlValidatingReaderCompatibilityMode
	{
		internal set { } //Length: 28
	}

	public XmlTextReader(string url, Stream input, XmlNameTable nt) { }

	public XmlTextReader(TextReader input, XmlNameTable nt) { }

	public virtual void Close() { }

	public virtual int get_AttributeCount() { }

	public virtual string get_BaseURI() { }

	public virtual bool get_CanResolveEntity() { }

	public virtual int get_Depth() { }

	internal virtual IDtdInfo get_DtdInfo() { }

	public virtual bool get_EOF() { }

	internal XmlTextReaderImpl get_Impl() { }

	public virtual bool get_IsDefault() { }

	public virtual bool get_IsEmptyElement() { }

	public override int get_LineNumber() { }

	public override int get_LinePosition() { }

	public virtual string get_LocalName() { }

	public virtual string get_Name() { }

	internal virtual XmlNamespaceManager get_NamespaceManager() { }

	public virtual string get_NamespaceURI() { }

	public virtual XmlNameTable get_NameTable() { }

	public virtual XmlNodeType get_NodeType() { }

	public virtual string get_Prefix() { }

	public virtual ReadState get_ReadState() { }

	public virtual string get_Value() { }

	public virtual string GetAttribute(string name) { }

	public override bool HasLineInfo() { }

	public virtual string LookupNamespace(string prefix) { }

	public virtual void MoveToAttribute(int i) { }

	public virtual bool MoveToAttribute(string name) { }

	public virtual bool MoveToElement() { }

	public virtual bool MoveToFirstAttribute() { }

	public virtual bool MoveToNextAttribute() { }

	public virtual bool Read() { }

	public virtual bool ReadAttributeValue() { }

	public virtual void ResolveEntity() { }

	public void set_EntityHandling(EntityHandling value) { }

	public void set_XmlResolver(XmlResolver value) { }

	internal void set_XmlValidatingReaderCompatibilityMode(bool value) { }

	private override IDictionary<String, String> System.Xml.IXmlNamespaceResolver.GetNamespacesInScope(XmlNamespaceScope scope) { }

	private override string System.Xml.IXmlNamespaceResolver.LookupNamespace(string prefix) { }

	private override string System.Xml.IXmlNamespaceResolver.LookupPrefix(string namespaceName) { }

}

