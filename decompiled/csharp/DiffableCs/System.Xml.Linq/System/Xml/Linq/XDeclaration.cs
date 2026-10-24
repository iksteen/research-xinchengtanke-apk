namespace System.Xml.Linq;

public class XDeclaration
{
	private string version; //Field offset: 0x10
	private string encoding; //Field offset: 0x18
	private string standalone; //Field offset: 0x20

	public string Standalone
	{
		 get { } //Length: 8
	}

	public XDeclaration(XDeclaration other) { }

	public string get_Standalone() { }

	public virtual string ToString() { }

}

