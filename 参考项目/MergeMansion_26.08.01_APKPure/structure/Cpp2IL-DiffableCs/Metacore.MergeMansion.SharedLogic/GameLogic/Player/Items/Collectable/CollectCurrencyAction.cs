namespace GameLogic.Player.Items.Collectable;

[MetaSerializableDerived(1)]
public class CollectCurrencyAction : ICollectCurrencyAction, ICollectAction
{
	[CompilerGenerated]
	private ICalculateCollectValue <ValueCalculator>k__BackingField; //Field offset: 0x10

	[MetaMember(1, MetaMemberFlags::None (0))]
	public private override ICalculateCollectValue ValueCalculator
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private CollectCurrencyAction() { }

	public CollectCurrencyAction(ICalculateCollectValue valueCalculator) { }

	public override bool CanBeCollected(ICollectionContext collectionContext, IItemDefinition collectedItemDefinition, IMergeItem collectedMergeItem, MetacoreTime timestamp) { }

	public override void Collect(ICollectionContext collectionContext, Coordinate coordinate, IMergeItem collectedItem, MetacoreTime timestamp, ICollection<MergeBoardAct> collectedActs) { }

	private void Collect(ICollectionContext collectionContext, IItemDefinition collectedItem, bool fromInventory) { }

	public override void CollectFromInventory(ICollectionContext collectionContext, IMergeItem collectedItem, MetacoreTime timestamp) { }

	public override void CollectFromPocket(ICollectionContext collectionContext, IItemDefinition collectedItem, MetacoreTime timestamp) { }

	[CompilerGenerated]
	public override ICalculateCollectValue get_ValueCalculator() { }

	[CompilerGenerated]
	private void set_ValueCalculator(ICalculateCollectValue value) { }

}

