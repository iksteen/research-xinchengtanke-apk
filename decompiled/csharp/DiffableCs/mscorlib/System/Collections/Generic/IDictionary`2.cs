namespace System.Collections.Generic;

[DefaultMember(/*Cpp2IL Warning: missing at least one required parameter*/)]
public interface IDictionary : ICollection<KeyValuePair`2<TKey, TValue>>, IEnumerable<KeyValuePair`2<TKey, TValue>>, IEnumerable
{

	public ICollection<TValue> Values
	{
		 get { } //Length: 0
	}

	public void Add(TKey key, TValue value) { }

	public ICollection<TValue> get_Values() { }

}

