using Code.GameLogic.Player.MergeTasks;

namespace GameLogic.Player.MergeTasks
{
	public abstract class MergeTask
	{
		public string DescriptionLocId { get; }

		public abstract TaskCategory Category { get; }

		public MergeTask(string descriptionLocId = "")
		{
		}

		public virtual void Update()
		{
		}

		public abstract bool Matches(MergeTask other);
	}
}
