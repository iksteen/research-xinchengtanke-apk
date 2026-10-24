namespace System.Reflection;

[ClassInterface(/*Cpp2IL Warning: missing at least one required parameter*/)]
[ComDefaultInterface(/*Cpp2IL Warning: missing at least one required parameter*/)]
[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
public class Assembly : ICustomAttributeProvider, ISerializable, _Assembly
{
	public class ResolveEventHolder
	{

		public ResolveEventHolder() { }

	}

	internal IntPtr _mono_assembly; //Field offset: 0x10
	private ResolveEventHolder resolve_event_holder; //Field offset: 0x18
	private object _evidence; //Field offset: 0x20
	private object _minimum; //Field offset: 0x28
	private object _optional; //Field offset: 0x30
	private object _refuse; //Field offset: 0x38
	private object _granted; //Field offset: 0x40
	private object _denied; //Field offset: 0x48
	private bool fromByteArray; //Field offset: 0x50
	private string assemblyName; //Field offset: 0x58

	public override string CodeBase
	{
		 get { } //Length: 8
	}

	public override string FullName
	{
		 get { } //Length: 12
	}

	[MonoTODO]
	public bool IsFullyTrusted
	{
		 get { } //Length: 8
	}

	protected Assembly() { }

	private static Exception CreateNIE() { }

	public virtual bool Equals(object o) { }

	private string get_code_base(bool escaped) { }

	public override string get_CodeBase() { }

	private string get_fullname() { }

	public override string get_FullName() { }

	public bool get_IsFullyTrusted() { }

	internal static string GetAotId() { }

	public static Assembly GetAssembly(Type type) { }

	public static Assembly GetCallingAssembly() { }

	private string GetCodeBase(bool escaped) { }

	public override Object[] GetCustomAttributes(Type attributeType, bool inherit) { }

	public static Assembly GetExecutingAssembly() { }

	public virtual int GetHashCode() { }

	internal IntPtr GetManifestResourceInternal(string name, out int size, out Module module) { }

	public override Module GetModule(string name) { }

	public override Module[] GetModules(bool getResourceModules) { }

	internal override Module[] GetModulesInternal() { }

	public override AssemblyName GetName() { }

	public override AssemblyName GetName(bool copiedName) { }

	public override void GetObjectData(SerializationInfo info, StreamingContext context) { }

	public override Type GetType(string name) { }

	public override Type GetType(string name, bool throwOnError) { }

	public override Type GetType(string name, bool throwOnError, bool ignoreCase) { }

	public override Type[] GetTypes() { }

	internal override Type[] GetTypes(bool exportedOnly) { }

	internal Type InternalGetType(Module module, string name, bool throwOnError, bool ignoreCase) { }

	public override bool IsDefined(Type attributeType, bool inherit) { }

	public static Assembly Load(string assemblyString) { }

	private static Assembly load_with_partial_name(string name, Evidence e) { }

	[Obsolete]
	public static Assembly LoadWithPartialName(string partialName, Evidence securityEvidence) { }

	internal static Assembly LoadWithPartialName(string partialName, Evidence securityEvidence, bool oldBehavior) { }

	public static bool op_Equality(Assembly left, Assembly right) { }

	public static bool op_Inequality(Assembly left, Assembly right) { }

	public virtual string ToString() { }

}

