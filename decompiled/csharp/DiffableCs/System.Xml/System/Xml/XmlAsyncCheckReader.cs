namespace System.Xml;

[DefaultMember(/*Cpp2IL Warning: missing at least one required parameter*/)]
internal class XmlAsyncCheckReader : XmlReader
{
	private readonly XmlReader coreReader; //Field offset: 0x10
	private Task lastTask; //Field offset: 0x18

	public virtual int AttributeCount
	{
		 get { } //Length: 56
	}

	public virtual string BaseURI
	{
		 get { } //Length: 56
	}

	public virtual bool CanResolveEntity
	{
		 get { } //Length: 56
	}

	internal XmlReader CoreReader
	{
		internal get { } //Length: 8
	}

	public virtual int Depth
	{
		 get { } //Length: 52
	}

	internal virtual IDtdInfo DtdInfo
	{
		internal get { } //Length: 56
	}

	public virtual bool EOF
	{
		 get { } //Length: 56
	}

	public virtual bool IsDefault
	{
		 get { } //Length: 56
	}

	public virtual bool IsEmptyElement
	{
		 get { } //Length: 56
	}

	public virtual string LocalName
	{
		 get { } //Length: 52
	}

	public virtual string Name
	{
		 get { } //Length: 52
	}

	internal virtual XmlNamespaceManager NamespaceManager
	{
		internal get { } //Length: 56
	}

	public virtual string NamespaceURI
	{
		 get { } //Length: 52
	}

	public virtual XmlNameTable NameTable
	{
		 get { } //Length: 56
	}

	public virtual XmlNodeType NodeType
	{
		 get { } //Length: 52
	}

	public virtual string Prefix
	{
		 get { } //Length: 52
	}

	public virtual ReadState ReadState
	{
		 get { } //Length: 56
	}

	public virtual IXmlSchemaInfo SchemaInfo
	{
		 get { } //Length: 56
	}

	public virtual XmlReaderSettings Settings
	{
		 get { } //Length: 164
	}

	public virtual string Value
	{
		 get { } //Length: 52
	}

	public XmlAsyncCheckReader(XmlReader reader) { }

	private void CheckAsync() { }

	public virtual void Close() { }

	public static XmlAsyncCheckReader CreateAsyncCheckWrapper(XmlReader reader) { }

	protected virtual void Dispose(bool disposing) { }

	public virtual int get_AttributeCount() { }

	public virtual string get_BaseURI() { }

	public virtual bool get_CanResolveEntity() { }

	internal XmlReader get_CoreReader() { }

	public virtual int get_Depth() { }

	internal virtual IDtdInfo get_DtdInfo() { }

	public virtual bool get_EOF() { }

	public virtual bool get_IsDefault() { }

	public virtual bool get_IsEmptyElement() { }

	public virtual string get_LocalName() { }

	public virtual string get_Name() { }

	internal virtual XmlNamespaceManager get_NamespaceManager() { }

	public virtual string get_NamespaceURI() { }

	public virtual XmlNameTable get_NameTable() { }

	public virtual XmlNodeType get_NodeType() { }

	public virtual string get_Prefix() { }

	public virtual ReadState get_ReadState() { }

	public virtual IXmlSchemaInfo get_SchemaInfo() { }

	public virtual XmlReaderSettings get_Settings() { }

	public virtual string get_Value() { }

	public virtual string GetAttribute(string name) { }

	public virtual string LookupNamespace(string prefix) { }

	public virtual void MoveToAttribute(int i) { }

	public virtual bool MoveToAttribute(string name) { }

	public virtual XmlNodeType MoveToContent() { }

	public virtual bool MoveToElement() { }

	public virtual bool MoveToFirstAttribute() { }

	public virtual bool MoveToNextAttribute() { }

	public virtual bool Read() { }

	public virtual bool ReadAttributeValue() { }

	public virtual void ResolveEntity() { }

}

