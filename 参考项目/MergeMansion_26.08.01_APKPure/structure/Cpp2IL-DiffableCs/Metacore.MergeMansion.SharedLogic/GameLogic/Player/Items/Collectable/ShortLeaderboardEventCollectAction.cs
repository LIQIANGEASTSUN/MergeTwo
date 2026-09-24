namespace GameLogic.Player.Items.Collectable;

[MetaSerializableDerived(14)]
public class ShortLeaderboardEventCollectAction : IShortLeaderboardEventCollectAction, IProgressCollectAction, ICollectAction
{
	[CompilerGenerated]
	private int <Progress>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	private bool <LevelUpMergeChain>k__BackingField; //Field offset: 0x14

	[MetaMember(2, MetaMemberFlags::None (0))]
	public private override bool LevelUpMergeChain
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(1, MetaMemberFlags::None (0))]
	public private override int Progress
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private ShortLeaderboardEventCollectAction() { }

	public ShortLeaderboardEventCollectAction(int progress, bool levelUpMergeChain) { }

	public override bool CanBeCollected(ICollectionContext collectionContext, IItemDefinition collectedItemDefinition, IMergeItem collectedMergeItem, MetacoreTime timestamp) { }

	public override void Collect(ICollectionContext collectionContext, Coordinate coordinate, IMergeItem collectedItem, MetacoreTime timestamp, ICollection<MergeBoardAct> collectedActs) { }

	private void Collect(ICollectionContext collectionContext, bool fromInventory, IItemDefinition collectedItem) { }

	public override void CollectFromInventory(ICollectionContext collectionContext, IMergeItem collectedItem, MetacoreTime timestamp) { }

	public override void CollectFromPocket(ICollectionContext collectionContext, IItemDefinition collectedItem, MetacoreTime timestamp) { }

	[CompilerGenerated]
	public override bool get_LevelUpMergeChain() { }

	[CompilerGenerated]
	public override int get_Progress() { }

	[CompilerGenerated]
	private void set_LevelUpMergeChain(bool value) { }

	[CompilerGenerated]
	private void set_Progress(int value) { }

}

