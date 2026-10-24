namespace System.Runtime.Remoting.Metadata;

[AttributeUsage(/*Cpp2IL Warning: missing at least one required parameter*/)]
[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
public sealed class SoapMethodAttribute : SoapAttribute
{
	private string _responseElement; //Field offset: 0x28
	private string _responseNamespace; //Field offset: 0x30
	private string _returnElement; //Field offset: 0x38
	private string _soapAction; //Field offset: 0x40
	private bool _useAttribute; //Field offset: 0x48
	private string _namespace; //Field offset: 0x50

	public virtual bool UseAttribute
	{
		 get { } //Length: 8
	}

	public virtual string XmlNamespace
	{
		 get { } //Length: 8
	}

	public SoapMethodAttribute() { }

	public virtual bool get_UseAttribute() { }

	public virtual string get_XmlNamespace() { }

	internal virtual void SetReflectionObject(object reflectionObject) { }

}

