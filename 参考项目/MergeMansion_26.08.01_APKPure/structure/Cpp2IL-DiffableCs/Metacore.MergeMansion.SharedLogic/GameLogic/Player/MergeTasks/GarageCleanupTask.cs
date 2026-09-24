namespace GameLogic.Player.MergeTasks;

public class GarageCleanupTask : MergeTask
{
	[CompilerGenerated]
	private readonly GarageCleanupEventModel <EventModel>k__BackingField; //Field offset: 0x18
	[CompilerGenerated]
	private readonly Nullable<MetaTime> <EndAt>k__BackingField; //Field offset: 0x20

	public virtual TaskCategory Category
	{
		 get { } //Length: 8
	}

	public Nullable<MetaTime> EndAt
	{
		[CompilerGenerated]
		 get { } //Length: 12
	}

	public GarageCleanupEventModel EventModel
	{
		[CompilerGenerated]
		 get { } //Length: 8
	}

	public GarageCleanupTask(GarageCleanupEventModel garageCleanupEvent) { }

	public virtual TaskCategory get_Category() { }

	[CompilerGenerated]
	public Nullable<MetaTime> get_EndAt() { }

	[CompilerGenerated]
	public GarageCleanupEventModel get_EventModel() { }

	public virtual bool Matches(MergeTask other) { }

}

