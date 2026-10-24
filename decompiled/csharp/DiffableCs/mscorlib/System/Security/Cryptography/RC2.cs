namespace System.Security.Cryptography;

[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
public abstract class RC2 : SymmetricAlgorithm
{
	private static KeySizes[] s_legalBlockSizes; //Field offset: 0x0
	private static KeySizes[] s_legalKeySizes; //Field offset: 0x8
	protected int EffectiveKeySizeValue; //Field offset: 0x44

	public override int EffectiveKeySize
	{
		 get { } //Length: 24
	}

	public virtual int KeySize
	{
		 get { } //Length: 8
		 set { } //Length: 112
	}

	private static RC2() { }

	protected RC2() { }

	public static RC2 Create() { }

	public override int get_EffectiveKeySize() { }

	public virtual int get_KeySize() { }

	public virtual void set_KeySize(int value) { }

}

