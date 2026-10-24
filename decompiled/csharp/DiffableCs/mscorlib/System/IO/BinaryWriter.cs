namespace System.IO;

[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
public class BinaryWriter : IDisposable
{
	public static readonly BinaryWriter Null; //Field offset: 0x0
	protected Stream OutStream; //Field offset: 0x10
	private Byte[] _buffer; //Field offset: 0x18
	private Encoding _encoding; //Field offset: 0x20
	private Encoder _encoder; //Field offset: 0x28
	[OptionalField]
	private bool _leaveOpen; //Field offset: 0x30
	private Byte[] _largeByteBuffer; //Field offset: 0x38
	private int _maxChars; //Field offset: 0x40

	private static BinaryWriter() { }

	public BinaryWriter(Stream output, Encoding encoding, bool leaveOpen) { }

	protected BinaryWriter() { }

	public BinaryWriter(Stream output, Encoding encoding) { }

	protected override void Dispose(bool disposing) { }

	public override void Dispose() { }

	public override void Flush() { }

	public override void Write(string value) { }

	public override void Write(float value) { }

	[CLSCompliant(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public override void Write(ulong value) { }

	public override void Write(long value) { }

	[CLSCompliant(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public override void Write(uint value) { }

	public override void Write(int value) { }

	[CLSCompliant(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public override void Write(ushort value) { }

	public override void Write(double value) { }

	public override void Write(char ch) { }

	public override void Write(Byte[] buffer, int index, int count) { }

	public override void Write(Byte[] buffer) { }

	public override void Write(byte value) { }

	public override void Write(bool value) { }

	public override void Write(short value) { }

	public override void Write(Char[] chars) { }

	protected void Write7BitEncodedInt(int value) { }

}

