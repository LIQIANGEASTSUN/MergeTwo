using Code.GameLogic.GameEvents;
using Code.GameLogic.Player.MergeTasks;
using Metaplay.Core;

namespace GameLogic.Player.MergeTasks
{
	public class ProgressionEventTask : MergeTask
	{
		public ProgressionEventModel EventModel { get; }

		public MetaTime? EndAt { get; }

		public bool CanClaimReward { get; set; }

		public override TaskCategory Category => default(TaskCategory);

		public ProgressionEventTask(ProgressionEventModel progressionEventModel)
			: base(null)
		{
		}

		public override void Update()
		{
		}

		public override bool Matches(MergeTask other)
		{
			return false;
		}

		public void RefreshCanClaimReward()
		{
		}
	}
}
