namespace System;

[AttributeUsage(/*Cpp2IL Warning: missing at least one required parameter*/)]
[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
public sealed class AttributeUsageAttribute : Attribute
{
	internal static AttributeUsageAttribute Default; //Field offset: 0x0
	internal AttributeTargets m_attributeTarget; //Field offset: 0x10
	internal bool m_allowMultiple; //Field offset: 0x14
	internal bool m_inherited; //Field offset: 0x15

	public bool AllowMultiple
	{
		 get { } //Length: 8
		 set { } //Length: 12
	}

	public bool Inherited
	{
		 get { } //Length: 8
		 set { } //Length: 12
	}

	private static AttributeUsageAttribute() { }

	public AttributeUsageAttribute(AttributeTargets validOn) { }

	public bool get_AllowMultiple() { }

	public bool get_Inherited() { }

	public void set_AllowMultiple(bool value) { }

	public void set_Inherited(bool value) { }

}

