namespace System.Reflection;

[ClassInterface(/*Cpp2IL Warning: missing at least one required parameter*/)]
[ComDefaultInterface(/*Cpp2IL Warning: missing at least one required parameter*/)]
[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
public abstract class Module : ISerializable, ICustomAttributeProvider, _Module
{
	public static readonly TypeFilter FilterTypeName; //Field offset: 0x0
	private const BindingFlags defaultBindingFlags = 28; //Field offset: 0x0
	public static readonly TypeFilter FilterTypeNameIgnoreCase; //Field offset: 0x8
	internal IntPtr _impl; //Field offset: 0x10
	internal Assembly assembly; //Field offset: 0x18
	internal string fqname; //Field offset: 0x20
	internal string name; //Field offset: 0x28
	internal string scopename; //Field offset: 0x30
	internal bool is_resource; //Field offset: 0x38
	internal int token; //Field offset: 0x3C

	public override Assembly Assembly
	{
		 get { } //Length: 100
	}

	public override Guid ModuleVersionId
	{
		 get { } //Length: 100
	}

	public override string ScopeName
	{
		 get { } //Length: 100
	}

	private static Module() { }

	protected Module() { }

	private static Exception CreateNIE() { }

	public virtual bool Equals(object o) { }

	private static bool filter_by_type_name(Type m, object filterCriteria) { }

	private static bool filter_by_type_name_ignore_case(Type m, object filterCriteria) { }

	public override Assembly get_Assembly() { }

	public override Guid get_ModuleVersionId() { }

	public override string get_ScopeName() { }

	public override Object[] GetCustomAttributes(Type attributeType, bool inherit) { }

	private string GetGuidInternal() { }

	public virtual int GetHashCode() { }

	internal override Guid GetModuleVersionId() { }

	public override void GetObjectData(SerializationInfo info, StreamingContext context) { }

	public override bool IsDefined(Type attributeType, bool inherit) { }

	public override bool IsResource() { }

	public static bool op_Equality(Module left, Module right) { }

	public virtual string ToString() { }

}

