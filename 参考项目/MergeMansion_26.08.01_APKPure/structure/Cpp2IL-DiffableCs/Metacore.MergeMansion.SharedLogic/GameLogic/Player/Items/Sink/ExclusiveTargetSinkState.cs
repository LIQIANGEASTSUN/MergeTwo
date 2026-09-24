namespace GameLogic.Player.Items.Sink;

[MetaSerializableDerived(4)]
public class ExclusiveTargetSinkState : ISinkState
{
	[MetaMember(1, MetaMemberFlags::None (0))]
	private MetaDictionary<Int32, Int32> progress; //Field offset: 0x10
	[MetaMember(2, MetaMemberFlags::None (0))]
	[MetaOnMemberDeserializationFailure("FixItemRefMetaDict")]
	private MetaDictionary<Int32, ItemDef> rewardItems; //Field offset: 0x18
	[MetaMember(3, MetaMemberFlags::None (0))]
	private MetaDictionary<Int32, Int32> targets; //Field offset: 0x20
	[MetaMember(4, MetaMemberFlags::None (0))]
	private int targetItem; //Field offset: 0x28

	public ExclusiveTargetSinkState() { }

	public ExclusiveTargetSinkState(List<ExclusiveTargetSinkBranch> branches) { }

	public override bool DoesTakeIn(IPlayer player, int itemId) { }

	public static MetaDictionary<Int32, ItemDef> FixItemRefMetaDict(MetaMemberDeserializationFailureParams failureParams) { }

	public void GetAllowedItemIds(ref List<Int32>& outList) { }

	public override IItemDefinition GetCompletionItem(IPlayer player, MergeItem item, MergeBoard board) { }

	public override ValueTuple<Int32, Int32> GetProgress() { }

	public override void GetProgressEntries(ref List<SinkProgressEntry>& outList) { }

	public override SinkType GetSinkType() { }

	public override bool IncreaseProgress(IPlayer player, int inputItem) { }

	public override bool IsCompleted() { }

}

