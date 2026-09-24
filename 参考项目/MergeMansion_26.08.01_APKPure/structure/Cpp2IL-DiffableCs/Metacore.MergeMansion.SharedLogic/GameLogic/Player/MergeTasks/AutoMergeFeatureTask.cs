namespace GameLogic.Player.MergeTasks;

public class AutoMergeFeatureTask : MergeTask
{
	[CompilerGenerated]
	private readonly IPlayer <Player>k__BackingField; //Field offset: 0x18

	public virtual TaskCategory Category
	{
		 get { } //Length: 8
	}

	public IAutoMergeFeatureModel FeatureModel
	{
		 get { } //Length: 164
	}

	public IPlayer Player
	{
		[CompilerGenerated]
		 get { } //Length: 8
	}

	public AutoMergeFeatureTask(IPlayer player) { }

	public virtual TaskCategory get_Category() { }

	public IAutoMergeFeatureModel get_FeatureModel() { }

	[CompilerGenerated]
	public IPlayer get_Player() { }

	public virtual bool Matches(MergeTask other) { }

}

