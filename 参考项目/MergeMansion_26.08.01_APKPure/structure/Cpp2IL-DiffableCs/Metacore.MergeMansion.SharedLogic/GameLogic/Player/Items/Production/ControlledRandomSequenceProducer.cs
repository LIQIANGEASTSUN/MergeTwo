namespace GameLogic.Player.Items.Production;

[MetaSerializableDerived(18)]
public class ControlledRandomSequenceProducer : IItemSpawner, IItemProducer
{
	[CompilerGenerated]
	private sealed class <>c__DisplayClass19_0
	{
		public IGenerationContext context; //Field offset: 0x10

		public <>c__DisplayClass19_0() { }

		internal F64 <TimeSkipPriceGems>b__0(IItemOdds item) { }

	}

	[CompilerGenerated]
	private sealed class <Produce>d__23 : IEnumerable<IItemDefinition>, IEnumerable, IEnumerator<IItemDefinition>, IEnumerator, IDisposable
	{
		private int <>1__state; //Field offset: 0x10
		private IItemDefinition <>2__current; //Field offset: 0x18
		private int <>l__initialThreadId; //Field offset: 0x20
		public ControlledRandomSequenceProducer <>4__this; //Field offset: 0x28
		private Option<ProducerContext> producerContextOption; //Field offset: 0x30
		public Option<ProducerContext> <>3__producerContextOption; //Field offset: 0x48
		private int quantity; //Field offset: 0x60
		public int <>3__quantity; //Field offset: 0x64
		private IGenerationContext context; //Field offset: 0x68
		public IGenerationContext <>3__context; //Field offset: 0x70
		private IEnumerable<IItemDefinition> allowedItems; //Field offset: 0x78
		public IEnumerable<IItemDefinition> <>3__allowedItems; //Field offset: 0x80
		private ProducerContext <producerContext>5__2; //Field offset: 0x88
		private List<Int32> <itemIdList>5__3; //Field offset: 0x98
		private int <itemsFound>5__4; //Field offset: 0xA0
		private int <tries>5__5; //Field offset: 0xA4

		private override IItemDefinition System.Collections.Generic.IEnumerator<GameLogic.Player.Items.IItemDefinition>.Current
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
		public <Produce>d__23(int <>1__state) { }

		private override bool MoveNext() { }

		[DebuggerHidden]
		private override IEnumerator<IItemDefinition> System.Collections.Generic.IEnumerable<GameLogic.Player.Items.IItemDefinition>.GetEnumerator() { }

		[DebuggerHidden]
		private override IItemDefinition System.Collections.Generic.IEnumerator<GameLogic.Player.Items.IItemDefinition>.get_Current() { }

		[DebuggerHidden]
		private override IEnumerator System.Collections.IEnumerable.GetEnumerator() { }

		[DebuggerHidden]
		private override object System.Collections.IEnumerator.get_Current() { }

		[DebuggerHidden]
		private override void System.Collections.IEnumerator.Reset() { }

		[DebuggerHidden]
		private override void System.IDisposable.Dispose() { }

	}

	private const int MaxWeight = 1024; //Field offset: 0x0
	[CompilerGenerated]
	private RollHistoryType <RollType>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	private int <ItemType>k__BackingField; //Field offset: 0x14
	[CompilerGenerated]
	private int <TotalWeight>k__BackingField; //Field offset: 0x18
	[CompilerGenerated]
	private List<ItemOdds> <OddsList>k__BackingField; //Field offset: 0x20

	[MetaMember(2, MetaMemberFlags::None (0))]
	public int ItemType
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	[MetaMember(4, MetaMemberFlags::None (0))]
	public List<ItemOdds> OddsList
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	[MetaMember(1, MetaMemberFlags::None (0))]
	public RollHistoryType RollType
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	public override int SpawnQuantity
	{
		 get { } //Length: 8
	}

	[MetaMember(3, MetaMemberFlags::None (0))]
	private int TotalWeight
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private ControlledRandomSequenceProducer() { }

	public ControlledRandomSequenceProducer(RollHistoryType rollType, int itemId, List<ValueTuple`2<Int32, Int32>> oddsList) { }

	[CompilerGenerated]
	public int get_ItemType() { }

	[CompilerGenerated]
	public List<ItemOdds> get_OddsList() { }

	[CompilerGenerated]
	public RollHistoryType get_RollType() { }

	public override int get_SpawnQuantity() { }

	[CompilerGenerated]
	private int get_TotalWeight() { }

	public override IEnumerable<ValueTuple`2<IItemDefinition, Int32>> GetOdds(IMergeMansionGameConfig config) { }

	public override IEnumerable<IItemDefinition> GetSpawnItems(IGenerationContext context, Option<ProducerContext> producerContextOption) { }

	[IteratorStateMachine(typeof(<Produce>d__23))]
	public override IEnumerable<IItemDefinition> Produce(IGenerationContext context, int quantity, Option<ProducerContext> producerContextOption, IEnumerable<IItemDefinition> allowedItems = null) { }

	[CompilerGenerated]
	public void set_ItemType(int value) { }

	[CompilerGenerated]
	public void set_OddsList(List<ItemOdds> value) { }

	[CompilerGenerated]
	public void set_RollType(RollHistoryType value) { }

	[CompilerGenerated]
	private void set_TotalWeight(int value) { }

	public override F64 TimeSkipPriceGems(IGenerationContext context) { }

}

