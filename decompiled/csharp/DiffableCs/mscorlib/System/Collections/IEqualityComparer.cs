namespace System.Collections;

[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
public interface IEqualityComparer
{

	public bool Equals(object x, object y) { }

	public int GetHashCode(object obj) { }

}

