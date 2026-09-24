namespace GameLogic.Random;

[Extension]
public static class RandomExtensions
{
	[CompilerGenerated]
	private sealed class <>c__0
	{
		public static readonly <>c__0<T> <>9; //Field offset: 0x0
		[TupleElementNames(new IL2CPP_TYPE_STRING[] {"Element", "Weight"})]
		public static Func<ValueTuple`2<T, Int32>, Int32> <>9__0_0; //Field offset: 0x0

		private static <>c__0`1() { }

		public <>c__0`1() { }

		internal int <PickWeighted>b__0_0(ValueTuple<T, Int32> pair) { }

	}

	[CompilerGenerated]
	private sealed class <>c__1
	{
		public static readonly <>c__1<T> <>9; //Field offset: 0x0
		[TupleElementNames(new IL2CPP_TYPE_STRING[] {"Element", "Weight"})]
		public static Func<ValueTuple`2<T, Int32>, Int32> <>9__1_0; //Field offset: 0x0

		private static <>c__1`1() { }

		public <>c__1`1() { }

		internal int <PickWeightedOrDefault>b__1_0(ValueTuple<T, Int32> pair) { }

	}

	[CompilerGenerated]
	private sealed class <>c__2
	{
		public static readonly <>c__2<T> <>9; //Field offset: 0x0
		[TupleElementNames(new IL2CPP_TYPE_STRING[] {"Key", "Value"})]
		public static Func<KeyValuePair`2<T, Int32>, ValueTuple`2<T, Int32>> <>9__2_0; //Field offset: 0x0

		private static <>c__2`1() { }

		public <>c__2`1() { }

		internal ValueTuple<T, Int32> <PickWeightedOrDefault>b__2_0(KeyValuePair<T, Int32> kvp) { }

	}


	[Extension]
	[Obsolete("This function is BROKEN! Use PickWeightedOrDefault instead. Kept only for FlashSales AB test.")]
	public static T PickWeighted(RandomPCG randomGenerator, ICollection<ValueTuple`2<T, Int32>> source, T defaultValue = null) { }

	[Extension]
	public static T PickWeightedOrDefault(RandomPCG randomGenerator, IReadOnlyList<ValueTuple`2<T, Int32>> source, T defaultValue = null) { }

	[Extension]
	public static T PickWeightedOrDefault(RandomPCG randomGenerator, IReadOnlyDictionary<T, Int32> source, T defaultValue = null) { }

}

