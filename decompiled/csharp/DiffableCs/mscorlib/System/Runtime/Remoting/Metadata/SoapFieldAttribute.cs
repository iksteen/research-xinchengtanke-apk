namespace System.Runtime.Remoting.Metadata;

[AttributeUsage(/*Cpp2IL Warning: missing at least one required parameter*/)]
[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
public sealed class SoapFieldAttribute : SoapAttribute
{
	private string _elementName; //Field offset: 0x28
	private bool _isElement; //Field offset: 0x30

	public string XmlElementName
	{
		 get { } //Length: 8
	}

	public SoapFieldAttribute() { }

	public string get_XmlElementName() { }

	public bool IsInteropXmlElement() { }

	internal virtual void SetReflectionObject(object reflectionObject) { }

}

