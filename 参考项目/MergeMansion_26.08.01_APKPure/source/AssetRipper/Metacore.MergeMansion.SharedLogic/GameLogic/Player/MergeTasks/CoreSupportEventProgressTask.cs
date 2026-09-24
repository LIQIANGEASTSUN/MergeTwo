using Code.GameLogic.GameEvents;
using Code.GameLogic.Player.MergeTasks;
using Metaplay.Core;

namespace GameLogic.Player.MergeTasks
{
	public class CoreSupportEventProgressTask : MergeTask
	{
		public CoreSupportEventModel EventModel { get; }

		public MetaTime? EndAt { get; }

		public PlayerModel PlayerModel { get; }

		public override TaskCategory Category => default(TaskCategory);

		public CoreSupportEventProgressTask(CoreSupportEventModel eventModel, PlayerModel playerModel)
			: base(null)
		{
		}

		public override bool Matches(MergeTask other)
		{
			return false;
		}
	}
}
