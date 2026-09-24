namespace GameLogic.Player.Items.Production;

[MetaSerializableDerived(1)]
public class ConstantProducer : IItemSpawner, IItemProducer
{
	[CompilerGenerated]
	private sealed class <>c
	{
		public static readonly <>c <>9; //Field offset: 0x0
		[TupleElementNames(new IL2CPP_TYPE_STRING[] {"item", null})]
		public static Func<Int32, ValueTuple`2<Int32, Int32>> <>9__10_0; //Field offset: 0x8
		public static Func<Int32, ItemDef> <>9__11_0; //Field offset: 0x10

		private static <>c() { }

		public <>c() { }

		internal ValueTuple<Int32, Int32> <.ctor>b__10_0(int item) { }

		internal ItemDef <.ctor>b__11_0(int item) { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass13_0
	{
		public IMergeMansionGameConfig config; //Field offset: 0x10

		public <>c__DisplayClass13_0() { }

		internal ValueTuple<IItemDefinition, Int32> <GetItemQuantityPairs>b__0(ItemDef product, int quantity) { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass15_0
	{
		public IGenerationContext context; //Field offset: 0x10

		public <>c__DisplayClass15_0() { }

		internal IItemDefinition <Produce>b__0(ItemDef item) { }

	}

	[CompilerGenerated]
	private sealed class <>c__DisplayClass19_0
	{
		public IGenerationContext context; //Field offset: 0x10

		public <>c__DisplayClass19_0() { }

		internal F64 <TimeSkipPriceGems>b__0(F64 current, ItemDef item) { }

	}

	[CompilerGenerated]
	private sealed class <GetOdds>d__14 : IEnumerable<ValueTuple`2<IItemDefinition, Int32>>, IEnumerable, IEnumerator<ValueTuple`2<IItemDefinition, Int32>>, IEnumerator, IDisposable
	{
		private int <>1__state; //Field offset: 0x10
		private ValueTuple<IItemDefinition, Int32> <>2__current; //Field offset: 0x18
		private int <>l__initialThreadId; //Field offset: 0x28
		public ConstantProducer <>4__this; //Field offset: 0x30
		private IMergeMansionGameConfig config; //Field offset: 0x38
		public IMergeMansionGameConfig <>3__config; //Field offset: 0x40
		private Enumerator<ItemDef> <>7__wrap1; //Field offset: 0x48

		private override ValueTuple<IItemDefinition, Int32> System.Collections.Generic.IEnumerator<(GameLogic.Player.Items.IItemDefinition,System.Int32)>.Current
		{
			[DebuggerHidden]
			private get { } //Length: 12
		}

		private override object System.Collections.IEnumerator.Current
		{
			[DebuggerHidden]
			private get { } //Length: 92
		}

		[DebuggerHidden]
		public <GetOdds>d__14(int <>1__state) { }

		private void <>m__Finally1() { }

		private override bool MoveNext() { }

		[DebuggerHidden]
		private override IEnumerator<ValueTuple`2<IItemDefinition, Int32>> System.Collections.Generic.IEnumerable<(GameLogic.Player.Items.IItemDefinition,System.Int32)>.GetEnumerator() { }

		[DebuggerHidden]
		private override ValueTuple<IItemDefinition, Int32> System.Collections.Generic.IEnumerator<(GameLogic.Player.Items.IItemDefinition,System.Int32)>.get_Current() { }

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
	private sealed class <GetSpawnItems>d__20 : IEnumerable<IItemDefinition>, IEnumerable, IEnumerator<IItemDefinition>, IEnumerator, IDisposable
	{
		private int <>1__state; //Field offset: 0x10
		private IItemDefinition <>2__current; //Field offset: 0x18
		private int <>l__initialThreadId; //Field offset: 0x20
		public ConstantProducer <>4__this; //Field offset: 0x28
		private IGenerationContext context; //Field offset: 0x30
		public IGenerationContext <>3__context; //Field offset: 0x38
		private Enumerator<ItemDef> <>7__wrap1; //Field offset: 0x40

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
		public <GetSpawnItems>d__20(int <>1__state) { }

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
	private sealed class <Produce>d__15 : IEnumerable<IItemDefinition>, IEnumerable, IEnumerator<IItemDefinition>, IEnumerator, IDisposable
	{
		private int <>1__state; //Field offset: 0x10
		private IItemDefinition <>2__current; //Field offset: 0x18
		private int <>l__initialThreadId; //Field offset: 0x20
		private IGenerationContext context; //Field offset: 0x28
		public IGenerationContext <>3__context; //Field offset: 0x30
		public ConstantProducer <>4__this; //Field offset: 0x38
		private IEnumerable<IItemDefinition> allowedItems; //Field offset: 0x40
		public IEnumerable<IItemDefinition> <>3__allowedItems; //Field offset: 0x48
		private int quantity; //Field offset: 0x50
		public int <>3__quantity; //Field offset: 0x54
		private List<IItemDefinition> <products>5__2; //Field offset: 0x58
		private int <remaining>5__3; //Field offset: 0x60
		private IEnumerator<ValueTuple`2<IItemDefinition, Int32>> <>7__wrap3; //Field offset: 0x68
		private IItemDefinition <product>5__5; //Field offset: 0x70
		private int <taken>5__6; //Field offset: 0x78
		private int <i>5__7; //Field offset: 0x7C

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
		public <Produce>d__15(int <>1__state) { }

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
	private List<ItemDef> <Products>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	private List<Int32> <Quantities>k__BackingField; //Field offset: 0x18

	[MetaMember(1, MetaMemberFlags::None (0))]
	[MetaOnMemberDeserializationFailure("FixItemListRef")]
	public List<ItemDef> Products
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	[MetaMember(2, MetaMemberFlags::None (0))]
	public List<Int32> Quantities
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		 set { } //Length: 8
	}

	public override int SpawnQuantity
	{
		 get { } //Length: 12
	}

	public ConstantProducer(IEnumerable<ValueTuple`2<ItemDef, Int32>> pairs) { }

	public ConstantProducer(IEnumerable<ValueTuple`2<Int32, Int32>> pairs) { }

	public ConstantProducer(IEnumerable<Int32> products) { }

	private ConstantProducer() { }

	public ConstantProducer(int products, int spawnQuantity = 1) { }

	private List<IItemDefinition> AllowedItems(List<IItemDefinition> originalItems, List<IItemDefinition> allowedItems) { }

	public static List<ItemDef> FixItemListRef(MetaMemberDeserializationFailureParams failureParams) { }

	[CompilerGenerated]
	public List<ItemDef> get_Products() { }

	[CompilerGenerated]
	public List<Int32> get_Quantities() { }

	public override int get_SpawnQuantity() { }

	public IEnumerable<ValueTuple`2<IItemDefinition, Int32>> GetItemQuantityPairs(IMergeMansionGameConfig config) { }

	[IteratorStateMachine(typeof(<GetOdds>d__14))]
	public override IEnumerable<ValueTuple`2<IItemDefinition, Int32>> GetOdds(IMergeMansionGameConfig config) { }

	[IteratorStateMachine(typeof(<GetSpawnItems>d__20))]
	public override IEnumerable<IItemDefinition> GetSpawnItems(IGenerationContext context, Option<ProducerContext> producerContextOption) { }

	[IteratorStateMachine(typeof(<Produce>d__15))]
	public override IEnumerable<IItemDefinition> Produce(IGenerationContext context, int quantity, Option<ProducerContext> producerContextOption, IEnumerable<IItemDefinition> allowedItems = null) { }

	[CompilerGenerated]
	public void set_Products(List<ItemDef> value) { }

	[CompilerGenerated]
	public void set_Quantities(List<Int32> value) { }

	public override F64 TimeSkipPriceGems(IGenerationContext context) { }

}

