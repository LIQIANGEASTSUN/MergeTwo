using Code.GameLogic.Player.MergeTasks;
using GameLogic.Config.EnergyModeEvent;
using Metaplay.Core;

namespace GameLogic.Player.MergeTasks
{
	public class EnergyModeEventProgressTask : MergeTask
	{
		public EnergyModeEventModel EventModel { get; }

		public MetaTime? EndAt { get; }

		public PlayerModel PlayerModel { get; }

		public override TaskCategory Category => default(TaskCategory);

		public EnergyModeEventProgressTask(EnergyModeEventModel eventModel, PlayerModel playerModel)
			: base(null)
		{
		}

		public override bool Matches(MergeTask other)
		{
			return false;
		}
	}
}
