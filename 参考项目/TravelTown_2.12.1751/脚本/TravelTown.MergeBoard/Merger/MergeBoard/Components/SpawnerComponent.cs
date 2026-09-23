using ContextualizedECS;
using MergeEngine.Configuration.Capabilities;
using MergeEngine.Util;

namespace Merger.MergeBoard.Components
{
	public struct SpawnerComponent : IComponent
	{
		public ItemSpawningQueue ItemsQueue { get; set; }

		public int Seed { get; set; }

		public SpawnCapability Capability { get; set; }

		public bool Anywhere => false;
	}
}
