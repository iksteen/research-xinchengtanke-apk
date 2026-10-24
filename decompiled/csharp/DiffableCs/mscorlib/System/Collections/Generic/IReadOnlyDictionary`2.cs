namespace System.Collections.Generic;

[DefaultMember(/*Cpp2IL Warning: missing at least one required parameter*/)]
public interface IReadOnlyDictionary : IReadOnlyCollection<KeyValuePair`2<TKey, TValue>>, IEnumerable<KeyValuePair`2<TKey, TValue>>, IEnumerable
{

	public bool TryGetValue(TKey key, out TValue value) { }

}

