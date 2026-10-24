namespace System.Xml.Linq;

public sealed class XNamespace
{
	private static XHashtable<WeakReference> namespaces; //Field offset: 0x0
	private static WeakReference refNone; //Field offset: 0x8
	private static WeakReference refXml; //Field offset: 0x10
	private static WeakReference refXmlns; //Field offset: 0x18
	private string namespaceName; //Field offset: 0x10
	private int hashCode; //Field offset: 0x18
	private XHashtable<XName> names; //Field offset: 0x20

	public string NamespaceName
	{
		 get { } //Length: 8
	}

	public static XNamespace None
	{
		 get { } //Length: 108
	}

	public static XNamespace Xml
	{
		 get { } //Length: 100
	}

	public static XNamespace Xmlns
	{
		 get { } //Length: 100
	}

	internal XNamespace(string namespaceName) { }

	private static XNamespace EnsureNamespace(ref WeakReference refNmsp, string namespaceName) { }

	public virtual bool Equals(object obj) { }

	private static string ExtractLocalName(XName n) { }

	private static string ExtractNamespace(WeakReference r) { }

	public static XNamespace Get(string namespaceName) { }

	internal static XNamespace Get(string namespaceName, int index, int count) { }

	public string get_NamespaceName() { }

	public static XNamespace get_None() { }

	public static XNamespace get_Xml() { }

	public static XNamespace get_Xmlns() { }

	public virtual int GetHashCode() { }

	public XName GetName(string localName) { }

	internal XName GetName(string localName, int index, int count) { }

	public static bool op_Equality(XNamespace left, XNamespace right) { }

	public static bool op_Inequality(XNamespace left, XNamespace right) { }

	public virtual string ToString() { }

}

