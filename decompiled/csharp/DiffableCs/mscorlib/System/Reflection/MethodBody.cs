namespace System.Reflection;

[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
public class MethodBody
{
	private ExceptionHandlingClause[] clauses; //Field offset: 0x10
	private LocalVariableInfo[] locals; //Field offset: 0x18
	private Byte[] il; //Field offset: 0x20
	private bool init_locals; //Field offset: 0x28
	private int sig_token; //Field offset: 0x2C
	private int max_stack; //Field offset: 0x30

	protected MethodBody() { }

}

