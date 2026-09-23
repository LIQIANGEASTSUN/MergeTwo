using GameLogic.Hotspots;

namespace GameLogic.Player.MergeTasks
{
	public abstract class HotspotTask : MergeTask
	{
		public IHotspotDefinition Hotspot { get; }

		public abstract bool CanBeCompleted { get; }

		public abstract bool IsBonusAvailable { get; }

		public abstract bool IsUnlockedAndAvailable { get; }

		public int SoloMilestoneTokenAmount { get; }

		public HotspotTask(IHotspotDefinition hotspot, string descriptionLocId = "", int soloMilestoneTokenAmount = 0)
			: base(null)
		{
		}
	}
}
