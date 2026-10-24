namespace System.Runtime.InteropServices;

[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
public interface ICustomMarshaler
{

	public void CleanUpManagedData(object ManagedObj) { }

	public void CleanUpNativeData(IntPtr pNativeData) { }

	public int GetNativeDataSize() { }

	public IntPtr MarshalManagedToNative(object ManagedObj) { }

	public object MarshalNativeToManaged(IntPtr pNativeData) { }

}

