namespace GameLogic.Player.Items.Collectable;

[MetaSerializableDerived(5)]
public class InfiniteEnergyCollectAction : IInfiniteEnergyCollectAction, ICollectAction
{
	[CompilerGenerated]
	private MetaDuration <Duration>k__BackingField; //Field offset: 0x10

	[MetaMember(1, MetaMemberFlags::None (0))]
	public private MetaDuration Duration
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[IgnoreDataMember]
	public override double DurationMinutes
	{
		 get { } //Length: 168
	}

	[IgnoreDataMember]
	public override EnergyType EnergyType
	{
		 get { } //Length: 8
	}

	private InfiniteEnergyCollectAction() { }

	public InfiniteEnergyCollectAction(MetaDuration duration) { }

	public override bool CanBeCollected(ICollectionContext collectionContext, IItemDefinition collectedItemDefinition, IMergeItem collectedMergeItem, MetacoreTime timestamp) { }

	public override void Collect(ICollectionContext collectionContext, Coordinate coordinate, IMergeItem collectedItem, MetacoreTime timestamp, ICollection<MergeBoardAct> collectedActs) { }

	private void Collect(ICollectionContext collectionContext, IItemDefinition collectedItem, bool fromInventory) { }

	public override void CollectFromInventory(ICollectionContext collectionContext, IMergeItem collectedItem, MetacoreTime timestamp) { }

	public override void CollectFromPocket(ICollectionContext collectionContext, IItemDefinition collectedItem, MetacoreTime timestamp) { }

	[CompilerGenerated]
	public MetaDuration get_Duration() { }

	public override double get_DurationMinutes() { }

	public override EnergyType get_EnergyType() { }

	[CompilerGenerated]
	private void set_Duration(MetaDuration value) { }

}

