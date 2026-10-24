namespace System.Security.Cryptography;

[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
public abstract class HashAlgorithm : IDisposable, ICryptoTransform
{
	protected int HashSizeValue; //Field offset: 0x10
	protected private Byte[] HashValue; //Field offset: 0x18
	protected int State; //Field offset: 0x20
	private bool m_bDisposed; //Field offset: 0x24

	public override bool CanTransformMultipleBlocks
	{
		 get { } //Length: 8
	}

	public override Byte[] Hash
	{
		 get { } //Length: 276
	}

	public override int HashSize
	{
		 get { } //Length: 8
	}

	public override int InputBlockSize
	{
		 get { } //Length: 8
	}

	public override int OutputBlockSize
	{
		 get { } //Length: 8
	}

	protected HashAlgorithm() { }

	public void Clear() { }

	public Byte[] ComputeHash(Byte[] buffer) { }

	public Byte[] ComputeHash(Byte[] buffer, int offset, int count) { }

	public override void Dispose() { }

	protected override void Dispose(bool disposing) { }

	public override bool get_CanTransformMultipleBlocks() { }

	public override Byte[] get_Hash() { }

	public override int get_HashSize() { }

	public override int get_InputBlockSize() { }

	public override int get_OutputBlockSize() { }

	protected abstract void HashCore(Byte[] array, int ibStart, int cbSize) { }

	protected abstract Byte[] HashFinal() { }

	public abstract void Initialize() { }

	public override int TransformBlock(Byte[] inputBuffer, int inputOffset, int inputCount, Byte[] outputBuffer, int outputOffset) { }

	public override Byte[] TransformFinalBlock(Byte[] inputBuffer, int inputOffset, int inputCount) { }

}

