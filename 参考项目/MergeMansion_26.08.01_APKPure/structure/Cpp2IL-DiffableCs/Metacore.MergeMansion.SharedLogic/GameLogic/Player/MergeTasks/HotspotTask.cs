namespace GameLogic.Player.MergeTasks;

public abstract class HotspotTask : MergeTask
{
	[CompilerGenerated]
	private readonly IHotspotDefinition <Hotspot>k__BackingField; //Field offset: 0x18
	[CompilerGenerated]
	private readonly int <SoloMilestoneTokenAmount>k__BackingField; //Field offset: 0x20

	public abstract bool CanBeCompleted
	{
		 get { } //Length: 0
	}

	public override IHotspotDefinition Hotspot
	{
		[CompilerGenerated]
		 get { } //Length: 8
	}

	public abstract bool IsBonusAvailable
	{
		 get { } //Length: 0
	}

	public abstract bool IsUnlockedAndAvailable
	{
		 get { } //Length: 0
	}

	public int SoloMilestoneTokenAmount
	{
		[CompilerGenerated]
		 get { } //Length: 8
	}

	public HotspotTask(IHotspotDefinition hotspot, string descriptionLocId = "", int soloMilestoneTokenAmount = 0) { }

	public abstract bool get_CanBeCompleted() { }

	[CompilerGenerated]
	public override IHotspotDefinition get_Hotspot() { }

	public abstract bool get_IsBonusAvailable() { }

	public abstract bool get_IsUnlockedAndAvailable() { }

	[CompilerGenerated]
	public int get_SoloMilestoneTokenAmount() { }

}

