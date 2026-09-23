using MergeEngine.ECS.Components.Items.Producers;

namespace MergeEngine.ECS.Systems.Items.Producers.LowLevelItemProduce
{
	public interface ILowLevelProduceStrategy
	{
		bool TryGetProduceData(IItemSpawningComponent itemSpawningComponent, out LowLevelItemProduceData result);
	}
}
