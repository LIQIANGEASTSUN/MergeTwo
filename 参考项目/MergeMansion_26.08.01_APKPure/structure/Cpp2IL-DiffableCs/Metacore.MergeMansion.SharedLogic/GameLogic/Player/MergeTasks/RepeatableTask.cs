namespace GameLogic.Player.MergeTasks;

public class RepeatableTask : HotspotTask, IHasRequirements, ITaskCardView
{
	[CompilerGenerated]
	private readonly IEnumerable<PlayerRequirement> <Requirements>k__BackingField; //Field offset: 0x28
	[CompilerGenerated]
	private readonly IPlayer <Player>k__BackingField; //Field offset: 0x30
	private bool canBeCompleted; //Field offset: 0x38
	private bool isBonusAvailable; //Field offset: 0x39
	private bool isUnlockedAndAvailable; //Field offset: 0x3A
	private HashSet<IItemDefinition> taskRewards; //Field offset: 0x40

	public virtual bool CanBeCompleted
	{
		 get { } //Length: 8
	}

	public virtual TaskCategory Category
	{
		 get { } //Length: 8
	}

	public HotspotId HotspotId
	{
		 get { } //Length: 164
	}

	public virtual bool IsBonusAvailable
	{
		 get { } //Length: 8
	}

	public virtual bool IsUnlockedAndAvailable
	{
		 get { } //Length: 8
	}

	public IPlayer Player
	{
		[CompilerGenerated]
		 get { } //Length: 8
	}

	public override IEnumerable<PlayerRequirement> Requirements
	{
		[CompilerGenerated]
		 get { } //Length: 8
	}

	public override MergeTask Task
	{
		 get { } //Length: 4
	}

	public RepeatableTask(HotspotDefinition hotspot, IPlayer playerModel) { }

	private void AddItemAndProducedItems(IItemDefinition itemDefinition, HashSet<IItemDefinition> possibleRewards) { }

	public virtual bool get_CanBeCompleted() { }

	public virtual TaskCategory get_Category() { }

	public HotspotId get_HotspotId() { }

	public virtual bool get_IsBonusAvailable() { }

	public virtual bool get_IsUnlockedAndAvailable() { }

	[CompilerGenerated]
	public IPlayer get_Player() { }

	[CompilerGenerated]
	public override IEnumerable<PlayerRequirement> get_Requirements() { }

	public override MergeTask get_Task() { }

	private HashSet<IItemDefinition> GetRewardItems() { }

	public bool IsTaskRewardRequiredForTask(MergeTask task) { }

	public virtual bool Matches(MergeTask other) { }

	private bool MatchesRequirements() { }

	private void ProcessMergeChain(IItemDefinition item, HashSet<IItemDefinition> possibleRewards) { }

	private void ProcessProducerItems(IItemDefinition itemDefinition, HashSet<IItemDefinition> possibleRewards) { }

	private void ProcessSinkItems(IItemDefinition itemDefinition, HashSet<IItemDefinition> possibleRewards) { }

	public override void RefreshCanBeCompleted() { }

	private void RefreshIsBonusAvailable() { }

	private void RefreshIsUnlockedAndAvailable() { }

	public virtual void Update() { }

}

