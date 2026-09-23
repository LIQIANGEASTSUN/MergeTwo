using Code.GameLogic.GameEvents;
using Code.GameLogic.Player.MergeTasks;
using Metaplay.Core;

namespace GameLogic.Player.MergeTasks
{
	public class BoultonLeagueEventTask : MergeTask
	{
		public MetaTime? EndAt { get; }

		public BoultonLeagueEventModel EventModel { get; }

		public override TaskCategory Category => default(TaskCategory);

		public BoultonLeagueEventTask(BoultonLeagueEventModel eventModel)
			: base(null)
		{
		}

		public override bool Matches(MergeTask other)
		{
			return false;
		}
	}
}
