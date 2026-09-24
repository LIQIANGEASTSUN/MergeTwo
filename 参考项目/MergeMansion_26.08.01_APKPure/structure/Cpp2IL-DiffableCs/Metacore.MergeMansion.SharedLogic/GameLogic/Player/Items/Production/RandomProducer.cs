namespace GameLogic.Player.Items.Production;

[MetaSerializableDerived(2)]
public class RandomProducer : IItemSpawner, IItemProducer
{
	[CompilerGenerated]
	private sealed class <>c
	{
		public static readonly <>c <>9; //Field offset: 0x0
		public static Func<ValueTuple`2<Int32, Int32>, ItemOdds> <>9__1_0; //Field offset: 0x8
		public static Func<IItemOdds, Int32> <>9__7_0; //Field offset: 0x10
		public static Func<ValueTuple`2<Int32, Int32>, Boolean> <>9__12_0; //Field offset: 0x18

		private static <>c() { }

		public <>c() { }

		internal ItemOdds <.ctor>b__1_0(ValueTuple<Int32, Int32> odd) { }

		internal int <Produce>b__7_0(IItemOdds odd) { }

		internal bool <ValidateOdds>b__12_0(ValueTuple<Int32, Int32> odd) { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass10_0
	{
		public IGenerationContext context; //Field offset: 0x10

		public <>c__DisplayClass10_0() { }

		internal F64 <TimeSkipPriceGems>b__0(IItemOdds item) { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass11_0
	{
		public IGenerationContext context; //Field offset: 0x10

		public <>c__DisplayClass11_0() { }

		internal IItemDefinition <GetSpawnItems>b__0(ItemOdds item) { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass2_0
	{
		public IMergeMansionGameConfig config; //Field offset: 0x10

		public <>c__DisplayClass2_0() { }

		internal ValueTuple<IItemDefinition, Int32> <GetOdds>b__0(ItemOdds odds) { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass7_0
	{
		public IGenerationContext context; //Field offset: 0x10
		public int totalOdds; //Field offset: 0x18
		public IReadOnlyList<IItemOdds> oddsList; //Field offset: 0x20

		public <>c__DisplayClass7_0() { }

		internal IItemDefinition <Produce>b__1(int _) { }

	}

	[CompilerGenerated]
	private List<ItemOdds> <OddsList>k__BackingField; //Field offset: 0x10

	[MetaMember(1, MetaMemberFlags::None (0))]
	public private List<ItemOdds> OddsList
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public override int SpawnQuantity
	{
		 get { } //Length: 8
	}

	private RandomProducer() { }

	public RandomProducer(List<ValueTuple`2<Int32, Int32>> oddsList) { }

	[CompilerGenerated]
	public List<ItemOdds> get_OddsList() { }

	public override int get_SpawnQuantity() { }

	public override IEnumerable<ValueTuple`2<IItemDefinition, Int32>> GetOdds(IMergeMansionGameConfig config) { }

	public override IEnumerable<IItemDefinition> GetSpawnItems(IGenerationContext context, Option<ProducerContext> producerContextOption) { }

	public override IEnumerable<IItemDefinition> Produce(IGenerationContext context, int quantity, Option<ProducerContext> producerContextOption, IEnumerable<IItemDefinition> allowedItems = null) { }

	[CompilerGenerated]
	private void set_OddsList(List<ItemOdds> value) { }

	public override F64 TimeSkipPriceGems(IGenerationContext context) { }

	[Conditional("UNITY_EDITOR")]
	[Conditional("DO_EXTRA_CHECKS")]
	private static void ValidateOdds(List<ValueTuple`2<Int32, Int32>> oddsList) { }

}

