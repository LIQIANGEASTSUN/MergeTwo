using MergeEngine.Data;

namespace MergeEngine.ECS.Components.Items.Producers
{
	public interface IItemSpawning
	{
		int ItemsToProduce { get; }

		double TimeUntilFullCapacity { get; }

		string SpawnedItemsLabel { get; }

		bool ExceededLifetimeLimit { get; }

		SkipCooldownSettings SkipCooldownSettings { get; }
	}
}
