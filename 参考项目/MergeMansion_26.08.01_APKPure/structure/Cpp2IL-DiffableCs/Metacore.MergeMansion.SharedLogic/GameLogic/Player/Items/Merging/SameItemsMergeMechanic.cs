namespace GameLogic.Player.Items.Merging;

[MetaSerializableDerived(2)]
public class SameItemsMergeMechanic : BaseMergeMechanic
{
	[CompilerGenerated]
	private IItemProducer <ResultProducer>k__BackingField; //Field offset: 0x20

	[MetaMember(4, MetaMemberFlags::None (0))]
	public private IItemProducer ResultProducer
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private SameItemsMergeMechanic() { }

	public SameItemsMergeMechanic(IItemProducer resultProducer, ItemVisibility resultVisibility = 2) { }

	public SameItemsMergeMechanic(IItemProducer resultProducer, StorageActionType storageAction, bool resetTimers, ItemVisibility resultVisibility = 2) { }

	public virtual bool CanMerge(IMergeItem sourceItem, IMergeItem targetItem, IMergeMansionGameConfig config) { }

	[CompilerGenerated]
	public IItemProducer get_ResultProducer() { }

	protected virtual IItemDefinition GetMergeProduct(IPlayer player, IBoard board, IMergeItem sourceItem, IMergeItem targetItem) { }

	public virtual IEnumerable<IItemDefinition> PossibleMergeResults(IMergeMansionGameConfig config) { }

	[CompilerGenerated]
	private void set_ResultProducer(IItemProducer value) { }

}

