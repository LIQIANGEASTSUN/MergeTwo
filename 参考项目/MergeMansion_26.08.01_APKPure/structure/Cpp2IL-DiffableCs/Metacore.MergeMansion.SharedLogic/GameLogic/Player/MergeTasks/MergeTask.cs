namespace GameLogic.Player.MergeTasks;

public abstract class MergeTask
{
	[CompilerGenerated]
	private readonly string <DescriptionLocId>k__BackingField; //Field offset: 0x10

	public abstract TaskCategory Category
	{
		 get { } //Length: 0
	}

	public string DescriptionLocId
	{
		[CompilerGenerated]
		 get { } //Length: 8
	}

	protected MergeTask(string descriptionLocId = "") { }

	public abstract TaskCategory get_Category() { }

	[CompilerGenerated]
	public string get_DescriptionLocId() { }

	public abstract bool Matches(MergeTask other) { }

	public override void Update() { }

}

