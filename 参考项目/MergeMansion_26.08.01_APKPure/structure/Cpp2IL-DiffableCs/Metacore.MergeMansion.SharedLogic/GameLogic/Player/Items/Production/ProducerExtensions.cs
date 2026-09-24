namespace GameLogic.Player.Items.Production;

[Extension]
public static class ProducerExtensions
{
	[CompilerGenerated]
	private sealed class <>c
	{
		public static readonly <>c <>9; //Field offset: 0x0
		public static Func<ItemOdds, Int32> <>9__1_0; //Field offset: 0x8

		private static <>c() { }

		public <>c() { }

		internal int <Average>b__1_0(ItemOdds odd) { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass1_0
	{
		public Func<IItemOdds, F64> view; //Field offset: 0x10

		public <>c__DisplayClass1_0() { }

		internal F64 <Average>b__1(F64 current, ItemOdds item) { }

	}


	[Extension]
	public static F64 Average(ICollection<ItemOdds> itemOdds, Func<IItemOdds, F64> view) { }

	[Extension]
	public static IItemDefinition Produce(IItemProducer producer, IGenerationContext context, Option<ProducerContext> producerContextOption, IEnumerable<IItemDefinition> allowedItems = null) { }

}

