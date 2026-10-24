namespace System.Xml.Schema;

public abstract class XmlSchemaFacet : XmlSchemaAnnotated
{
	private string value; //Field offset: 0x50
	private bool isFixed; //Field offset: 0x58
	private FacetType facetType; //Field offset: 0x5C

	internal FacetType FacetType
	{
		internal get { } //Length: 8
		internal set { } //Length: 8
	}

	[DefaultValue(/*Cpp2IL Warning: missing at least one required parameter*/)]
	[XmlAttribute(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public override bool IsFixed
	{
		 get { } //Length: 8
		 set { } //Length: 192
	}

	[XmlAttribute(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public string Value
	{
		 get { } //Length: 8
		 set { } //Length: 8
	}

	protected XmlSchemaFacet() { }

	internal FacetType get_FacetType() { }

	public override bool get_IsFixed() { }

	public string get_Value() { }

	internal void set_FacetType(FacetType value) { }

	public override void set_IsFixed(bool value) { }

	public void set_Value(string value) { }

}

