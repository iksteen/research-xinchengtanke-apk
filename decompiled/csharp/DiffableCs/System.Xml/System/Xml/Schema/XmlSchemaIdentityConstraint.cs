namespace System.Xml.Schema;

public class XmlSchemaIdentityConstraint : XmlSchemaAnnotated
{
	private string name; //Field offset: 0x50
	private XmlSchemaXPath selector; //Field offset: 0x58
	private XmlSchemaObjectCollection fields; //Field offset: 0x60
	private XmlQualifiedName qualifiedName; //Field offset: 0x68
	private CompiledIdentityConstraint compiledConstraint; //Field offset: 0x70

	[XmlIgnore]
	internal CompiledIdentityConstraint CompiledConstraint
	{
		internal get { } //Length: 8
		internal set { } //Length: 8
	}

	[XmlElement(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public XmlSchemaObjectCollection Fields
	{
		 get { } //Length: 8
	}

	[XmlAttribute(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public string Name
	{
		 get { } //Length: 8
		 set { } //Length: 8
	}

	[XmlIgnore]
	internal virtual string NameAttribute
	{
		internal get { } //Length: 8
		internal set { } //Length: 8
	}

	[XmlIgnore]
	public XmlQualifiedName QualifiedName
	{
		 get { } //Length: 8
	}

	[XmlElement(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public XmlSchemaXPath Selector
	{
		 get { } //Length: 8
		 set { } //Length: 8
	}

	public XmlSchemaIdentityConstraint() { }

	internal CompiledIdentityConstraint get_CompiledConstraint() { }

	public XmlSchemaObjectCollection get_Fields() { }

	public string get_Name() { }

	internal virtual string get_NameAttribute() { }

	public XmlQualifiedName get_QualifiedName() { }

	public XmlSchemaXPath get_Selector() { }

	internal void set_CompiledConstraint(CompiledIdentityConstraint value) { }

	public void set_Name(string value) { }

	internal virtual void set_NameAttribute(string value) { }

	public void set_Selector(XmlSchemaXPath value) { }

	internal void SetQualifiedName(XmlQualifiedName value) { }

}

