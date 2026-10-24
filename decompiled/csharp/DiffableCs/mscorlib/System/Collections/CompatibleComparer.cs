namespace System.Collections;

internal class CompatibleComparer : IEqualityComparer
{
	private IComparer _comparer; //Field offset: 0x10
	private IHashCodeProvider _hcp; //Field offset: 0x18

	internal IComparer Comparer
	{
		internal get { } //Length: 8
	}

	internal IHashCodeProvider HashCodeProvider
	{
		internal get { } //Length: 8
	}

	internal CompatibleComparer(IComparer comparer, IHashCodeProvider hashCodeProvider) { }

	public int Compare(object a, object b) { }

	public override bool Equals(object a, object b) { }

	internal IComparer get_Comparer() { }

	internal IHashCodeProvider get_HashCodeProvider() { }

	public override int GetHashCode(object obj) { }

}

