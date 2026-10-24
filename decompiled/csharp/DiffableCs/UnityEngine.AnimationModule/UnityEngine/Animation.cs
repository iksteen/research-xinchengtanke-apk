namespace UnityEngine;

[DefaultMember(/*Cpp2IL Warning: missing at least one required parameter*/)]
[NativeHeader(/*Cpp2IL Warning: missing at least one required parameter*/)]
public sealed class Animation : Behaviour, IEnumerable
{
	private sealed class Enumerator : IEnumerator
	{
		private Animation m_Outer; //Field offset: 0x10
		private int m_CurrentIndex; //Field offset: 0x18

		public override object Current
		{
			 get { } //Length: 88
		}

		internal Enumerator(Animation outer) { }

		public override object get_Current() { }

		public override bool MoveNext() { }

		public override void Reset() { }

	}


	public bool isPlaying
	{
		[NativeName(/*Cpp2IL Warning: missing at least one required parameter*/)]
		 get { } //Length: 64
	}

	[NativeName(/*Cpp2IL Warning: missing at least one required parameter*/)]
	public bool get_isPlaying() { }

	public override IEnumerator GetEnumerator() { }

	[FreeFunction]
	internal AnimationState GetStateAtIndex(int index) { }

	[NativeName(/*Cpp2IL Warning: missing at least one required parameter*/)]
	internal int GetStateCount() { }

	public bool IsPlaying(string name) { }

	[ExcludeFromDocs]
	public bool Play() { }

	public bool Play(PlayMode mode) { }

	[ExcludeFromDocs]
	public bool Play(string animation) { }

	public bool Play(string animation, PlayMode mode) { }

	[NativeName(/*Cpp2IL Warning: missing at least one required parameter*/)]
	private bool PlayDefaultAnimation(PlayMode mode) { }

	public void Sample() { }

}

