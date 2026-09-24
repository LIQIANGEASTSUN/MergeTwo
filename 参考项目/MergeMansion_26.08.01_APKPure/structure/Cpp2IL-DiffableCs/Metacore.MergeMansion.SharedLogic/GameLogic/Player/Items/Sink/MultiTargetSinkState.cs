namespace GameLogic.Player.Items.Sink;

[MetaSerializableDerived(3)]
public class MultiTargetSinkState : ISinkState
{
	[CompilerGenerated]
	private sealed class <>c
	{
		public static readonly <>c <>9; //Field offset: 0x0
		public static Func<KeyValuePair`2<Int32, Int32>, Int32> <>9__4_0; //Field offset: 0x8
		public static Func<KeyValuePair`2<Int32, Int32>, Int32> <>9__4_1; //Field offset: 0x10

		private static <>c() { }

		public <>c() { }

		internal int <.ctor>b__4_0(KeyValuePair<Int32, Int32> pair) { }

		internal int <.ctor>b__4_1(KeyValuePair<Int32, Int32> _) { }

	}

	[MetaMember(1, MetaMemberFlags::None (0))]
	private MetaDictionary<Int32, Int32> progress; //Field offset: 0x10
	[MetaMember(2, MetaMemberFlags::None (0))]
	private MetaDictionary<Int32, Int32> targets; //Field offset: 0x18
	[MetaMember(3, MetaMemberFlags::None (0))]
	[MetaOnMemberDeserializationFailure("FixItemRef")]
	private ItemDef rewardItemDef; //Field offset: 0x20

	public MultiTargetSinkState() { }

	public MultiTargetSinkState(MetaDictionary<Int32, Int32> scoreTargets, int rewardId) { }

	public override bool DoesTakeIn(IPlayer player, int itemId) { }

	public static ItemDef FixItemRef(MetaMemberDeserializationFailureParams failureParams) { }

	public override IItemDefinition GetCompletionItem(IPlayer player, MergeItem item, MergeBoard board) { }

	public override ValueTuple<Int32, Int32> GetProgress() { }

	public override void GetProgressEntries(ref List<SinkProgressEntry>& outList) { }

	public override SinkType GetSinkType() { }

	public override bool IncreaseProgress(IPlayer player, int inputItem) { }

	public override bool IsCompleted() { }

	public static ISinkState NewState(MetaDictionary<Int32, Int32> scoreTargets, int rewardId) { }

}

