namespace GameLogic.Player.MergeTasks;

public class HotspotMergeTask : HotspotTask, IHasRequirements, ITaskCardView
{
	[CompilerGenerated]
	private readonly IEnumerable<PlayerRequirement> <Requirements>k__BackingField; //Field offset: 0x28
	[CompilerGenerated]
	private readonly IPlayer <Player>k__BackingField; //Field offset: 0x30
	private bool canBeCompleted; //Field offset: 0x38
	private bool isBonusAvailable; //Field offset: 0x39
	private bool isUnlockedAndAvailable; //Field offset: 0x3A

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

	public HotspotMergeTask(IHotspotDefinition hotspot, IPlayer player) { }

	public HotspotMergeTask(IHotspotDefinition hotspot, IPlayer player, bool canBeCompletedByPlayer) { }

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

	public virtual bool Matches(MergeTask other) { }

	public override void RefreshCanBeCompleted() { }

	private void RefreshIsBonusAvailable() { }

	private void RefreshIsUnlockedAndAvailable() { }

	public virtual void Update() { }

}

