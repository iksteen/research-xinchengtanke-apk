namespace System.Runtime.Serialization.Formatters.Binary;

[DefaultMember(/*Cpp2IL Warning: missing at least one required parameter*/)]
internal sealed class SizedArray : ICloneable
{
	internal Object[] objects; //Field offset: 0x10
	internal Object[] negObjects; //Field offset: 0x18

	internal object Item
	{
		internal get { } //Length: 128
		internal set { } //Length: 288
	}

	internal SizedArray() { }

	internal SizedArray(int length) { }

	private SizedArray(SizedArray sizedArray) { }

	public override object Clone() { }

	internal object get_Item(int index) { }

	internal void IncreaseCapacity(int index) { }

	internal void set_Item(int index, object value) { }

}

