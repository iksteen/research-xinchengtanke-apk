namespace System.Collections.Generic;

[TypeDependency(/*Cpp2IL Warning: missing at least one required parameter*/)]
public interface IEnumerable : IEnumerable
{

	public IEnumerator<T> GetEnumerator() { }

}

