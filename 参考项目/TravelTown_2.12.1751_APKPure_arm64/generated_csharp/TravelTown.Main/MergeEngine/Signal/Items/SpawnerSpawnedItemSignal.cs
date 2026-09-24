using MergeEngine.Configuration;
using MergeEngine.ECS.Components.Items.Producers;

namespace MergeEngine.Signal.Items
{
	public class SpawnerSpawnedItemSignal
	{
		public IItemSpawningComponent Spawner { get; }

		public IMergeItem SpawnerItem { get; }

		public IMergeItem SpawnedItem { get; }

		public int EmptyTiles { get; }

		public SpawnerSpawnedItemSignal(IItemSpawningComponent spawner, IMergeItem spawnerItem, IMergeItem spawnedItem, int emptyTiles)
		{
		}
	}
}
