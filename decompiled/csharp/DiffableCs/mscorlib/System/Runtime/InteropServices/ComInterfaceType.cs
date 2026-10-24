namespace System.Runtime.InteropServices;

[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
public enum ComInterfaceType
{
	InterfaceIsDual = 0,
	InterfaceIsIUnknown = 1,
	InterfaceIsIDispatch = 2,
	InterfaceIsIInspectable = 3,
}

