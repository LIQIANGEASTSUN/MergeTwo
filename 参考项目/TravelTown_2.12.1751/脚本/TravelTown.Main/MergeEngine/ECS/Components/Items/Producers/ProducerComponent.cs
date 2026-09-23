using System.Collections.Generic;
using MergeEngine.Configuration.Capabilities;
using MergeEngine.Configuration.Definitions;

namespace MergeEngine.ECS.Components.Items.Producers
{
	public class ProducerComponent : ItemSpawningComponent<ProduceCapability>
	{
		public string ProducedItemsLabel { get; }

		public ProducerComponent(ProduceCapability capability, Entity entity)
			: base((ProduceCapability)default(_00210), (Entity)null)
		{
		}

		public void FillItemsQueue(List<Combination> feedingComponentCombinations)
		{
		}

		public void SetCombinations(List<Combination> feedingComponentCombinations)
		{
		}

		public void FillItemsQueue(List<WeightedItemSpawnable> items)
		{
		}
	}
}
