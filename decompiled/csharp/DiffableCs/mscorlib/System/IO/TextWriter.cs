namespace System.IO;

[ComVisible(/*Cpp2IL Warning: missing at least one required parameter*/)]
public abstract class TextWriter : MarshalByRefObject, IDisposable
{
	[CompilerGenerated]
	private sealed class <>c
	{
		public static readonly <>c <>9; //Field offset: 0x0

		private static <>c() { }

		public <>c() { }

		internal void <.cctor>b__73_0(object state) { }

		internal void <.cctor>b__73_1(object state) { }

		internal void <.cctor>b__73_2(object state) { }

		internal void <.cctor>b__73_3(object state) { }

		internal void <.cctor>b__73_4(object state) { }

		internal void <.cctor>b__73_5(object state) { }

		internal void <.cctor>b__73_6(object state) { }

	}

	private sealed class NullTextWriter : TextWriter
	{

		public virtual Encoding Encoding
		{
			 get { } //Length: 8
		}

		internal NullTextWriter() { }

		public virtual Encoding get_Encoding() { }

		public virtual void Write(Char[] buffer, int index, int count) { }

		public virtual void Write(string value) { }

		public virtual void WriteLine() { }

		public virtual void WriteLine(string value) { }

	}

	public sealed class SyncTextWriter : TextWriter, IDisposable
	{
		private TextWriter _out; //Field offset: 0x28

		public virtual Encoding Encoding
		{
			 get { } //Length: 32
		}

		public virtual IFormatProvider FormatProvider
		{
			 get { } //Length: 32
		}

		internal SyncTextWriter(TextWriter t) { }

		public virtual void Close() { }

		protected virtual void Dispose(bool disposing) { }

		public virtual void Flush() { }

		public virtual Encoding get_Encoding() { }

		public virtual IFormatProvider get_FormatProvider() { }

		public virtual void Write(char value) { }

		public virtual void Write(Char[] buffer) { }

		public virtual void Write(Char[] buffer, int index, int count) { }

		public virtual void Write(string value) { }

		public virtual void WriteLine() { }

		public virtual void WriteLine(char value) { }

		public virtual void WriteLine(Char[] buffer, int index, int count) { }

		public virtual void WriteLine(string value) { }

		public virtual void WriteLine(string format, object arg0) { }

		public virtual void WriteLine(string format, object arg0, object arg1) { }

	}

	public static readonly TextWriter Null; //Field offset: 0x0
	private static Action<Object> _WriteCharDelegate; //Field offset: 0x8
	private static Action<Object> _WriteStringDelegate; //Field offset: 0x10
	private static Action<Object> _WriteCharArrayRangeDelegate; //Field offset: 0x18
	private static Action<Object> _WriteLineCharDelegate; //Field offset: 0x20
	private static Action<Object> _WriteLineStringDelegate; //Field offset: 0x28
	private static Action<Object> _WriteLineCharArrayRangeDelegate; //Field offset: 0x30
	private static Action<Object> _FlushDelegate; //Field offset: 0x38
	protected Char[] CoreNewLine; //Field offset: 0x18
	private IFormatProvider InternalFormatProvider; //Field offset: 0x20

	public abstract Encoding Encoding
	{
		 get { } //Length: 0
	}

	public override IFormatProvider FormatProvider
	{
		 get { } //Length: 40
	}

	private static string InitialNewLine
	{
		private get { } //Length: 8
	}

	private static TextWriter() { }

	protected TextWriter() { }

	protected TextWriter(IFormatProvider formatProvider) { }

	public override void Close() { }

	protected override void Dispose(bool disposing) { }

	public override void Dispose() { }

	public override void Flush() { }

	public abstract Encoding get_Encoding() { }

	public override IFormatProvider get_FormatProvider() { }

	private static string get_InitialNewLine() { }

	public static TextWriter Synchronized(TextWriter writer) { }

	public override void Write(Char[] buffer) { }

	public override void Write(Char[] buffer, int index, int count) { }

	public override void Write(string value) { }

	public override void Write(char value) { }

	public override void WriteLine(string format, object arg0, object arg1) { }

	public override void WriteLine() { }

	public override void WriteLine(char value) { }

	public override void WriteLine(Char[] buffer, int index, int count) { }

	public override void WriteLine(string value) { }

	public override void WriteLine(string format, object arg0) { }

}

