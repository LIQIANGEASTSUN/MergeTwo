using Code.GameLogic.GameEvents;
using Code.GameLogic.Player.MergeTasks;
using Metaplay.Core;

namespace GameLogic.Player.MergeTasks
{
	public class LeaderboardEventProgressTask : MergeTask
	{
		public LeaderboardEventModel EventModel { get; }

		public MetaTime? EndAt { get; }

		public PlayerModel PlayerModel { get; }

		public override TaskCategory Category => default(TaskCategory);

		public LeaderboardEventProgressTask(LeaderboardEventModel eventModel, PlayerModel playerModel)
			: base(null)
		{
		}

		public override bool Matches(MergeTask other)
		{
			return false;
		}
	}
}
