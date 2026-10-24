namespace System.Collections;

[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
[Guid(/*Cpp2IL Warning: missing at least one required parameter*/)]
public interface IEnumerator
{

	public object Current
	{
		 get { } //Length: 0
	}

	public object get_Current() { }

	public bool MoveNext() { }

	public void Reset() { }

}

