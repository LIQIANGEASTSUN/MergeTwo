using Code.GameLogic.Player.MergeTasks;

namespace GameLogic.Player.MergeTasks
{
	public class FeatureLockedTask : MergeTask
	{
		public enum LockedType
		{
			ProgressionEvents = 1,
			BoardEvents = 2
		}

		public override TaskCategory Category => default(TaskCategory);

		public string MinimumRequirement { get; set; }

		public LockedType LockedEventType { get; set; }

		public FeatureLockedTask(string descriptionLocId, int? requirementMin, LockedType eventType)
			: base(null)
		{
		}

		public override bool Matches(MergeTask other)
		{
			return false;
		}
	}
}
