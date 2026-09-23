using Code.GameLogic.Player.MergeTasks;

namespace GameLogic.Player.MergeTasks
{
	public class ComingSoonTask : MergeTask
	{
		public override TaskCategory Category => default(TaskCategory);

		public ComingSoonTask(string descriptionLocId)
			: base(null)
		{
		}

		public override bool Matches(MergeTask other)
		{
			return false;
		}
	}
}
