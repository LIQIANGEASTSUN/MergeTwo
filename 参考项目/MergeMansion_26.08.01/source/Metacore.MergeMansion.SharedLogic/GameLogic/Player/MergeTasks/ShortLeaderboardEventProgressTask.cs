using Code.GameLogic.GameEvents;
using Code.GameLogic.Player.MergeTasks;
using Metaplay.Core;

namespace GameLogic.Player.MergeTasks
{
	public class ShortLeaderboardEventProgressTask : MergeTask
	{
		public ShortLeaderboardEventModel EventModel { get; }

		public MetaTime? EndAt { get; }

		public PlayerModel PlayerModel { get; }

		public override TaskCategory Category => default(TaskCategory);

		public ShortLeaderboardEventProgressTask(ShortLeaderboardEventModel eventModel, PlayerModel playerModel)
			: base(null)
		{
		}

		public override bool Matches(MergeTask other)
		{
			return false;
		}
	}
}
