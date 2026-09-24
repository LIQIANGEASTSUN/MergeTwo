using System.Collections.Generic;
using Code.GameLogic.GameEvents;
using Code.GameLogic.Player.MergeTasks;
using GameLogic.Player.Requirements;
using GameLogic.Player.Rewards;
using Merge;

namespace GameLogic.Player.MergeTasks
{
	public class CollectibleBoardEventMergeTask : MergeTask
	{
		public readonly List<PlayerItemRequirement> Requirements;

		public CollectibleBoardEventModel EventModel { get; }

		public EventTaskInfo TaskInfo { get; }

		public List<IPlayerReward> VisualisedRewards { get; }

		public bool HasRequirementsToComplete { get; }

		public MergeBoardId TargetBoardId { get; }

		public PlayerModel Player { get; }

		public override TaskCategory Category => default(TaskCategory);

		public CollectibleBoardEventMergeTask(CollectibleBoardEventModel eventModel, EventTaskInfo eventTaskInfo, MergeBoardId navigateTargetBoardId, PlayerModel playerModel)
			: base(null)
		{
		}

		public override bool Matches(MergeTask other)
		{
			return false;
		}
	}
}
