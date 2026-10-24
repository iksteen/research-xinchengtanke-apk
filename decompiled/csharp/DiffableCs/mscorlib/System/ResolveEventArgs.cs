namespace System;

[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
public class ResolveEventArgs : EventArgs
{
	private string m_Name; //Field offset: 0x10
	private Assembly m_Requesting; //Field offset: 0x18

	public ResolveEventArgs(string name) { }

	public ResolveEventArgs(string name, Assembly requestingAssembly) { }

}

