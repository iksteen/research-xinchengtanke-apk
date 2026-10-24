//Type is in global namespace

public class EventDelegate
{
	internal sealed class Callback : MulticastDelegate
	{

		public Callback(object object, IntPtr method) { }

		public override IAsyncResult BeginInvoke(AsyncCallback callback, object object) { }

		public override void EndInvoke(IAsyncResult result) { }

		public override void Invoke() { }

	}

	internal class Parameter
	{
		public object obj; //Field offset: 0x10
		public string field; //Field offset: 0x18
		private object mValue; //Field offset: 0x20
		public Type expectedType; //Field offset: 0x28
		public bool cached; //Field offset: 0x30
		public PropertyInfo propInfo; //Field offset: 0x38
		public FieldInfo fieldInfo; //Field offset: 0x40

		public Type type
		{
			 get { } //Length: 228
		}

		public object value
		{
			 get { } //Length: 680
			 set { } //Length: 8
		}

		public Parameter() { }

		public Parameter(object obj, string field) { }

		public Parameter(object val) { }

		public Type get_type() { }

		public object get_value() { }

		public void set_value(object value) { }

	}

	private static int s_Hash; //Field offset: 0x0
	[SerializeField]
	private MonoBehaviour mTarget; //Field offset: 0x10
	[SerializeField]
	private string mMethodName; //Field offset: 0x18
	[SerializeField]
	private Parameter[] mParameters; //Field offset: 0x20
	public bool oneShot; //Field offset: 0x28
	private Callback mCachedCallback; //Field offset: 0x30
	private bool mRawDelegate; //Field offset: 0x38
	private bool mCached; //Field offset: 0x39
	private MethodInfo mMethod; //Field offset: 0x40
	private ParameterInfo[] mParameterInfos; //Field offset: 0x48
	private Object[] mArgs; //Field offset: 0x50

	public bool isEnabled
	{
		 get { } //Length: 248
	}

	public bool isValid
	{
		 get { } //Length: 184
	}

	public string methodName
	{
		 get { } //Length: 8
		 set { } //Length: 100
	}

	public Parameter[] parameters
	{
		 get { } //Length: 48
	}

	public MonoBehaviour target
	{
		 get { } //Length: 8
		 set { } //Length: 100
	}

	private static EventDelegate() { }

	public EventDelegate(MonoBehaviour target, string methodName) { }

	public EventDelegate() { }

	public EventDelegate(Callback call) { }

	public static void Add(List<EventDelegate> list, EventDelegate ev, bool oneShot) { }

	public static EventDelegate Add(List<EventDelegate> list, Callback callback, bool oneShot) { }

	public static EventDelegate Add(List<EventDelegate> list, Callback callback) { }

	public static void Add(List<EventDelegate> list, EventDelegate ev) { }

	private void Cache() { }

	public void Clear() { }

	public virtual bool Equals(object obj) { }

	public bool Execute() { }

	public static void Execute(List<EventDelegate> list) { }

	public bool get_isEnabled() { }

	public bool get_isValid() { }

	public string get_methodName() { }

	public Parameter[] get_parameters() { }

	public MonoBehaviour get_target() { }

	public virtual int GetHashCode() { }

	private static string GetMethodName(Callback callback) { }

	public static bool IsValid(List<EventDelegate> list) { }

	private static bool IsValid(Callback callback) { }

	public static bool Remove(List<EventDelegate> list, Callback callback) { }

	public static bool Remove(List<EventDelegate> list, EventDelegate ev) { }

	private void Set(Callback call) { }

	public static EventDelegate Set(List<EventDelegate> list, Callback callback) { }

	public static void Set(List<EventDelegate> list, EventDelegate del) { }

	public void Set(MonoBehaviour target, string methodName) { }

	public void set_methodName(string value) { }

	public void set_target(MonoBehaviour value) { }

	public virtual string ToString() { }

}

