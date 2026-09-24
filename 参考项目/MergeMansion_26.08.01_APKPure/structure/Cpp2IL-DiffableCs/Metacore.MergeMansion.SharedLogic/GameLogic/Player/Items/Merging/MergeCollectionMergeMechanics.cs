namespace GameLogic.Player.Items.Merging;

[MetaSerializableDerived(3)]
public class MergeCollectionMergeMechanics : BaseMergeMechanic
{
	[CompilerGenerated]
	private sealed class <>c__DisplayClass8_0
	{
		public IMergeMansionGameConfig config; //Field offset: 0x10

		public <>c__DisplayClass8_0() { }

		internal IEnumerable<IItemDefinition> <PossibleMergeResults>b__0(KeyValuePair<ItemPair, IItemProducer> entry) { }

	}

	[CompilerGenerated]
	private MergeCollection <MergeCollection>k__BackingField; //Field offset: 0x20

	[MetaMember(4, MetaMemberFlags::None (0))]
	public private MergeCollection MergeCollection
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	private MergeCollectionMergeMechanics() { }

	public MergeCollectionMergeMechanics(MergeCollection mergeCollection, ItemVisibility resultVisibility = 2) { }

	public MergeCollectionMergeMechanics(MergeCollection mergeCollection, StorageActionType storageAction, bool resetTimers, ItemVisibility resultVisibility = 2) { }

	public virtual bool CanMerge(IMergeItem sourceItem, IMergeItem targetItem, IMergeMansionGameConfig config) { }

	[CompilerGenerated]
	public MergeCollection get_MergeCollection() { }

	protected virtual IItemDefinition GetMergeProduct(IPlayer player, IBoard board, IMergeItem sourceItem, IMergeItem targetItem) { }

	public virtual IEnumerable<IItemDefinition> PossibleMergeResults(IMergeMansionGameConfig config) { }

	[CompilerGenerated]
	private void set_MergeCollection(MergeCollection value) { }

}

