namespace Code.GameLogic.Player.Items.Collectable;

[MetaSerializableDerived(15)]
public class ProgressionTrackCollectAction : IProgressionTrackCollectAction, IProgressCollectAction, ICollectAction
{
	[CompilerGenerated]
	private ProgressionTrackId <TrackId>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	private int <Progress>k__BackingField; //Field offset: 0x18

	[MetaMember(2, MetaMemberFlags::None (0))]
	public private override int Progress
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(1, MetaMemberFlags::None (0))]
	public private override ProgressionTrackId TrackId
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private ProgressionTrackCollectAction() { }

	public ProgressionTrackCollectAction(ProgressionTrackId trackId, int progress) { }

	public override bool CanBeCollected(ICollectionContext collectionContext, IItemDefinition collectedItemDefinition, IMergeItem collectedMergeItem, MetacoreTime timestamp) { }

	public override void Collect(ICollectionContext collectionContext, Coordinate coordinate, IMergeItem collectedItem, MetacoreTime timestamp, ICollection<MergeBoardAct> collectedActs) { }

	private void Collect(ICollectionContext collectionContext, IItemDefinition collectedItem, bool fromInventory) { }

	public override void CollectFromInventory(ICollectionContext collectionContext, IMergeItem collectedItem, MetacoreTime timestamp) { }

	public override void CollectFromPocket(ICollectionContext collectionContext, IItemDefinition collectedItem, MetacoreTime timestamp) { }

	[CompilerGenerated]
	public override int get_Progress() { }

	[CompilerGenerated]
	public override ProgressionTrackId get_TrackId() { }

	[CompilerGenerated]
	private void set_Progress(int value) { }

	[CompilerGenerated]
	private void set_TrackId(ProgressionTrackId value) { }

}

