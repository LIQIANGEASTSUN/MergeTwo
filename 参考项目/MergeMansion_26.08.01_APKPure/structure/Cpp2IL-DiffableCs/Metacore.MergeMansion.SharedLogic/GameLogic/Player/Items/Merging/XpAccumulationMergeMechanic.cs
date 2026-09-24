namespace GameLogic.Player.Items.Merging;

[MetaBlockedMembers(new IL2CPP_TYPE_I4[] {2})]
[MetaSerializableDerived(4)]
public class XpAccumulationMergeMechanic : IMergeMechanic
{
	[CompilerGenerated]
	private ItemVisibility <ResultVisibility>k__BackingField; //Field offset: 0x10
	[CompilerGenerated]
	private bool <ResetTimers>k__BackingField; //Field offset: 0x14
	[CompilerGenerated]
	private IItemProducer <ResultProducer>k__BackingField; //Field offset: 0x18
	[CompilerGenerated]
	private int <ExperienceRequired>k__BackingField; //Field offset: 0x20
	[CompilerGenerated]
	private List<MetaRef`1<MergeReward>> <MergeRewardsRefs>k__BackingField; //Field offset: 0x28
	[CompilerGenerated]
	private StorageActionType <StorageAction>k__BackingField; //Field offset: 0x30

	[MetaMember(5, MetaMemberFlags::None (0))]
	public private int ExperienceRequired
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public IEnumerable<MergeReward> MergeRewards
	{
		 get { } //Length: 72
	}

	[MetaMember(6, MetaMemberFlags::None (0))]
	private List<MetaRef`1<MergeReward>> MergeRewardsRefs
	{
		[CompilerGenerated]
		private get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(3, MetaMemberFlags::None (0))]
	public private bool ResetTimers
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	[MetaMember(4, MetaMemberFlags::None (0))]
	public private IItemProducer ResultProducer
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

	[MetaMember(7, MetaMemberFlags::None (0))]
	public private StorageActionType StorageAction
	{
		[CompilerGenerated]
		 get { } //Length: 8
		[CompilerGenerated]
		private set { } //Length: 8
	}

	public XpAccumulationMergeMechanic(IItemProducer resultProducer, StorageActionType storageAction, bool resetTimers, ItemVisibility resultVisibility, int experienceRequired, IEnumerable<MetaRef`1<MergeReward>> mergeRewards) { }

	private XpAccumulationMergeMechanic() { }

	public override bool CanMerge(IMergeItem sourceItem, IMergeItem targetItem, IMergeMansionGameConfig config) { }

	public ValueTuple<IMergeItem, IMergeItem, Boolean> FigureMergeDirection(IMergeItem sourceItem, IMergeItem targetItem, IMergeMansionGameConfig config) { }

	[CompilerGenerated]
	public int get_ExperienceRequired() { }

	public IEnumerable<MergeReward> get_MergeRewards() { }

	[CompilerGenerated]
	private List<MetaRef`1<MergeReward>> get_MergeRewardsRefs() { }

	[CompilerGenerated]
	public bool get_ResetTimers() { }

	[CompilerGenerated]
	public IItemProducer get_ResultProducer() { }

	[CompilerGenerated]
	public ItemVisibility get_ResultVisibility() { }

	[CompilerGenerated]
	public StorageActionType get_StorageAction() { }

	public override IMergeItem Merge(IPlayer player, IBoard board, IMergeItem sourceItem, IMergeItem targetItem, MetacoreTime timestamp) { }

	private IMergeItem MergeImpl(IPlayer player, IBoard board, IMergeItem sourceItem, IMergeItem targetItem, MetacoreTime timestamp) { }

	public override IEnumerable<IItemDefinition> PossibleMergeResults(IMergeMansionGameConfig config) { }

	[CompilerGenerated]
	private void set_ExperienceRequired(int value) { }

	[CompilerGenerated]
	private void set_MergeRewardsRefs(List<MetaRef`1<MergeReward>> value) { }

	[CompilerGenerated]
	private void set_ResetTimers(bool value) { }

	[CompilerGenerated]
	private void set_ResultProducer(IItemProducer value) { }

	[CompilerGenerated]
	private void set_ResultVisibility(ItemVisibility value) { }

	[CompilerGenerated]
	private void set_StorageAction(StorageActionType value) { }

}

