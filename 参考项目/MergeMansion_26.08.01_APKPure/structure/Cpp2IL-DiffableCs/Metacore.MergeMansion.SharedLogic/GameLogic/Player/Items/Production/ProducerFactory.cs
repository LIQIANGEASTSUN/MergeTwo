namespace GameLogic.Player.Items.Production;

public class ProducerFactory : IProducerFactory
{
	[CompilerGenerated]
	private sealed class <>c
	{
		public static readonly <>c <>9; //Field offset: 0x0
		public static Func<Int32, ItemDef> <>9__4_0; //Field offset: 0x8

		private static <>c() { }

		public <>c() { }

		internal ItemDef <Create>b__4_0(int type) { }

	}

	[CompilerGenerated]
	private readonly IDictionary<String, IList`1<Int32>> <ItemSequences>k__BackingField; //Field offset: 0x10

	private IDictionary<String, IList`1<Int32>> ItemSequences
	{
		[CompilerGenerated]
		private get { } //Length: 8
	}

	public ProducerFactory(IDictionary<String, IList`1<Int32>> itemSequences) { }

	public override IItemSpawner Create(RollHistoryType rollType, string producerType, int markerString, InitialSequenceType initialSequenceType, string initialSequence, IEnumerable<ValueTuple`2<Int32, Int32>> pairs) { }

	private IItemSpawner Create(RollHistoryType rollType, string producerType, int markerString, IEnumerable<ValueTuple`2<Int32, Int32>> pairs) { }

	public override IOrderSpawner CreateOrderProducer(RollHistoryType rollType, string producerType, int markerString, IEnumerable<ValueTuple`2<OrderRequirementsId, Int32>> pairs) { }

	[CompilerGenerated]
	private IDictionary<String, IList`1<Int32>> get_ItemSequences() { }

	private static void ValidatePairsEmpty(string producerType, IEnumerable<ValueTuple`2<T, Int32>> pairs) { }

	private static void ValidatePairsNotEmpty(string producerType, IEnumerable<ValueTuple`2<T, Int32>> pairs) { }

}

