using MergeEngine.Configuration.Definitions;

namespace MergeEngine.ECS.Components.Items
{
	public interface ICollectableComponent
	{
		bool Collected { get; set; }

		AfterCollectAnimation AfterCollectAnimation { get; }

		Reward CollectableReward { get; }

		bool ShouldRemoveFromBoard { get; set; }

		bool IsPlaygroundPoints { get; }
	}
}
