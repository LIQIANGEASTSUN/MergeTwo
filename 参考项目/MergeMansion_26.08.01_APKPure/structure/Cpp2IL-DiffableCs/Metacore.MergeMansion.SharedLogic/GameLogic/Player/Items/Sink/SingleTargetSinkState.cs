namespace GameLogic.Player.Items.Sink;

[MetaSerializableDerived(2)]
public class SingleTargetSinkState : ISinkState
{
	[MetaMember(1, MetaMemberFlags::None (0))]
	private int progress; //Field offset: 0x10
	[MetaMember(2, MetaMemberFlags::None (0))]
	private int target; //Field offset: 0x14
	[MetaMember(3, MetaMemberFlags::None (0))]
	private MetaDictionary<Int32, Int32> takeInScores; //Field offset: 0x18
	[MetaMember(4, MetaMemberFlags::None (0))]
	[MetaOnMemberDeserializationFailure("FixItemRef")]
	private ItemDef rewardItemDef; //Field offset: 0x20

	public SingleTargetSinkState() { }

	public SingleTargetSinkState(MetaDictionary<Int32, Int32> takeIn, int scoreTarget, int rewardId) { }

	public override bool DoesTakeIn(IPlayer player, int itemId) { }

	public static ItemDef FixItemRef(MetaMemberDeserializationFailureParams failureParams) { }

	public override IItemDefinition GetCompletionItem(IPlayer player, MergeItem item, MergeBoard board) { }

	public override ValueTuple<Int32, Int32> GetProgress() { }

	public override void GetProgressEntries(ref List<SinkProgressEntry>& outList) { }

	public override SinkType GetSinkType() { }

	public override bool IncreaseProgress(IPlayer player, int inputItem) { }

	public override bool IsCompleted() { }

	public static ISinkState NewState(MetaDictionary<Int32, Int32> scores, int scoreTarget, int rewardId) { }

}

