namespace System.Runtime.CompilerServices;

[AttributeUsage(/*Cpp2IL Warning: missing at least one required parameter*/)]
[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
public class CompilationRelaxationsAttribute : Attribute
{
	private int m_relaxations; //Field offset: 0x10

	public int CompilationRelaxations
	{
		 get { } //Length: 8
	}

	public CompilationRelaxationsAttribute(int relaxations) { }

	public CompilationRelaxationsAttribute(CompilationRelaxations relaxations) { }

	public int get_CompilationRelaxations() { }

}

