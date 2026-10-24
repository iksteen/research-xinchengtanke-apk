namespace System.Reflection;

[ClassInterface(/*Cpp2IL Warning: missing at least one required parameter*/)]
[ComDefaultInterface(/*Cpp2IL Warning: missing at least one required parameter*/)]
[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
public class ParameterInfo : ICustomAttributeProvider, IObjectReference, _ParameterInfo
{
	protected Type ClassImpl; //Field offset: 0x10
	protected object DefaultValueImpl; //Field offset: 0x18
	protected MemberInfo MemberImpl; //Field offset: 0x20
	protected string NameImpl; //Field offset: 0x28
	protected int PositionImpl; //Field offset: 0x30
	protected ParameterAttributes AttrsImpl; //Field offset: 0x34
	internal MarshalAsAttribute marshalAs; //Field offset: 0x38

	public override ParameterAttributes Attributes
	{
		 get { } //Length: 8
	}

	public override object DefaultValue
	{
		 get { } //Length: 64
	}

	public bool IsIn
	{
		 get { } //Length: 32
	}

	public bool IsOptional
	{
		 get { } //Length: 32
	}

	public bool IsOut
	{
		 get { } //Length: 32
	}

	public bool IsRetval
	{
		 get { } //Length: 32
	}

	public override string Name
	{
		 get { } //Length: 8
	}

	public override Type ParameterType
	{
		 get { } //Length: 8
	}

	public override int Position
	{
		 get { } //Length: 8
	}

	protected ParameterInfo() { }

	internal static void FormatParameters(StringBuilder sb, ParameterInfo[] p, CallingConventions callingConvention, bool serialization) { }

	public override ParameterAttributes get_Attributes() { }

	public override object get_DefaultValue() { }

	public bool get_IsIn() { }

	public bool get_IsOptional() { }

	public bool get_IsOut() { }

	public bool get_IsRetval() { }

	public override string get_Name() { }

	public override Type get_ParameterType() { }

	public override int get_Position() { }

	public override Object[] GetCustomAttributes(Type attributeType, bool inherit) { }

	internal object GetDefaultValueImpl() { }

	internal Object[] GetPseudoCustomAttributes() { }

	public override object GetRealObject(StreamingContext context) { }

	public override bool IsDefined(Type attributeType, bool inherit) { }

	internal static ParameterInfo New(ParameterInfo pinfo, MemberInfo member) { }

	public virtual string ToString() { }

}

