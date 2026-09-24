namespace GameLogic.Player.Items.Production;

[MetaSerializableDerived(4)]
public class ControlledRandomProducer : IItemSpawner, IItemProducer
{
	[CompilerGenerated]
	private sealed class <>c__DisplayClass20_0
	{
		public IGenerationContext context; //Field offset: 0x10

		public <>c__DisplayClass20_0() { }

		internal F64 <TimeSkipPriceGems>b__0(IItemOdds item) { }

	}

	[CompilerGenerated]
	private sealed class <GetSpawnItems>d__21 : IEnumerable<IItemDefinition>, IEnumerable, IEnumerator<IItemDefinition>, IEnumerator, IDisposable
	{
		private int <>1__state; //Field offset: 0x10
		private IItemDefinition <>2__current; //Field offset: 0x18
		private int <>l__initialThreadId; //Field offset: 0x20
		public ControlledRandomProducer <>4__this; //Field offset: 0x28
		private IGenerationContext context; //Field offset: 0x30
		public IGenerationContext <>3__context; //Field offset: 0x38
		private int <count>5__2; //Field offset: 0x40
		private int <i>5__3; //Field offset: 0x44

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
		public <GetSpawnItems>d__21(int <>1__state) { }

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
	private RollHistoryType <RollType>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	private int <ItemType>k__BackingField; //Field offset: 0x14
	[CompilerGenerated]
	private List<ItemOdds> <GenerationOdds>k__BackingField; //Field offset: 0x18

	[MetaMember(3, MetaMemberFlags::None (0))]
	public List<ItemOdds> GenerationOdds
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	[MetaMember(2, MetaMemberFlags::None (0))]
	public int ItemType
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

	private ControlledRandomProducer() { }

	public ControlledRandomProducer(RollHistoryType rollType, int itemId, List<ValueTuple`2<Int32, Int32>> oddsList) { }

	private List<ValueTuple`2<Int32, Int32>> AllowedItems(IEnumerable<ValueTuple`2<Int32, Int32>> originalItems, IEnumerable<IItemDefinition> allowedItems) { }

	[CompilerGenerated]
	public List<ItemOdds> get_GenerationOdds() { }

	[CompilerGenerated]
	public int get_ItemType() { }

	[CompilerGenerated]
	public RollHistoryType get_RollType() { }

	public override int get_SpawnQuantity() { }

	public override IEnumerable<ValueTuple`2<IItemDefinition, Int32>> GetOdds(IMergeMansionGameConfig config) { }

	private IItemDefinition GetOddsItemDefinition(IMergeMansionGameConfig config, int itemId) { }

	[IteratorStateMachine(typeof(<GetSpawnItems>d__21))]
	public override IEnumerable<IItemDefinition> GetSpawnItems(IGenerationContext context, Option<ProducerContext> producerContextOption) { }

	public override IEnumerable<IItemDefinition> Produce(IGenerationContext context, int quantity, Option<ProducerContext> producerContextOption, IEnumerable<IItemDefinition> allowedItems = null) { }

	[CompilerGenerated]
	public void set_GenerationOdds(List<ItemOdds> value) { }

	[CompilerGenerated]
	public void set_ItemType(int value) { }

	[CompilerGenerated]
	public void set_RollType(RollHistoryType value) { }

	public override F64 TimeSkipPriceGems(IGenerationContext context) { }

	[Conditional("UNITY_EDITOR")]
	[Conditional("DO_EXTRA_CHECKS")]
	private void ValidateOdds(List<ValueTuple`2<Int32, Int32>> oddsList) { }

}

