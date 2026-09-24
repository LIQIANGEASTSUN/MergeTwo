namespace GameLogic.Player.Items.Production;

[MetaAllowNoSerializedMembers]
[MetaSerializableDerived(12)]
public class GarageCleanupEventProducer : IItemSpawner, IItemProducer
{
	[CompilerGenerated]
	private sealed class <GetSpawnItems>d__5 : IEnumerable<IItemDefinition>, IEnumerable, IEnumerator<IItemDefinition>, IEnumerator, IDisposable
	{
		private int <>1__state; //Field offset: 0x10
		private IItemDefinition <>2__current; //Field offset: 0x18
		private int <>l__initialThreadId; //Field offset: 0x20
		private IGenerationContext context; //Field offset: 0x28
		public IGenerationContext <>3__context; //Field offset: 0x30
		private GarageCleanupEventModel <eventModel>5__2; //Field offset: 0x38
		private GarageCleanupBoardInfo <boardInfo>5__3; //Field offset: 0x40
		private int <i>5__4; //Field offset: 0x48
		private GarageCleanupBoardRowInfo <rowInfo>5__5; //Field offset: 0x50
		private GarageCleanupEventBoardRowModel <rowModel>5__6; //Field offset: 0x58
		private int <j>5__7; //Field offset: 0x60

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
		public <GetSpawnItems>d__5(int <>1__state) { }

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


	public override int SpawnQuantity
	{
		 get { } //Length: 8
	}

	public GarageCleanupEventProducer() { }

	public override int get_SpawnQuantity() { }

	public override IEnumerable<ValueTuple`2<IItemDefinition, Int32>> GetOdds(IMergeMansionGameConfig config) { }

	[IteratorStateMachine(typeof(<GetSpawnItems>d__5))]
	public override IEnumerable<IItemDefinition> GetSpawnItems(IGenerationContext context, Option<ProducerContext> producerContextOption) { }

	public override IEnumerable<IItemDefinition> Produce(IGenerationContext context, int quantity, Option<ProducerContext> producerContextOption, IEnumerable<IItemDefinition> allowedItems = null) { }

	public override F64 TimeSkipPriceGems(IGenerationContext context) { }

}

