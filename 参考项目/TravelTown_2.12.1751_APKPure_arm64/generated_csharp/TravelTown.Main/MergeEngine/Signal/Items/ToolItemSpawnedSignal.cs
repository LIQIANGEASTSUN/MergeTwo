using MergeEngine.Configuration;

namespace MergeEngine.Signal.Items
{
	public class ToolItemSpawnedSignal : MergeItemSignalBase
	{
		public IMergeItem SpawnedFrom { get; }

		public ToolItemSpawnedSignal(IMergeItem spawned, int level, IMergeItem spawnedFrom)
			: base(null)
		{
		}
	}
}
