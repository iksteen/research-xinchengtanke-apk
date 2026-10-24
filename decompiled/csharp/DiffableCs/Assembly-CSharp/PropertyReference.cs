//Type is in global namespace

public class PropertyReference
{
	private static int s_Hash; //Field offset: 0x0
	[SerializeField]
	private Component mTarget; //Field offset: 0x10
	[SerializeField]
	private string mName; //Field offset: 0x18
	private FieldInfo mField; //Field offset: 0x20
	private PropertyInfo mProperty; //Field offset: 0x28

	public bool isEnabled
	{
		 get { } //Length: 292
	}

	public bool isValid
	{
		 get { } //Length: 144
	}

	public string name
	{
		 get { } //Length: 8
		 set { } //Length: 64
	}

	public Component target
	{
		 get { } //Length: 8
		 set { } //Length: 64
	}

	private static PropertyReference() { }

	public PropertyReference() { }

	public PropertyReference(Component target, string fieldName) { }

	[DebuggerHidden]
	[DebuggerStepThrough]
	private bool Cache() { }

	public void Clear() { }

	public static bool Convert(object value, Type to) { }

	public static bool Convert(Type from, Type to) { }

	private bool Convert(ref object value) { }

	public static bool Convert(ref object value, Type from, Type to) { }

	public virtual bool Equals(object obj) { }

	[DebuggerHidden]
	[DebuggerStepThrough]
	public object Get() { }

	public bool get_isEnabled() { }

	public bool get_isValid() { }

	public string get_name() { }

	public Component get_target() { }

	public virtual int GetHashCode() { }

	public Type GetPropertyType() { }

	public void Reset() { }

	[DebuggerHidden]
	[DebuggerStepThrough]
	public bool Set(object value) { }

	public void Set(Component target, string methodName) { }

	public void set_name(string value) { }

	public void set_target(Component value) { }

	public static string ToString(Component comp, string property) { }

	public virtual string ToString() { }

}

