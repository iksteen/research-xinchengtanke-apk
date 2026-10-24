namespace Mono.Security.X509;

[DefaultMember(/*Cpp2IL Warning: missing at least one required parameter*/)]
internal class X509CertificateCollection : CollectionBase, IEnumerable
{
	internal class X509CertificateEnumerator : IEnumerator
	{
		private IEnumerator enumerator; //Field offset: 0x10

		public X509Certificate Current
		{
			 get { } //Length: 252
		}

		private override object System.Collections.IEnumerator.Current
		{
			private get { } //Length: 176
		}

		public X509CertificateEnumerator(X509CertificateCollection mappings) { }

		public X509Certificate get_Current() { }

		public bool MoveNext() { }

		private override object System.Collections.IEnumerator.get_Current() { }

		private override bool System.Collections.IEnumerator.MoveNext() { }

		private override void System.Collections.IEnumerator.Reset() { }

	}


	public X509Certificate Item
	{
		 get { } //Length: 172
	}

	public X509CertificateCollection() { }

	public int Add(X509Certificate value) { }

	public X509Certificate get_Item(int index) { }

	public X509CertificateEnumerator GetEnumerator() { }

	public virtual int GetHashCode() { }

	private override IEnumerator System.Collections.IEnumerable.GetEnumerator() { }

}

