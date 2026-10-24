namespace System.Xml.Linq;

public abstract class XObject : IXmlLineInfo
{
	[CompilerGenerated]
	private sealed class <Annotations>d__16 : IEnumerable<T>, IEnumerable, IEnumerator<T>, IDisposable, IEnumerator
	{
		private int <>1__state; //Field offset: 0x0
		private T <>2__current; //Field offset: 0x0
		private int <>l__initialThreadId; //Field offset: 0x0
		public XObject <>4__this; //Field offset: 0x0
		private Object[] <a>5__1; //Field offset: 0x0
		private int <i>5__2; //Field offset: 0x0

		private override T System.Collections.Generic.IEnumerator<T>.Current
		{
			[DebuggerHidden]
			private get { } //Length: 8
		}

		private override object System.Collections.IEnumerator.Current
		{
			[DebuggerHidden]
			private get { } //Length: 8
		}

		[DebuggerHidden]
		public <Annotations>d__16`1(int <>1__state) { }

		private override bool MoveNext() { }

		[DebuggerHidden]
		private override IEnumerator<T> System.Collections.Generic.IEnumerable<T>.GetEnumerator() { }

		[DebuggerHidden]
		private override T System.Collections.Generic.IEnumerator<T>.get_Current() { }

		[DebuggerHidden]
		private override IEnumerator System.Collections.IEnumerable.GetEnumerator() { }

		[DebuggerHidden]
		private override object System.Collections.IEnumerator.get_Current() { }

		[DebuggerHidden]
		private override void System.Collections.IEnumerator.Reset() { }

		[DebuggerHidden]
		private override void System.IDisposable.Dispose() { }

	}

	internal XContainer parent; //Field offset: 0x10
	internal object annotations; //Field offset: 0x18

	public string BaseUri
	{
		 get { } //Length: 144
	}

	internal bool HasBaseUri
	{
		internal get { } //Length: 88
	}

	public abstract XmlNodeType NodeType
	{
		 get { } //Length: 0
	}

	private override int System.Xml.IXmlLineInfo.LineNumber
	{
		private get { } //Length: 88
	}

	private override int System.Xml.IXmlLineInfo.LinePosition
	{
		private get { } //Length: 88
	}

	internal XObject() { }

	public void AddAnnotation(object annotation) { }

	public object Annotation(Type type) { }

	public T Annotation() { }

	[IteratorStateMachine(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public IEnumerable<T> Annotations() { }

	public string get_BaseUri() { }

	internal bool get_HasBaseUri() { }

	public abstract XmlNodeType get_NodeType() { }

	internal SaveOptions GetSaveOptionsFromAnnotations() { }

	internal bool NotifyChanged(object sender, XObjectChangeEventArgs e) { }

	internal bool NotifyChanging(object sender, XObjectChangeEventArgs e) { }

	internal void SetBaseUri(string baseUri) { }

	internal void SetLineInfo(int lineNumber, int linePosition) { }

	internal bool SkipNotify() { }

	private override int System.Xml.IXmlLineInfo.get_LineNumber() { }

	private override int System.Xml.IXmlLineInfo.get_LinePosition() { }

	private override bool System.Xml.IXmlLineInfo.HasLineInfo() { }

}

