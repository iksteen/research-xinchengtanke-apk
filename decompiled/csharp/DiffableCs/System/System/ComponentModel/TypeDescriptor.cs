namespace System.ComponentModel;

public sealed class TypeDescriptor
{
	private sealed class MemberDescriptorComparer : IComparer
	{
		public static readonly MemberDescriptorComparer Instance; //Field offset: 0x0

		private static MemberDescriptorComparer() { }

		public MemberDescriptorComparer() { }

		public override int Compare(object left, object right) { }

	}

	private sealed class TypeDescriptionNode : TypeDescriptionProvider
	{
		internal TypeDescriptionNode Next; //Field offset: 0x18
		internal TypeDescriptionProvider Provider; //Field offset: 0x20

		internal TypeDescriptionNode(TypeDescriptionProvider provider) { }

	}

	private sealed class TypeDescriptorInterface
	{

	}

	private static WeakHashtable _providerTable; //Field offset: 0x0
	private static Hashtable _providerTypeTable; //Field offset: 0x8
	private static Hashtable _defaultProviders; //Field offset: 0x10
	private static int _metadataVersion; //Field offset: 0x18
	private static BooleanSwitch TraceDescriptor; //Field offset: 0x20
	private static readonly Guid[] _pipelineInitializeKeys; //Field offset: 0x28
	private static readonly Guid[] _pipelineMergeKeys; //Field offset: 0x30
	private static readonly Guid[] _pipelineFilterKeys; //Field offset: 0x38
	private static readonly Guid[] _pipelineAttributeFilterKeys; //Field offset: 0x40
	private static object _internalSyncObject; //Field offset: 0x48
	[CompilerGenerated]
	private static RefreshEventHandler Refreshed; //Field offset: 0x50

	[EditorBrowsable(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public static Type InterfaceType
	{
		 get { } //Length: 120
	}

	private static TypeDescriptor() { }

	[EditorBrowsable(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public static void AddProvider(TypeDescriptionProvider provider, Type type) { }

	private static void CheckDefaultProvider(Type type) { }

	public static Type get_InterfaceType() { }

	private static Type GetNodeForBaseType(Type searchType) { }

	[EditorBrowsable(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public static TypeDescriptionProvider GetProvider(Type type) { }

	private static TypeDescriptionNode NodeFor(Type type, bool createDelegator) { }

	private static void RaiseRefresh(Type type) { }

	public static void Refresh(Type type) { }

	public static void SortDescriptorArray(IList infos) { }

}

