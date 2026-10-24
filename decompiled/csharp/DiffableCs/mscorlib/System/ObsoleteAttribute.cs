namespace System;

[AttributeUsage(/*Cpp2IL Warning: missing at least one required parameter*/)]
[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
public sealed class ObsoleteAttribute : Attribute
{
	private string _message; //Field offset: 0x10
	private bool _error; //Field offset: 0x18

	public string Message
	{
		 get { } //Length: 8
	}

	public ObsoleteAttribute() { }

	public ObsoleteAttribute(string message) { }

	public ObsoleteAttribute(string message, bool error) { }

	public string get_Message() { }

}

