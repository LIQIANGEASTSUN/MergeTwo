namespace GameLogic.Player.Items.Collectable;

[MetaSerializableDerived(2)]
public class TimeSkipCollectAction : ITimeSkipCollectAction, ICollectAction
{
	[CompilerGenerated]
	private MetaDuration <DurationToSkip>k__BackingField; //Field offset: 0x10

	[MetaMember(1, MetaMemberFlags::None (0))]
	public private MetaDuration DurationToSkip
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[IgnoreDataMember]
	public override double DurationToSkipMinutes
	{
		 get { } //Length: 168
	}

	private TimeSkipCollectAction() { }

	public TimeSkipCollectAction(MetaDuration durationToSkip) { }

	public override bool CanBeCollected(ICollectionContext collectionContext, IItemDefinition collectedItemDefinition, IMergeItem collectedMergeItem, MetacoreTime timestamp) { }

	public override void Collect(ICollectionContext collectionContext, Coordinate coordinate, IMergeItem collectedItem, MetacoreTime timestamp, ICollection<MergeBoardAct> collectedActs) { }

	private void Collect(ICollectionContext collectionContext, IItemDefinition collectedItem, MetacoreTime timestamp, bool fromInventory) { }

	public override void CollectFromInventory(ICollectionContext collectionContext, IMergeItem collectedItem, MetacoreTime timestamp) { }

	public override void CollectFromPocket(ICollectionContext collectionContext, IItemDefinition collectedItem, MetacoreTime timestamp) { }

	[CompilerGenerated]
	public MetaDuration get_DurationToSkip() { }

	public override double get_DurationToSkipMinutes() { }

	[CompilerGenerated]
	private void set_DurationToSkip(MetaDuration value) { }

}

