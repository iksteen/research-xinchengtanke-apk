namespace System.Security.Cryptography;

[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
public abstract class KeyedHashAlgorithm : HashAlgorithm
{
	protected Byte[] KeyValue; //Field offset: 0x28

	public override Byte[] Key
	{
		 get { } //Length: 124
		 set { } //Length: 240
	}

	protected KeyedHashAlgorithm() { }

	protected virtual void Dispose(bool disposing) { }

	public override Byte[] get_Key() { }

	public override void set_Key(Byte[] value) { }

}

