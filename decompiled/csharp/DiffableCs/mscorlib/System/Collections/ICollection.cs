namespace System.Collections;

[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
public interface ICollection : IEnumerable
{

	public int Count
	{
		 get { } //Length: 0
	}

	public object SyncRoot
	{
		 get { } //Length: 0
	}

	public void CopyTo(Array array, int index) { }

	public int get_Count() { }

	public object get_SyncRoot() { }

}

