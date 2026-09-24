using MergeEngine.Data;
using MergeEngine.ECS.Components.Items.Producers;
using Merger.Audio.Attributes;

namespace MergeEngine.Signal.Items
{
	[SoundBoundSignal("Produce")]
	public class ProducerSpawnedItemSignal
	{
		public ProducerComponent Producer { get; }

		public BoardItemPosition Position { get; }

		public ProducerSpawnedItemSignal(ProducerComponent producer, BoardItemPosition position)
		{
		}
	}
}
