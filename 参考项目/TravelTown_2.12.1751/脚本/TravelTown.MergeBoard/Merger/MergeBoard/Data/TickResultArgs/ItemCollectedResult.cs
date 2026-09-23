using ContextualizedECS;
using MergeEngine.Configuration.Definitions;

namespace Merger.MergeBoard.Data.TickResultArgs
{
	public class ItemCollectedResult
	{
		public Entity Entity { get; set; }

		public string EntityId { get; set; }

		public string ItemId { get; set; }

		public int Position { get; set; }

		public Reward Reward { get; set; }

		public bool IsImmediateReward { get; set; }
	}
}
