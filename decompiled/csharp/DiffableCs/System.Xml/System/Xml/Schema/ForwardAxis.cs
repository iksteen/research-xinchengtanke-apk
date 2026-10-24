namespace System.Xml.Schema;

internal class ForwardAxis
{
	private DoubleLinkAxis topNode; //Field offset: 0x10
	private DoubleLinkAxis rootNode; //Field offset: 0x18
	private bool isAttribute; //Field offset: 0x20
	private bool isDss; //Field offset: 0x21
	private bool isSelfAxis; //Field offset: 0x22

	internal bool IsAttribute
	{
		internal get { } //Length: 8
	}

	internal bool IsDss
	{
		internal get { } //Length: 8
	}

	internal bool IsSelfAxis
	{
		internal get { } //Length: 8
	}

	internal DoubleLinkAxis RootNode
	{
		internal get { } //Length: 8
	}

	internal DoubleLinkAxis TopNode
	{
		internal get { } //Length: 8
	}

	public ForwardAxis(DoubleLinkAxis axis, bool isdesorself) { }

	internal bool get_IsAttribute() { }

	internal bool get_IsDss() { }

	internal bool get_IsSelfAxis() { }

	internal DoubleLinkAxis get_RootNode() { }

	internal DoubleLinkAxis get_TopNode() { }

}

