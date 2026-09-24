namespace GameLogic.Player.MergeTasks;

public class EnergyModeEventProgressTask : MergeTask
{
	[CompilerGenerated]
	private readonly EnergyModeEventModel <EventModel>k__BackingField; //Field offset: 0x18
	[CompilerGenerated]
	private readonly Nullable<MetaTime> <EndAt>k__BackingField; //Field offset: 0x20
	[CompilerGenerated]
	private readonly PlayerModel <PlayerModel>k__BackingField; //Field offset: 0x30

	public virtual TaskCategory Category
	{
		 get { } //Length: 8
	}

	public Nullable<MetaTime> EndAt
	{
		[CompilerGenerated]
		 get { } //Length: 12
	}

	public EnergyModeEventModel EventModel
	{
		[CompilerGenerated]
		 get { } //Length: 8
	}

	public PlayerModel PlayerModel
	{
		[CompilerGenerated]
		 get { } //Length: 8
	}

	public EnergyModeEventProgressTask(EnergyModeEventModel eventModel, PlayerModel playerModel) { }

	public virtual TaskCategory get_Category() { }

	[CompilerGenerated]
	public Nullable<MetaTime> get_EndAt() { }

	[CompilerGenerated]
	public EnergyModeEventModel get_EventModel() { }

	[CompilerGenerated]
	public PlayerModel get_PlayerModel() { }

	public virtual bool Matches(MergeTask other) { }

}

