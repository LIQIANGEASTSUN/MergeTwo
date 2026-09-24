using MergeEngine.Data;
using MergeEngine.ECS;

namespace Merger.Game.Signal
{
	public class SellSelectedItemSignal
	{
		public SelectedBoardItem Item { get; }

		public Entity Entity { get; }

		public SellSelectedItemSignal(SelectedBoardItem item, Entity entityToSell)
		{
		}
	}
}
