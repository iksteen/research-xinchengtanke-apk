namespace System.Xml.Linq;

public abstract class XContainer : XNode
{
	[CompilerGenerated]
	private sealed class <GetElements>d__40 : IEnumerable<XElement>, IEnumerable, IEnumerator<XElement>, IDisposable, IEnumerator
	{
		private int <>1__state; //Field offset: 0x10
		private XElement <>2__current; //Field offset: 0x18
		private int <>l__initialThreadId; //Field offset: 0x20
		public XContainer <>4__this; //Field offset: 0x28
		private XNode <n>5__1; //Field offset: 0x30
		private XName name; //Field offset: 0x38
		public XName <>3__name; //Field offset: 0x40

		private override XElement System.Collections.Generic.IEnumerator<System.Xml.Linq.XElement>.Current
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
		public <GetElements>d__40(int <>1__state) { }

		private override bool MoveNext() { }

		[DebuggerHidden]
		private override IEnumerator<XElement> System.Collections.Generic.IEnumerable<System.Xml.Linq.XElement>.GetEnumerator() { }

		[DebuggerHidden]
		private override XElement System.Collections.Generic.IEnumerator<System.Xml.Linq.XElement>.get_Current() { }

		[DebuggerHidden]
		private override IEnumerator System.Collections.IEnumerable.GetEnumerator() { }

		[DebuggerHidden]
		private override object System.Collections.IEnumerator.get_Current() { }

		[DebuggerHidden]
		private override void System.Collections.IEnumerator.Reset() { }

		[DebuggerHidden]
		private override void System.IDisposable.Dispose() { }

	}

	internal object content; //Field offset: 0x28

	internal XContainer() { }

	internal XContainer(XContainer other) { }

	public void Add(object content) { }

	internal override void AddAttribute(XAttribute a) { }

	internal override void AddAttributeSkipNotify(XAttribute a) { }

	internal void AddContentSkipNotify(object content) { }

	internal void AddNode(XNode n) { }

	internal void AddNodeSkipNotify(XNode n) { }

	internal void AddString(string s) { }

	internal void AddStringSkipNotify(string s) { }

	internal void AppendNode(XNode n) { }

	internal void AppendNodeSkipNotify(XNode n) { }

	internal virtual void AppendText(StringBuilder sb) { }

	internal void ConvertTextToNode() { }

	public XElement Element(XName name) { }

	public IEnumerable<XElement> Elements(XName name) { }

	internal static string GetDateTimeString(DateTime value) { }

	[IteratorStateMachine(/*Cpp2IL Warning: missing at least one required parameter*/)]
	private IEnumerable<XElement> GetElements(XName name) { }

	internal static string GetStringValue(object value) { }

	internal void ReadContentFrom(XmlReader r) { }

	internal void ReadContentFrom(XmlReader r, LoadOptions o) { }

	internal override void ValidateNode(XNode node, XNode previous) { }

	internal override void ValidateString(string s) { }

	internal void WriteContentTo(XmlWriter writer) { }

}

