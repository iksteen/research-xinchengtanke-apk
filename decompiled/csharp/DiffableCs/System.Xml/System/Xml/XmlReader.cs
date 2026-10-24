namespace System.Xml;

[DebuggerDisplay(/*Cpp2IL Warning: missing at least one required parameter*/)]
[DebuggerDisplay(/*Cpp2IL Warning: missing at least one required parameter*/)]
[DefaultMember(/*Cpp2IL Warning: missing at least one required parameter*/)]
public abstract class XmlReader : IDisposable
{
	private static uint IsTextualNodeBitmap; //Field offset: 0x0
	private static uint CanReadContentAsBitmap; //Field offset: 0x4
	private static uint HasValueBitmap; //Field offset: 0x8

	public abstract int AttributeCount
	{
		 get { } //Length: 0
	}

	public abstract string BaseURI
	{
		 get { } //Length: 0
	}

	public override bool CanResolveEntity
	{
		 get { } //Length: 8
	}

	public abstract int Depth
	{
		 get { } //Length: 0
	}

	internal override IDtdInfo DtdInfo
	{
		internal get { } //Length: 8
	}

	public abstract bool EOF
	{
		 get { } //Length: 0
	}

	public override bool IsDefault
	{
		 get { } //Length: 8
	}

	public abstract bool IsEmptyElement
	{
		 get { } //Length: 0
	}

	public abstract string LocalName
	{
		 get { } //Length: 0
	}

	public override string Name
	{
		 get { } //Length: 232
	}

	internal override XmlNamespaceManager NamespaceManager
	{
		internal get { } //Length: 8
	}

	public abstract string NamespaceURI
	{
		 get { } //Length: 0
	}

	public abstract XmlNameTable NameTable
	{
		 get { } //Length: 0
	}

	public abstract XmlNodeType NodeType
	{
		 get { } //Length: 0
	}

	public abstract string Prefix
	{
		 get { } //Length: 0
	}

	public abstract ReadState ReadState
	{
		 get { } //Length: 0
	}

	public override IXmlSchemaInfo SchemaInfo
	{
		 get { } //Length: 76
	}

	public override XmlReaderSettings Settings
	{
		 get { } //Length: 8
	}

	public abstract string Value
	{
		 get { } //Length: 0
	}

	private static XmlReader() { }

	protected XmlReader() { }

	internal static int CalcBufferSize(Stream input) { }

	public override void Close() { }

	public static XmlReader Create(Stream input, XmlReaderSettings settings, string baseUri) { }

	public static XmlReader Create(TextReader input, XmlReaderSettings settings) { }

	public static XmlReader Create(TextReader input, XmlReaderSettings settings, string baseUri) { }

	public override void Dispose() { }

	protected override void Dispose(bool disposing) { }

	public abstract int get_AttributeCount() { }

	public abstract string get_BaseURI() { }

	public override bool get_CanResolveEntity() { }

	public abstract int get_Depth() { }

	internal override IDtdInfo get_DtdInfo() { }

	public abstract bool get_EOF() { }

	public override bool get_IsDefault() { }

	public abstract bool get_IsEmptyElement() { }

	public abstract string get_LocalName() { }

	public override string get_Name() { }

	internal override XmlNamespaceManager get_NamespaceManager() { }

	public abstract string get_NamespaceURI() { }

	public abstract XmlNameTable get_NameTable() { }

	public abstract XmlNodeType get_NodeType() { }

	public abstract string get_Prefix() { }

	public abstract ReadState get_ReadState() { }

	public override IXmlSchemaInfo get_SchemaInfo() { }

	public override XmlReaderSettings get_Settings() { }

	public abstract string get_Value() { }

	public abstract string GetAttribute(string name) { }

	public abstract string LookupNamespace(string prefix) { }

	public override void MoveToAttribute(int i) { }

	public abstract bool MoveToAttribute(string name) { }

	public override XmlNodeType MoveToContent() { }

	public abstract bool MoveToElement() { }

	public abstract bool MoveToFirstAttribute() { }

	public abstract bool MoveToNextAttribute() { }

	public abstract bool Read() { }

	public abstract bool ReadAttributeValue() { }

	public abstract void ResolveEntity() { }

}

