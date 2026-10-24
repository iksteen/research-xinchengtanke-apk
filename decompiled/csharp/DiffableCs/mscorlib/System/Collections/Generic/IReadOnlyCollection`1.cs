namespace System.Collections.Generic;

[TypeDependency(/*Cpp2IL Warning: missing at least one required parameter*/)]
public interface IReadOnlyCollection : IEnumerable<T>, IEnumerable
{

	public int Count
	{
		 get { } //Length: 0
	}

	public int get_Count() { }

}

