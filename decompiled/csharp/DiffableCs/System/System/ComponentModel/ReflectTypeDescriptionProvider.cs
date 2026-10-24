namespace System.ComponentModel;

internal sealed class ReflectTypeDescriptionProvider : TypeDescriptionProvider
{
	private class ReflectedTypeData
	{
		private Type _type; //Field offset: 0x10
		private AttributeCollection _attributes; //Field offset: 0x18
		private EventDescriptorCollection _events; //Field offset: 0x20
		private PropertyDescriptorCollection _properties; //Field offset: 0x28
		private TypeConverter _converter; //Field offset: 0x30
		private Object[] _editors; //Field offset: 0x38
		private Type[] _editorTypes; //Field offset: 0x40
		private int _editorCount; //Field offset: 0x48

		internal bool IsPopulated
		{
			internal get { } //Length: 28
		}

		internal ReflectedTypeData(Type type) { }

		internal bool get_IsPopulated() { }

		internal void Refresh() { }

	}

	private static Type[] _typeConstructor; //Field offset: 0x0
	private static object _intrinsicReferenceKey; //Field offset: 0x8
	private static object _intrinsicNullableKey; //Field offset: 0x10
	private static object _dictionaryKey; //Field offset: 0x18
	private static readonly Guid _extenderProviderKey; //Field offset: 0x20
	private static readonly Guid _extenderPropertiesKey; //Field offset: 0x30
	private static readonly Guid _extenderProviderPropertiesKey; //Field offset: 0x40
	private static readonly Type[] _skipInterfaceAttributeList; //Field offset: 0x50
	private static object _internalSyncObject; //Field offset: 0x58
	private Hashtable _typeData; //Field offset: 0x18

	private static ReflectTypeDescriptionProvider() { }

	internal ReflectTypeDescriptionProvider() { }

	private ReflectedTypeData GetTypeData(Type type, bool createIfNeeded) { }

	internal bool IsPopulated(Type type) { }

	internal void Refresh(Type type) { }

}

