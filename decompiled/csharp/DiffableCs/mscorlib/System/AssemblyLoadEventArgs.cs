namespace System;

[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
public class AssemblyLoadEventArgs : EventArgs
{
	private Assembly m_loadedAssembly; //Field offset: 0x10

	public AssemblyLoadEventArgs(Assembly loadedAssembly) { }

}

