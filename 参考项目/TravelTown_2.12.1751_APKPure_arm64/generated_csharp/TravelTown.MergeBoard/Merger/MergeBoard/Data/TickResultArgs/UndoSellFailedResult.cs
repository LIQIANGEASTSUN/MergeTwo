using ContextualizedECS;
using MergeEngine.Configuration;
using MergeEngine.Model;

namespace Merger.MergeBoard.Data.TickResultArgs
{
	public class UndoSellFailedResult
	{
		public Entity Entity { get; set; }

		public string Reason { get; set; }

		public IMergeItem MergeItem { get; set; }

		public string ItemId { get; set; }

		public PlayerResourceEnum Resource { get; set; }

		public int Amount { get; set; }

		public UndoSellFailedResult(Entity entity, string reason, IMergeItem mergeItem, string itemId, PlayerResourceEnum resource, int amount)
		{
		}
	}
}
