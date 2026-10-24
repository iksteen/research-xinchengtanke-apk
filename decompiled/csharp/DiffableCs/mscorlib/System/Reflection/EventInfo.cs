namespace System.Reflection;

[ClassInterface(/*Cpp2IL Warning: missing at least one required parameter*/)]
[ComDefaultInterface(/*Cpp2IL Warning: missing at least one required parameter*/)]
[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
public abstract class EventInfo : MemberInfo, _EventInfo
{
	private sealed class AddEventAdapter : MulticastDelegate
	{

		public AddEventAdapter(object object, IntPtr method) { }

		public override IAsyncResult BeginInvoke(object _this, Delegate dele, AsyncCallback callback, object object) { }

		public override void EndInvoke(IAsyncResult result) { }

		public override void Invoke(object _this, Delegate dele) { }

	}

	private AddEventAdapter cached_add_event; //Field offset: 0x10

	public override Type EventHandlerType
	{
		 get { } //Length: 116
	}

	public virtual MemberTypes MemberType
	{
		 get { } //Length: 8
	}

	protected EventInfo() { }

	public virtual bool Equals(object obj) { }

	public override Type get_EventHandlerType() { }

	public virtual MemberTypes get_MemberType() { }

	public abstract MethodInfo GetAddMethod(bool nonPublic) { }

	internal static EventInfo GetEventFromHandle(RuntimeEventHandle handle, RuntimeTypeHandle reflectedType) { }

	public virtual int GetHashCode() { }

	public abstract MethodInfo GetRaiseMethod(bool nonPublic) { }

	public abstract MethodInfo GetRemoveMethod(bool nonPublic) { }

	private static EventInfo internal_from_handle_type(IntPtr event_handle, IntPtr type_handle) { }

	public static bool op_Equality(EventInfo left, EventInfo right) { }

	public static bool op_Inequality(EventInfo left, EventInfo right) { }

}

