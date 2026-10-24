namespace System.Xml.Schema;

public abstract class XmlSchemaParticle : XmlSchemaAnnotated
{
	private class EmptyParticle : XmlSchemaParticle
	{

		internal virtual bool IsEmpty
		{
			internal get { } //Length: 8
		}

		public EmptyParticle() { }

		internal virtual bool get_IsEmpty() { }

	}

	[Flags]
	private enum Occurs
	{
		None = 0,
		Min = 1,
		Max = 2,
	}

	internal static readonly XmlSchemaParticle Empty; //Field offset: 0x0
	private decimal minOccurs; //Field offset: 0x50
	private decimal maxOccurs; //Field offset: 0x60
	private Occurs flags; //Field offset: 0x70

	internal override bool IsEmpty
	{
		internal get { } //Length: 128
	}

	[XmlIgnore]
	public decimal MaxOccurs
	{
		 get { } //Length: 12
		 set { } //Length: 380
	}

	[XmlAttribute(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public string MaxOccursString
	{
		 get { } //Length: 280
		 set { } //Length: 540
	}

	[XmlIgnore]
	public decimal MinOccurs
	{
		 get { } //Length: 12
		 set { } //Length: 316
	}

	[XmlAttribute(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public string MinOccursString
	{
		 get { } //Length: 132
		 set { } //Length: 372
	}

	internal override string NameString
	{
		internal get { } //Length: 76
	}

	private static XmlSchemaParticle() { }

	protected XmlSchemaParticle() { }

	internal override bool get_IsEmpty() { }

	public decimal get_MaxOccurs() { }

	public string get_MaxOccursString() { }

	public decimal get_MinOccurs() { }

	public string get_MinOccursString() { }

	internal override string get_NameString() { }

	internal XmlQualifiedName GetQualifiedName() { }

	public void set_MaxOccurs(decimal value) { }

	public void set_MaxOccursString(string value) { }

	public void set_MinOccurs(decimal value) { }

	public void set_MinOccursString(string value) { }

}

