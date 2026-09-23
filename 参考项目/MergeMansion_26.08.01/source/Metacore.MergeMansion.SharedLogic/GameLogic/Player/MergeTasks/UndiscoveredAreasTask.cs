using Code.GameLogic.Player.MergeTasks;

namespace GameLogic.Player.MergeTasks
{
	public class UndiscoveredAreasTask : MergeTask
	{
		public override TaskCategory Category => default(TaskCategory);

		public UndiscoveredAreasTask(string descriptionLocId)
			: base(null)
		{
		}

		public override bool Matches(MergeTask other)
		{
			return false;
		}
	}
}
