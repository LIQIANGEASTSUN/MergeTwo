using MergeEngine.Configuration;
using MergeEngine.ECS;

namespace MergeEngine.Signal.Items
{
	public sealed class ItemAppearedSignal
	{
		public IMergeItem MergeItem { get; set; }

		public Entity Entity { get; set; }

		public ItemAppearedSignal(IMergeItem mergeItem, Entity entity = null)
		{
		}
	}
}
