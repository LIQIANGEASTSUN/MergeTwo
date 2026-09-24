using Code.GameLogic.GameEvents;
using Code.GameLogic.Player.MergeTasks;
using Metaplay.Core;

namespace GameLogic.Player.MergeTasks
{
	public class GarageCleanupTask : MergeTask
	{
		public GarageCleanupEventModel EventModel { get; }

		public MetaTime? EndAt { get; }

		public override TaskCategory Category => default(TaskCategory);

		public GarageCleanupTask(GarageCleanupEventModel garageCleanupEvent)
			: base(null)
		{
		}

		public override bool Matches(MergeTask other)
		{
			return false;
		}
	}
}
