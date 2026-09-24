namespace GameLogic.Player.MergeTasks;

public class CollectibleBoardEventMergeTask : MergeTask
{
	[CompilerGenerated]
	private readonly CollectibleBoardEventModel <EventModel>k__BackingField; //Field offset: 0x18
	[CompilerGenerated]
	private readonly EventTaskInfo <TaskInfo>k__BackingField; //Field offset: 0x20
	[CompilerGenerated]
	private readonly List<IPlayerReward> <VisualisedRewards>k__BackingField; //Field offset: 0x28
	[CompilerGenerated]
	private readonly bool <HasRequirementsToComplete>k__BackingField; //Field offset: 0x30
	[CompilerGenerated]
	private readonly MergeBoardId <TargetBoardId>k__BackingField; //Field offset: 0x38
	[CompilerGenerated]
	private readonly PlayerModel <Player>k__BackingField; //Field offset: 0x40
	public readonly List<PlayerItemRequirement> Requirements; //Field offset: 0x48

	public virtual TaskCategory Category
	{
		 get { } //Length: 8
	}

	public CollectibleBoardEventModel EventModel
	{
		[CompilerGenerated]
		 get { } //Length: 8
	}

	public bool HasRequirementsToComplete
	{
		[CompilerGenerated]
		 get { } //Length: 8
	}

	public PlayerModel Player
	{
		[CompilerGenerated]
		 get { } //Length: 8
	}

	public MergeBoardId TargetBoardId
	{
		[CompilerGenerated]
		 get { } //Length: 8
	}

	public EventTaskInfo TaskInfo
	{
		[CompilerGenerated]
		 get { } //Length: 8
	}

	public List<IPlayerReward> VisualisedRewards
	{
		[CompilerGenerated]
		 get { } //Length: 8
	}

	public CollectibleBoardEventMergeTask(CollectibleBoardEventModel eventModel, EventTaskInfo eventTaskInfo, MergeBoardId navigateTargetBoardId, PlayerModel playerModel) { }

	[CompilerGenerated]
	private bool <.ctor>b__21_0(PlayerItemRequirement r) { }

	public virtual TaskCategory get_Category() { }

	[CompilerGenerated]
	public CollectibleBoardEventModel get_EventModel() { }

	[CompilerGenerated]
	public bool get_HasRequirementsToComplete() { }

	[CompilerGenerated]
	public PlayerModel get_Player() { }

	[CompilerGenerated]
	public MergeBoardId get_TargetBoardId() { }

	[CompilerGenerated]
	public EventTaskInfo get_TaskInfo() { }

	[CompilerGenerated]
	public List<IPlayerReward> get_VisualisedRewards() { }

	public virtual bool Matches(MergeTask other) { }

}

