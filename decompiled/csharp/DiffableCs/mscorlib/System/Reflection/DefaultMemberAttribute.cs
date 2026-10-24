namespace System.Reflection;

[AttributeUsage(/*Cpp2IL Warning: missing at least one required parameter*/)]
[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
public sealed class DefaultMemberAttribute : Attribute
{
	private string m_memberName; //Field offset: 0x10

	public string MemberName
	{
		 get { } //Length: 8
	}

	public DefaultMemberAttribute(string memberName) { }

	public string get_MemberName() { }

}

