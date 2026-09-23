using Code.GameLogic.Player.MergeTasks;

namespace GameLogic.Player.MergeTasks
{
	public class TitleTask : MergeTask
	{
		public override TaskCategory Category => default(TaskCategory);

		public TitleTask(string descriptionLocId)
			: base(null)
		{
		}

		public override bool Matches(MergeTask other)
		{
			return false;
		}
	}
}
