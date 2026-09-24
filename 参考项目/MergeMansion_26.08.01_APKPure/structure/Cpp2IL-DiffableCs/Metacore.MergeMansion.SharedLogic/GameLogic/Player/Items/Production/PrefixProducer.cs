namespace GameLogic.Player.Items.Production;

[MetaSerializableDerived(11)]
public class PrefixProducer : IItemSpawner, IItemProducer
{
	[CompilerGenerated]
	private sealed class <>c
	{
		public static readonly <>c <>9; //Field offset: 0x0
		public static Func<Int32, ItemDef> <>9__17_0; //Field offset: 0x8

		private static <>c() { }

		public <>c() { }

		internal ItemDef <.ctor>b__17_0(int item) { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass22_0
	{
		public PrefixProducer <>4__this; //Field offset: 0x10
		public Option<ProducerContext> producerContextOption; //Field offset: 0x18
		public SpawnFactoryState spawnFactoryState; //Field offset: 0x30
		public IGenerationContext context; //Field offset: 0x38

		public <>c__DisplayClass22_0() { }

		internal IItemDefinition <Produce>b__0(int index) { }

	}

	[CompilerGenerated]
	private sealed class <GetSpawnItems>d__26 : IEnumerable<IItemDefinition>, IEnumerable, IEnumerator<IItemDefinition>, IEnumerator, IDisposable
	{
		private int <>1__state; //Field offset: 0x10
		private IItemDefinition <>2__current; //Field offset: 0x18
		private int <>l__initialThreadId; //Field offset: 0x20
		public PrefixProducer <>4__this; //Field offset: 0x28
		private IGenerationContext context; //Field offset: 0x30
		public IGenerationContext <>3__context; //Field offset: 0x38
		private Option<ProducerContext> producerContextOption; //Field offset: 0x40
		public Option<ProducerContext> <>3__producerContextOption; //Field offset: 0x58
		private IEnumerator<IItemDefinition> <>7__wrap1; //Field offset: 0x70
		private Enumerator<ItemDef> <>7__wrap2; //Field offset: 0x78

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
		public <GetSpawnItems>d__26(int <>1__state) { }

		private void <>m__Finally1() { }

		private void <>m__Finally2() { }

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
	private string <Marker>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	private List<ItemDef> <Items>k__BackingField; //Field offset: 0x18
	[CompilerGenerated]
	private IItemSpawner <BaseProducer>k__BackingField; //Field offset: 0x20
	[CompilerGenerated]
	private InitialSequenceType <InitialSequenceType>k__BackingField; //Field offset: 0x28

	[MetaMember(3, MetaMemberFlags::None (0))]
	public IItemSpawner BaseProducer
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	[MetaMember(4, MetaMemberFlags::None (0))]
	private InitialSequenceType InitialSequenceType
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(2, MetaMemberFlags::None (0))]
	[MetaOnMemberDeserializationFailure("FixItemListRef")]
	private List<ItemDef> Items
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(1, MetaMemberFlags::None (0))]
	private string Marker
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public override int SpawnQuantity
	{
		 get { } //Length: 160
	}

	public PrefixProducer(InitialSequenceType initialSequenceType, string marker, IEnumerable<Int32> items, IItemSpawner baseProducer) { }

	public PrefixProducer(InitialSequenceType initialSequenceType, string marker, IEnumerable<ItemDef> items, IItemSpawner baseProducer) { }

	private PrefixProducer() { }

	public static List<ItemDef> FixItemListRef(MetaMemberDeserializationFailureParams failureParams) { }

	[CompilerGenerated]
	public IItemSpawner get_BaseProducer() { }

	[CompilerGenerated]
	private InitialSequenceType get_InitialSequenceType() { }

	[CompilerGenerated]
	private List<ItemDef> get_Items() { }

	[CompilerGenerated]
	private string get_Marker() { }

	public override int get_SpawnQuantity() { }

	private int GetCurrentSpawnIndex(SpawnFactoryState spawnFactoryState, Option<ProducerContext> producerContextOption, IMergeMansionGameConfig config) { }

	public override IEnumerable<ValueTuple`2<IItemDefinition, Int32>> GetOdds(IMergeMansionGameConfig config) { }

	[IteratorStateMachine(typeof(<GetSpawnItems>d__26))]
	public override IEnumerable<IItemDefinition> GetSpawnItems(IGenerationContext context, Option<ProducerContext> producerContextOption) { }

	public void GetUniquePredefinedItems(IMergeMansionGameConfig config, ref List<IItemDefinition>& outList) { }

	public override IEnumerable<IItemDefinition> Produce(IGenerationContext context, int quantity, Option<ProducerContext> producerContextOption, IEnumerable<IItemDefinition> allowedItems = null) { }

	[CompilerGenerated]
	public void set_BaseProducer(IItemSpawner value) { }

	[CompilerGenerated]
	private void set_InitialSequenceType(InitialSequenceType value) { }

	[CompilerGenerated]
	private void set_Items(List<ItemDef> value) { }

	[CompilerGenerated]
	private void set_Marker(string value) { }

	public override F64 TimeSkipPriceGems(IGenerationContext context) { }

	public bool UseBaseProducer(IGenerationContext context, Option<ProducerContext> producerContextOption) { }

}

