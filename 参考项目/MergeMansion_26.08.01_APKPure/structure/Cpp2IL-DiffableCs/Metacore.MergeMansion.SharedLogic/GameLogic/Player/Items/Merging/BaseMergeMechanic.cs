namespace GameLogic.Player.Items.Merging;

[MetaBlockedMembers(new IL2CPP_TYPE_I4[] {2})]
public abstract class BaseMergeMechanic : IMergeMechanic, IStorageActionMergeMechanic
{
	[CompilerGenerated]
	private ItemVisibility <ResultVisibility>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	private bool <ResetTimers>k__BackingField; //Field offset: 0x14
	[CompilerGenerated]
	private StorageActionType <StorageAction>k__BackingField; //Field offset: 0x18

	[MetaMember(3, MetaMemberFlags::None (0))]
	public private bool ResetTimers
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(1, MetaMemberFlags::None (0))]
	public private ItemVisibility ResultVisibility
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(5, MetaMemberFlags::None (0))]
	public private override StorageActionType StorageAction
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	protected BaseMergeMechanic() { }

	protected BaseMergeMechanic(ItemVisibility resultVisibility, StorageActionType storageAction, bool resetTimers) { }

	public abstract bool CanMerge(IMergeItem sourceItem, IMergeItem targetItem, IMergeMansionGameConfig config) { }

	protected bool Equals(BaseMergeMechanic other) { }

	public virtual bool Equals(object obj) { }

	[CompilerGenerated]
	public bool get_ResetTimers() { }

	[CompilerGenerated]
	public ItemVisibility get_ResultVisibility() { }

	[CompilerGenerated]
	public override StorageActionType get_StorageAction() { }

	public virtual int GetHashCode() { }

	protected abstract IItemDefinition GetMergeProduct(IPlayer player, IBoard board, IMergeItem sourceItem, IMergeItem targetItem) { }

	public override IMergeItem Merge(IPlayer player, IBoard board, IMergeItem sourceItem, IMergeItem targetItem, MetacoreTime timestamp) { }

	public abstract IEnumerable<IItemDefinition> PossibleMergeResults(IMergeMansionGameConfig config) { }

	[CompilerGenerated]
	private void set_ResetTimers(bool value) { }

	[CompilerGenerated]
	private void set_ResultVisibility(ItemVisibility value) { }

	[CompilerGenerated]
	private void set_StorageAction(StorageActionType value) { }

}

