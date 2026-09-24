using MergeEngine.Configuration;
using MergeEngine.ECS.Components.Items;

namespace MergeEngine.Signal.Items
{
	public sealed class ItemExpiredSignal
	{
		public IMergeItem MergeItem { get; set; }

		public ExpendableComponent ExpendableComponent { get; set; }

		public ItemExpiredSignal(IMergeItem mergeItem, ExpendableComponent expendableComponent)
		{
		}
	}
}
