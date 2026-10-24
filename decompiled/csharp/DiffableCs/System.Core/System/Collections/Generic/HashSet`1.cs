namespace System.Collections.Generic;

[DebuggerDisplay(/*Cpp2IL Warning: missing at least one required parameter*/)]
[DebuggerTypeProxy(/*Cpp2IL Warning: missing at least one required parameter*/)]
public class HashSet : ICollection<T>, IEnumerable<T>, IEnumerable, IReadOnlyCollection<T>, ISerializable, IDeserializationCallback
{
	internal struct Enumerator : IEnumerator<T>, IDisposable, IEnumerator
	{
		private HashSet<T> _set; //Field offset: 0x0
		private int _index; //Field offset: 0x0
		private int _version; //Field offset: 0x0
		private T _current; //Field offset: 0x0

		public override T Current
		{
			 get { } //Length: 8
		}

		private override object System.Collections.IEnumerator.Current
		{
			private get { } //Length: 232
		}

		internal Enumerator(HashSet<T> set) { }

		public override void Dispose() { }

		public override T get_Current() { }

		public override bool MoveNext() { }

		private override object System.Collections.IEnumerator.get_Current() { }

		private override void System.Collections.IEnumerator.Reset() { }

	}

	public struct Slot
	{
		internal int hashCode; //Field offset: 0x0
		internal int next; //Field offset: 0x0
		internal T value; //Field offset: 0x0

	}

	private const int Lower31BitMask = 2147483647; //Field offset: 0x0
	private const int StackAllocThreshold = 100; //Field offset: 0x0
	private const int ShrinkThreshold = 3; //Field offset: 0x0
	private const string CapacityName = "Capacity"; //Field offset: 0x0
	private const string ElementsName = "Elements"; //Field offset: 0x0
	private const string ComparerName = "Comparer"; //Field offset: 0x0
	private const string VersionName = "Version"; //Field offset: 0x0
	private Int32[] _buckets; //Field offset: 0x0
	private Slot<T>[] _slots; //Field offset: 0x0
	private int _count; //Field offset: 0x0
	private int _lastIndex; //Field offset: 0x0
	private int _freeList; //Field offset: 0x0
	private IEqualityComparer<T> _comparer; //Field offset: 0x0
	private int _version; //Field offset: 0x0
	private SerializationInfo _siInfo; //Field offset: 0x0

	public override int Count
	{
		 get { } //Length: 8
	}

	private override bool System.Collections.Generic.ICollection<T>.IsReadOnly
	{
		private get { } //Length: 8
	}

	public HashSet`1() { }

	public HashSet`1(IEqualityComparer<T> comparer) { }

	protected HashSet`1(SerializationInfo info, StreamingContext context) { }

	public override bool Add(T item) { }

	private bool AddIfNotPresent(T value) { }

	public override void Clear() { }

	public override bool Contains(T item) { }

	public override void CopyTo(T[] array, int arrayIndex) { }

	public void CopyTo(T[] array, int arrayIndex, int count) { }

	public void CopyTo(T[] array) { }

	public override int get_Count() { }

	public Enumerator<T> GetEnumerator() { }

	public override void GetObjectData(SerializationInfo info, StreamingContext context) { }

	private void IncreaseCapacity() { }

	private void Initialize(int capacity) { }

	private int InternalGetHashCode(T item) { }

	public override void OnDeserialization(object sender) { }

	public override bool Remove(T item) { }

	private void SetCapacity(int newSize) { }

	private override void System.Collections.Generic.ICollection<T>.Add(T item) { }

	private override bool System.Collections.Generic.ICollection<T>.get_IsReadOnly() { }

	private override IEnumerator<T> System.Collections.Generic.IEnumerable<T>.GetEnumerator() { }

	private override IEnumerator System.Collections.IEnumerable.GetEnumerator() { }

}

