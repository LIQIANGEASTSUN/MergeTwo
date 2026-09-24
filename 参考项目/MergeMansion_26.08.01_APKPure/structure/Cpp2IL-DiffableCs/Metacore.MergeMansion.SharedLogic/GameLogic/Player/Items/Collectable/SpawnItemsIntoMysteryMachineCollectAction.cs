namespace GameLogic.Player.Items.Collectable;

[MetaSerializableDerived(13)]
public class SpawnItemsIntoMysteryMachineCollectAction : ICollectAction
{
	[CompilerGenerated]
	private int <ItemCount>k__BackingField; //Field offset: 0x10

	[MetaMember(1, MetaMemberFlags::None (0))]
	private int ItemCount
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private SpawnItemsIntoMysteryMachineCollectAction() { }

	public SpawnItemsIntoMysteryMachineCollectAction(int itemCount) { }

	public override bool CanBeCollected(ICollectionContext collectionContext, IItemDefinition collectedItemDefinition, IMergeItem collectedMergeItem, MetacoreTime timestamp) { }

	public override void Collect(ICollectionContext collectionContext, Coordinate coordinate, IMergeItem collectedItem, MetacoreTime timestamp, ICollection<MergeBoardAct> collectedActs) { }

	private void Collect(ICollectionContext collectionContext, IItemDefinition collectedItem, MetacoreTime timestamp, bool fromInventory) { }

	public override void CollectFromInventory(ICollectionContext collectionContext, IMergeItem collectedItem, MetacoreTime timestamp) { }

	public override void CollectFromPocket(ICollectionContext collectionContext, IItemDefinition collectedItem, MetacoreTime timestamp) { }

	[CompilerGenerated]
	private int get_ItemCount() { }

	[CompilerGenerated]
	private void set_ItemCount(int value) { }

}

