namespace GameLogic.Player.Items.Merging;

[MetaReservedMembers(100, 199)]
[MetaSerializableDerived(5)]
public class MultipleItemsMergeMechanic : BaseMergeMechanic
{
	[CompilerGenerated]
	private List<Int32> <AllowedItems>k__BackingField; //Field offset: 0x20
	[CompilerGenerated]
	private IItemProducer <ResultProducer>k__BackingField; //Field offset: 0x28

	[MetaMember(100, MetaMemberFlags::None (0))]
	public private List<Int32> AllowedItems
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(101, MetaMemberFlags::None (0))]
	public private IItemProducer ResultProducer
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private MultipleItemsMergeMechanic() { }

	public MultipleItemsMergeMechanic(List<Int32> allowedItems, IItemProducer resultProducer, ItemVisibility resultVisibility = 2) { }

	public MultipleItemsMergeMechanic(List<Int32> allowedItems, IItemProducer resultProducer, StorageActionType storageAction, bool resetTimers, ItemVisibility resultVisibility = 2) { }

	public virtual bool CanMerge(IMergeItem sourceItem, IMergeItem targetItem, IMergeMansionGameConfig config) { }

	[CompilerGenerated]
	public List<Int32> get_AllowedItems() { }

	[CompilerGenerated]
	public IItemProducer get_ResultProducer() { }

	protected virtual IItemDefinition GetMergeProduct(IPlayer player, IBoard board, IMergeItem sourceItem, IMergeItem targetItem) { }

	public virtual IEnumerable<IItemDefinition> PossibleMergeResults(IMergeMansionGameConfig config) { }

	[CompilerGenerated]
	private void set_AllowedItems(List<Int32> value) { }

	[CompilerGenerated]
	private void set_ResultProducer(IItemProducer value) { }

}

