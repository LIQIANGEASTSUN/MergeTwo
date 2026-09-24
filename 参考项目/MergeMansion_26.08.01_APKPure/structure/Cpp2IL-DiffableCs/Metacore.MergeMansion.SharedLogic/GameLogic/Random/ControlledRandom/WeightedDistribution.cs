namespace GameLogic.Random.ControlledRandom;

public class WeightedDistribution
{
	[CompilerGenerated]
	private sealed class <>c
	{
		public static readonly <>c <>9; //Field offset: 0x0
		[TupleElementNames(new IL2CPP_TYPE_STRING[] {"Value", "Index"})]
		public static Func<ValueTuple`2<F32, Int32>, Weight> <>9__3_0; //Field offset: 0x8

		private static <>c() { }

		public <>c() { }

		internal Weight <.ctor>b__3_0(ValueTuple<F32, Int32> pair) { }

	}

	private static readonly F32 minWeight; //Field offset: 0x0
	private static readonly F32 maxWeight; //Field offset: 0x4
	private Weight[] weights; //Field offset: 0x10

	private static WeightedDistribution() { }

	public WeightedDistribution(List<F32> initializerList) { }

	public WeightedDistribution(Weight[] existingWeights) { }

	public Weight[] GetWeights() { }

	private static void HeapTopUpdated(IList<Weight> weights, CompareByNextTime compare) { }

	public void Initialize(RandomPCG rng) { }

	public int PickRandom(RandomPCG rng) { }

}

