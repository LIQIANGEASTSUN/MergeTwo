namespace GameLogic.Player.Items.Collectable;

[MetaSerializableDerived(9)]
public class CollectEventCurrencyAction : ICollectEventCurrencyAction, ICollectAction
{
	[CompilerGenerated]
	private EventCurrencyId <EventCurrencyId>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	private int <Amount>k__BackingField; //Field offset: 0x18

	[MetaMember(2, MetaMemberFlags::None (0))]
	public private override int Amount
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(1, MetaMemberFlags::None (0))]
	public private override EventCurrencyId EventCurrencyId
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private CollectEventCurrencyAction() { }

	public CollectEventCurrencyAction(EventCurrencyId eventCurrencyId, int amount) { }

	public override bool CanBeCollected(ICollectionContext collectionContext, IItemDefinition collectedItemDefinition, IMergeItem collectedMergeItem, MetacoreTime timestamp) { }

	public override void Collect(ICollectionContext collectionContext, Coordinate coordinate, IMergeItem collectedItem, MetacoreTime timestamp, ICollection<MergeBoardAct> collectedActs) { }

	private void Collect(ICollectionContext collectionContext, IItemDefinition collectedItem, bool fromInventory) { }

	public override void CollectFromInventory(ICollectionContext collectionContext, IMergeItem collectedItem, MetacoreTime timestamp) { }

	public override void CollectFromPocket(ICollectionContext collectionContext, IItemDefinition collectedItem, MetacoreTime timestamp) { }

	[CompilerGenerated]
	public override int get_Amount() { }

	[CompilerGenerated]
	public override EventCurrencyId get_EventCurrencyId() { }

	[CompilerGenerated]
	private void set_Amount(int value) { }

	[CompilerGenerated]
	private void set_EventCurrencyId(EventCurrencyId value) { }

}

