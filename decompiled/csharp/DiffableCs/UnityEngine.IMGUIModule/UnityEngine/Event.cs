namespace UnityEngine;

[NativeHeader(/*Cpp2IL Warning: missing at least one required parameter*/)]
[StaticAccessor(/*Cpp2IL Warning: missing at least one required parameter*/)]
public sealed class Event
{
	private static Event s_Current; //Field offset: 0x0
	private static Event s_MasterEvent; //Field offset: 0x8
	internal IntPtr m_Ptr; //Field offset: 0x10

	[NativeProperty]
	public char character
	{
		 get { } //Length: 64
	}

	public string commandName
	{
		[FreeFunction]
		 get { } //Length: 64
	}

	public static Event current
	{
		 get { } //Length: 76
	}

	[NativeProperty]
	public int displayIndex
	{
		 set { } //Length: 80
	}

	public bool isKey
	{
		 get { } //Length: 80
	}

	public bool isMouse
	{
		 get { } //Length: 104
	}

	[NativeProperty]
	public KeyCode keyCode
	{
		 get { } //Length: 64
	}

	[NativeProperty]
	public EventModifiers modifiers
	{
		 get { } //Length: 64
	}

	[NativeProperty]
	public Vector2 mousePosition
	{
		 get { } //Length: 88
	}

	[NativeProperty]
	public EventType rawType
	{
		 get { } //Length: 64
	}

	public EventType type
	{
		[FreeFunction]
		 get { } //Length: 64
	}

	public Event(int displayIndex) { }

	public Event() { }

	public virtual bool Equals(object obj) { }

	protected virtual void Finalize() { }

	public char get_character() { }

	[FreeFunction]
	public string get_commandName() { }

	public static Event get_current() { }

	public bool get_isKey() { }

	public bool get_isMouse() { }

	public KeyCode get_keyCode() { }

	public EventModifiers get_modifiers() { }

	public Vector2 get_mousePosition() { }

	private void get_mousePosition_Injected(out Vector2 ret) { }

	public EventType get_rawType() { }

	[FreeFunction]
	public EventType get_type() { }

	public virtual int GetHashCode() { }

	[FreeFunction]
	private static IntPtr Internal_Create(int displayIndex) { }

	[FreeFunction]
	private static void Internal_Destroy(IntPtr ptr) { }

	[RequiredByNativeCode]
	internal static void Internal_MakeMasterEventCurrent(int displayIndex) { }

	private static void Internal_SetNativeEvent(IntPtr ptr) { }

	public static bool PopEvent(Event outEvent) { }

	public void set_displayIndex(int value) { }

	public virtual string ToString() { }

}

