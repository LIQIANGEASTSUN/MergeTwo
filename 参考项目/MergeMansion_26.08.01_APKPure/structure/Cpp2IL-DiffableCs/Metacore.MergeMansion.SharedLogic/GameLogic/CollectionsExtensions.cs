namespace GameLogic;

[Extension]
public static class CollectionsExtensions
{
	[CompilerGenerated]
	private sealed class <AsEnumerable>d__3 : IEnumerable<TValue>, IEnumerable, IEnumerator<TValue>, IEnumerator, IDisposable
	{
		private int <>1__state; //Field offset: 0x0
		private TValue <>2__current; //Field offset: 0x0
		private int <>l__initialThreadId; //Field offset: 0x0
		private TValue value; //Field offset: 0x0
		public TValue <>3__value; //Field offset: 0x0

		private override TValue System.Collections.Generic.IEnumerator<TValue>.Current
		{
			[DebuggerHidden]
			private get { } //Length: 64
		}

		private override object System.Collections.IEnumerator.Current
		{
			[DebuggerHidden]
			private get { } //Length: 160
		}

		[DebuggerHidden]
		public <AsEnumerable>d__3`1(int <>1__state) { }

		private override bool MoveNext() { }

		[DebuggerHidden]
		private override IEnumerator<TValue> System.Collections.Generic.IEnumerable<TValue>.GetEnumerator() { }

		[DebuggerHidden]
		private override TValue System.Collections.Generic.IEnumerator<TValue>.get_Current() { }

		[DebuggerHidden]
		private override IEnumerator System.Collections.IEnumerable.GetEnumerator() { }

		[DebuggerHidden]
		private override object System.Collections.IEnumerator.get_Current() { }

		[DebuggerHidden]
		private override void System.Collections.IEnumerator.Reset() { }

		[DebuggerHidden]
		private override void System.IDisposable.Dispose() { }

	}

	[CompilerGenerated]
	private sealed class <CommonKeys>d__1 : IEnumerable<TKey>, IEnumerable, IEnumerator<TKey>, IEnumerator, IDisposable
	{
		private int <>1__state; //Field offset: 0x0
		private TKey <>2__current; //Field offset: 0x0
		private int <>l__initialThreadId; //Field offset: 0x0
		private IDictionary<TKey, TValue> firstDict; //Field offset: 0x0
		public IDictionary<TKey, TValue> <>3__firstDict; //Field offset: 0x0
		private IDictionary<TKey, TOtherValue> secondDict; //Field offset: 0x0
		public IDictionary<TKey, TOtherValue> <>3__secondDict; //Field offset: 0x0
		private IEnumerator<TKey> <>7__wrap1; //Field offset: 0x0

		private override TKey System.Collections.Generic.IEnumerator<TKey>.Current
		{
			[DebuggerHidden]
			private get { } //Length: 68
		}

		private override object System.Collections.IEnumerator.Current
		{
			[DebuggerHidden]
			private get { } //Length: 164
		}

		[DebuggerHidden]
		public <CommonKeys>d__1`3(int <>1__state) { }

		private void <>m__Finally1() { }

		private override bool MoveNext() { }

		[DebuggerHidden]
		private override IEnumerator<TKey> System.Collections.Generic.IEnumerable<TKey>.GetEnumerator() { }

		[DebuggerHidden]
		private override TKey System.Collections.Generic.IEnumerator<TKey>.get_Current() { }

		[DebuggerHidden]
		private override IEnumerator System.Collections.IEnumerable.GetEnumerator() { }

		[DebuggerHidden]
		private override object System.Collections.IEnumerator.get_Current() { }

		[DebuggerHidden]
		private override void System.Collections.IEnumerator.Reset() { }

		[DebuggerHidden]
		private override void System.IDisposable.Dispose() { }

	}


	[Extension]
	[IteratorStateMachine(typeof(<AsEnumerable>d__3`1))]
	public static IEnumerable<TValue> AsEnumerable(TValue value) { }

	[Extension]
	[IteratorStateMachine(typeof(<CommonKeys>d__1`3))]
	public static IEnumerable<TKey> CommonKeys(IDictionary<TKey, TValue> firstDict, IDictionary<TKey, TOtherValue> secondDict) { }

	[Extension]
	public static bool ContainsReference(Span<T> span, T value) { }

	[Extension]
	public static bool ContainsValue(IReadOnlyDictionary<TKey, TValue> dictionary, TValue value) { }

	[Extension]
	public static bool ContainsValue(T[] array, T value, int length) { }

	[Extension]
	public static TValue ElementAtOrDefault(IEnumerable<TValue> collection, int index) { }

	[Extension]
	public static Nullable<Int32> FindIndex(IEnumerable<T> collection, Func<T, Boolean> matcher) { }

	[Extension]
	public static void IncrementKey(IDictionary<TKey, Int32> counters, TKey entry, int increment = 1) { }

	public static int NullableCompare(T a, T b) { }

	[Extension]
	public static List<T> NullifyIfEmpty(List<T> list) { }

	[Extension]
	public static Dictionary<TKey, TValue> ShallowClone(Dictionary<TKey, TValue> dictionary) { }

	[Extension]
	public static IEnumerable<TInfo> UnwrapMetaRefs(List<MetaRef`1<TInfo>> metaRefs) { }

}

