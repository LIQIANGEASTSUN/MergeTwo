namespace GameLogic.Player.Items.Collectable;

[MetaSerializableDerived(4)]
public class CollectEventProgressAction : ICollectEventProgressAction, ICollectAction
{
	[CompilerGenerated]
	private int <ProgressGiven>k__BackingField; //Field offset: 0x10

	[MetaMember(1, MetaMemberFlags::None (0))]
	public private override int ProgressGiven
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private CollectEventProgressAction() { }

	public CollectEventProgressAction(int progressGiven) { }

	public override bool CanBeCollected(ICollectionContext collectionContext, IItemDefinition collectedItemDefinition, IMergeItem collectedMergeItem, MetacoreTime timestamp) { }

	public override void Collect(ICollectionContext collectionContext, Coordinate coordinate, IMergeItem collectedItem, MetacoreTime timestamp, ICollection<MergeBoardAct> collectedActs) { }

	private void Collect(ICollectionContext collectionContext) { }

	public override void CollectFromInventory(ICollectionContext collectionContext, IMergeItem collectedItem, MetacoreTime timestamp) { }

	public override void CollectFromPocket(ICollectionContext collectionContext, IItemDefinition collectedItem, MetacoreTime timestamp) { }

	[CompilerGenerated]
	public override int get_ProgressGiven() { }

	[CompilerGenerated]
	private void set_ProgressGiven(int value) { }

}

