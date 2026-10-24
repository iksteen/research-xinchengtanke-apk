namespace System;

[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
public class UnhandledExceptionEventArgs : EventArgs
{
	private object _Exception; //Field offset: 0x10
	private bool _IsTerminating; //Field offset: 0x18

	public object ExceptionObject
	{
		[ReliabilityContract(/*Cpp2IL Warning: missing at least one required parameter*/)]
		 get { } //Length: 8
	}

	public bool IsTerminating
	{
		[ReliabilityContract(/*Cpp2IL Warning: missing at least one required parameter*/)]
		 get { } //Length: 8
	}

	public UnhandledExceptionEventArgs(object exception, bool isTerminating) { }

	[ReliabilityContract(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public object get_ExceptionObject() { }

	[ReliabilityContract(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public bool get_IsTerminating() { }

}

