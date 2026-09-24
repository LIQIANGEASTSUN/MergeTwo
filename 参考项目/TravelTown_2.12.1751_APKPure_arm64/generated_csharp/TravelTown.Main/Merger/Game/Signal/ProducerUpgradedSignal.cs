using JetBrains.Annotations;
using MergeEngine.Configuration;

namespace Merger.Game.Signal
{
	public class ProducerUpgradedSignal
	{
		public IMergeItem Item { get; }

		public IMergeItem SecondItem { get; }

		public IMergeItem CreatedItem { get; }

		[CanBeNull]
		public IMergeItem SpawnedResource { get; }

		public bool WasBubbleCreated { get; }

		public bool AnyItemLocked { get; }

		public int Level { get; }

		public int FreeTiles { get; }

		public ProducerUpgradedSignal(IMergeItem item, IMergeItem secondMergeItem, IMergeItem createdItem, IMergeItem spawnedResource, bool wasBubbleCreated, bool anyItemLocked, int level, int freeTiles)
		{
		}
	}
}
