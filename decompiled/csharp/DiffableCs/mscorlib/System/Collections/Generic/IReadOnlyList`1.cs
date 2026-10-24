namespace System.Collections.Generic;

[DefaultMember(/*Cpp2IL Warning: missing at least one required parameter*/)]
[TypeDependency(/*Cpp2IL Warning: missing at least one required parameter*/)]
public interface IReadOnlyList : IReadOnlyCollection<T>, IEnumerable<T>, IEnumerable
{

	public T Item
	{
		 get { } //Length: 0
	}

	public T get_Item(int index) { }

}

