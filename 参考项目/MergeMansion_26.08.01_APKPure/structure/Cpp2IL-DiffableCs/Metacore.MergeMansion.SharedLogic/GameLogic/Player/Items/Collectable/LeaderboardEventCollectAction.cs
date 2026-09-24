namespace GameLogic.Player.Items.Collectable;

[MetaSerializableDerived(8)]
public class LeaderboardEventCollectAction : ILeaderboardEventCollectAction, IProgressCollectAction, ICollectAction
{
	[CompilerGenerated]
	private MetaRef<LeaderboardEventInfo> <LeaderboardEventRef>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	private int <Progress>k__BackingField; //Field offset: 0x18

	public override LeaderboardEventInfo LeaderboardEvent
	{
		 get { } //Length: 80
	}

	[MetaMember(1, MetaMemberFlags::None (0))]
	private MetaRef<LeaderboardEventInfo> LeaderboardEventRef
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(2, MetaMemberFlags::None (0))]
	public private override int Progress
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private LeaderboardEventCollectAction() { }

	public LeaderboardEventCollectAction(LeaderboardEventId leaderboardEventId, int progress) { }

	public override bool CanBeCollected(ICollectionContext collectionContext, IItemDefinition collectedItemDefinition, IMergeItem collectedMergeItem, MetacoreTime timestamp) { }

	public override void Collect(ICollectionContext collectionContext, Coordinate coordinate, IMergeItem collectedItem, MetacoreTime timestamp, ICollection<MergeBoardAct> collectedActs) { }

	private void Collect(ICollectionContext collectionContext, bool fromInventory, IItemDefinition collectedItem) { }

	public override void CollectFromInventory(ICollectionContext collectionContext, IMergeItem collectedItem, MetacoreTime timestamp) { }

	public override void CollectFromPocket(ICollectionContext collectionContext, IItemDefinition collectedItem, MetacoreTime timestamp) { }

	public override LeaderboardEventInfo get_LeaderboardEvent() { }

	[CompilerGenerated]
	private MetaRef<LeaderboardEventInfo> get_LeaderboardEventRef() { }

	[CompilerGenerated]
	public override int get_Progress() { }

	[CompilerGenerated]
	private void set_LeaderboardEventRef(MetaRef<LeaderboardEventInfo> value) { }

	[CompilerGenerated]
	private void set_Progress(int value) { }

}

