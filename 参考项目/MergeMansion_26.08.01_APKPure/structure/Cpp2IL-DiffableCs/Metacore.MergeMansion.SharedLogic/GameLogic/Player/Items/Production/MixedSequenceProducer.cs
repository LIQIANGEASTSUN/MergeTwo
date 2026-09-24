namespace GameLogic.Player.Items.Production;

[MetaSerializableDerived(14)]
public class MixedSequenceProducer : IItemSpawner, IItemProducer
{
	[CompilerGenerated]
	private sealed class <>c__DisplayClass11_0
	{
		public IGenerationContext context; //Field offset: 0x10

		public <>c__DisplayClass11_0() { }

		internal F64 <TimeSkipPriceGems>b__0(IItemOdds item) { }

	}

	[CompilerGenerated]
	private sealed class <Produce>d__14 : IEnumerable<IItemDefinition>, IEnumerable, IEnumerator<IItemDefinition>, IEnumerator, IDisposable
	{
		private int <>1__state; //Field offset: 0x10
		private IItemDefinition <>2__current; //Field offset: 0x18
		private int <>l__initialThreadId; //Field offset: 0x20
		public MixedSequenceProducer <>4__this; //Field offset: 0x28
		private Option<ProducerContext> producerContextOption; //Field offset: 0x30
		public Option<ProducerContext> <>3__producerContextOption; //Field offset: 0x48
		private IGenerationContext context; //Field offset: 0x60
		public IGenerationContext <>3__context; //Field offset: 0x68
		private IEnumerable<IItemDefinition> allowedItems; //Field offset: 0x70
		public IEnumerable<IItemDefinition> <>3__allowedItems; //Field offset: 0x78
		private int quantity; //Field offset: 0x80
		public int <>3__quantity; //Field offset: 0x84
		private IMergeItem <relatedItem>5__2; //Field offset: 0x88
		private int <itemsFound>5__3; //Field offset: 0x90
		private int <tries>5__4; //Field offset: 0x94

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
		public <Produce>d__14(int <>1__state) { }

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
	private int <TotalCount>k__BackingField; //Field offset: 0x18

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
	private int TotalCount
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private MixedSequenceProducer() { }

	public MixedSequenceProducer(IEnumerable<ValueTuple`2<Int32, Int32>> oddsList) { }

	[CompilerGenerated]
	private List<ItemOdds> get_OddsList() { }

	public override int get_SpawnQuantity() { }

	[CompilerGenerated]
	private int get_TotalCount() { }

	public override IEnumerable<ValueTuple`2<IItemDefinition, Int32>> GetOdds(IMergeMansionGameConfig config) { }

	public override IEnumerable<IItemDefinition> GetSpawnItems(IGenerationContext context, Option<ProducerContext> producerContextOption) { }

	[IteratorStateMachine(typeof(<Produce>d__14))]
	public override IEnumerable<IItemDefinition> Produce(IGenerationContext context, int quantity, Option<ProducerContext> producerContextOption, IEnumerable<IItemDefinition> allowedItems = null) { }

	[CompilerGenerated]
	private void set_OddsList(List<ItemOdds> value) { }

	[CompilerGenerated]
	private void set_TotalCount(int value) { }

	public override F64 TimeSkipPriceGems(IGenerationContext context) { }

}

