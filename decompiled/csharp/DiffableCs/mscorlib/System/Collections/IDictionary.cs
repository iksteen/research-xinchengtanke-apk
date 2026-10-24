namespace System.Collections;

[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
[DefaultMember(/*Cpp2IL Warning: missing at least one required parameter*/)]
public interface IDictionary : ICollection, IEnumerable
{

	public object Item
	{
		 get { } //Length: 0
		 set { } //Length: 0
	}

	public bool Contains(object key) { }

	public object get_Item(object key) { }

	public IDictionaryEnumerator GetEnumerator() { }

	public void set_Item(object key, object value) { }

}

