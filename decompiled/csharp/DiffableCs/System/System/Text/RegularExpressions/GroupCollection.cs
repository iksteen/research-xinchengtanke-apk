namespace System.Text.RegularExpressions;

[DefaultMember(/*Cpp2IL Warning: missing at least one required parameter*/)]
public class GroupCollection : ICollection, IEnumerable
{
	internal Match _match; //Field offset: 0x10
	internal Hashtable _captureMap; //Field offset: 0x18
	internal Group[] _groups; //Field offset: 0x20

	public override int Count
	{
		 get { } //Length: 40
	}

	public Group Item
	{
		 get { } //Length: 4
	}

	public override object SyncRoot
	{
		 get { } //Length: 8
	}

	internal GroupCollection(Match match, Hashtable caps) { }

	internal GroupCollection() { }

	public override void CopyTo(Array array, int arrayIndex) { }

	public override int get_Count() { }

	public Group get_Item(int groupnum) { }

	public override object get_SyncRoot() { }

	public override IEnumerator GetEnumerator() { }

	internal Group GetGroup(int groupnum) { }

	internal Group GetGroupImpl(int groupnum) { }

}

