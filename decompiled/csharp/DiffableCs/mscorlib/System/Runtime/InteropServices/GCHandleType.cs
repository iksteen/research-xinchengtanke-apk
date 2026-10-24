namespace System.Runtime.InteropServices;

[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
public enum GCHandleType
{
	Weak = 0,
	WeakTrackResurrection = 1,
	Normal = 2,
	Pinned = 3,
}

