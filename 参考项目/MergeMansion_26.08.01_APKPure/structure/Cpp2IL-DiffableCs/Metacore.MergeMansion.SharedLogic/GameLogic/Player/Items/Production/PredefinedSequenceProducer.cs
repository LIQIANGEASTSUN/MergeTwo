namespace GameLogic.Player.Items.Production;

[MetaSerializableDerived(13)]
public class PredefinedSequenceProducer : IItemSpawner, IItemProducer
{
	[CompilerGenerated]
	private sealed class <>c__DisplayClass15_0
	{
		public IGenerationContext context; //Field offset: 0x10

		public <>c__DisplayClass15_0() { }

		internal F64 <TimeSkipPriceGems>b__0(IItemOdds item) { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass19_0
	{
		public IGenerationContext context; //Field offset: 0x10

		public <>c__DisplayClass19_0() { }

		internal IItemDefinition <GetSpawnItems>b__0(ItemDef item) { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass21_0
	{
		public IMergeMansionGameConfig config; //Field offset: 0x10

		public <>c__DisplayClass21_0() { }

		internal ValueTuple<IItemDefinition, Int32> <GetTotalSequence>b__0(ItemOdds item) { }

	}

	[CompilerGenerated]
	private sealed class <Produce>d__18 : IEnumerable<IItemDefinition>, IEnumerable, IEnumerator<IItemDefinition>, IEnumerator, IDisposable
	{
		private int <>1__state; //Field offset: 0x10
		private IItemDefinition <>2__current; //Field offset: 0x18
		private int <>l__initialThreadId; //Field offset: 0x20
		private int quantity; //Field offset: 0x24
		public int <>3__quantity; //Field offset: 0x28
		public PredefinedSequenceProducer <>4__this; //Field offset: 0x30
		private Option<ProducerContext> producerContextOption; //Field offset: 0x38
		public Option<ProducerContext> <>3__producerContextOption; //Field offset: 0x50
		private IGenerationContext context; //Field offset: 0x68
		public IGenerationContext <>3__context; //Field offset: 0x70
		private IEnumerable<IItemDefinition> allowedItems; //Field offset: 0x78
		public IEnumerable<IItemDefinition> <>3__allowedItems; //Field offset: 0x80
		private ulong <itemIndex>5__2; //Field offset: 0x88
		private ulong <accumulatedIndex>5__3; //Field offset: 0x90
		private int <accumulatedQuantity>5__4; //Field offset: 0x98
		private Enumerator<ItemOdds> <>7__wrap4; //Field offset: 0xA0
		private ItemOdds <odds>5__6; //Field offset: 0xB8
		private int <weight>5__7; //Field offset: 0xC0
		private int <i>5__8; //Field offset: 0xC4

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
		public <Produce>d__18(int <>1__state) { }

		private void <>m__Finally1() { }

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

	[CompilerGenerated]
	private List<ItemOdds> <OddsList>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	private ulong <TotalCount>k__BackingField; //Field offset: 0x18
	[CompilerGenerated]
	private List<ItemDef> <UniqueItems>k__BackingField; //Field offset: 0x20

	[MetaMember(1, MetaMemberFlags::None (0))]
	private List<ItemOdds> OddsList
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public override int SpawnQuantity
	{
		 get { } //Length: 8
	}

	[MetaMember(2, MetaMemberFlags::None (0))]
	private ulong TotalCount
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(3, MetaMemberFlags::None (0))]
	[MetaOnMemberDeserializationFailure("FixItemListRef")]
	private List<ItemDef> UniqueItems
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private PredefinedSequenceProducer() { }

	public PredefinedSequenceProducer(IEnumerable<ValueTuple`2<Int32, Int32>> oddsList) { }

	public static List<ItemDef> FixItemListRef(MetaMemberDeserializationFailureParams failureParams) { }

	[CompilerGenerated]
	private List<ItemOdds> get_OddsList() { }

	public override int get_SpawnQuantity() { }

	[CompilerGenerated]
	private ulong get_TotalCount() { }

	[CompilerGenerated]
	private List<ItemDef> get_UniqueItems() { }

	private ulong GetItemIndexForProduce(Option<ProducerContext> producerContextOption, IMergeMansionGameConfig config) { }

	public override IEnumerable<ValueTuple`2<IItemDefinition, Int32>> GetOdds(IMergeMansionGameConfig config) { }

	public override IEnumerable<IItemDefinition> GetSpawnItems(IGenerationContext context, Option<ProducerContext> producerContextOption) { }

	public IEnumerable<ValueTuple`2<IItemDefinition, Int32>> GetTotalSequence(IMergeMansionGameConfig config) { }

	[IteratorStateMachine(typeof(<Produce>d__18))]
	public override IEnumerable<IItemDefinition> Produce(IGenerationContext context, int quantity, Option<ProducerContext> producerContextOption, IEnumerable<IItemDefinition> allowedItems = null) { }

	[CompilerGenerated]
	private void set_OddsList(List<ItemOdds> value) { }

	[CompilerGenerated]
	private void set_TotalCount(ulong value) { }

	[CompilerGenerated]
	private void set_UniqueItems(List<ItemDef> value) { }

	public override F64 TimeSkipPriceGems(IGenerationContext context) { }

}

