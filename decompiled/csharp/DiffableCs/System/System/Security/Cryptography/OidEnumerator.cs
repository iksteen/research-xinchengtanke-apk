namespace System.Security.Cryptography;

public sealed class OidEnumerator : IEnumerator
{
	private OidCollection m_oids; //Field offset: 0x10
	private int m_current; //Field offset: 0x18

	private override object System.Collections.IEnumerator.Current
	{
		private get { } //Length: 32
	}

	internal OidEnumerator(OidCollection oids) { }

	public override bool MoveNext() { }

	public override void Reset() { }

	private override object System.Collections.IEnumerator.get_Current() { }

}

