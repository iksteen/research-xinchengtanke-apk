namespace System.Collections.Generic;

internal sealed class NonRandomizedStringEqualityComparer : EqualityComparer<String>
{

	public NonRandomizedStringEqualityComparer() { }

	public virtual bool Equals(string x, string y) { }

	public virtual int GetHashCode(string obj) { }

}

