using ContextualizedECS;
using MergeEngine.Configuration.Capabilities;
using MergeEngine.Util;

namespace Merger.MergeBoard.Components
{
	public struct ProducerComponent : IComponent
	{
		public ItemSpawningQueue ItemsQueue { get; set; }

		public int Seed { get; set; }

		public ProduceCapability Capability { get; set; }

		public bool ReadyToProduce { get; set; }
	}
}
