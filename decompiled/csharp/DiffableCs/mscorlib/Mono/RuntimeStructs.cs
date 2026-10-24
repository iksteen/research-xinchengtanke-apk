namespace Mono;

internal static class RuntimeStructs
{
	public struct GenericParamInfo
	{
		internal MonoClass* pklass; //Field offset: 0x0
		internal IntPtr name; //Field offset: 0x8
		internal ushort flags; //Field offset: 0x10
		internal uint token; //Field offset: 0x14
		internal MonoClass** constraints; //Field offset: 0x18

	}

	public struct GPtrArray
	{
		internal IntPtr* data; //Field offset: 0x0
		internal int len; //Field offset: 0x8

	}

	private struct HandleStackMark
	{
		private int size; //Field offset: 0x0
		private int interior_size; //Field offset: 0x4
		private IntPtr chunk; //Field offset: 0x8

	}

	public struct MonoClass
	{

	}

	private struct MonoError
	{
		private ushort error_code; //Field offset: 0x0
		private ushort hidden_0; //Field offset: 0x2
		private IntPtr hidden_1; //Field offset: 0x8
		private IntPtr hidden_2; //Field offset: 0x10
		private IntPtr hidden_3; //Field offset: 0x18
		private IntPtr hidden_4; //Field offset: 0x20
		private IntPtr hidden_5; //Field offset: 0x28
		private IntPtr hidden_6; //Field offset: 0x30
		private IntPtr hidden_7; //Field offset: 0x38
		private IntPtr hidden_8; //Field offset: 0x40
		private IntPtr hidden_11; //Field offset: 0x48
		private IntPtr hidden_12; //Field offset: 0x50
		private IntPtr hidden_13; //Field offset: 0x58
		private IntPtr hidden_14; //Field offset: 0x60
		private IntPtr hidden_15; //Field offset: 0x68
		private IntPtr hidden_16; //Field offset: 0x70
		private IntPtr hidden_17; //Field offset: 0x78
		private IntPtr hidden_18; //Field offset: 0x80

	}

	public struct RemoteClass
	{
		internal IntPtr default_vtable; //Field offset: 0x0
		internal IntPtr xdomain_vtable; //Field offset: 0x8
		internal MonoClass* proxy_class; //Field offset: 0x10
		internal IntPtr proxy_class_name; //Field offset: 0x18
		internal uint interface_count; //Field offset: 0x20

	}


}

