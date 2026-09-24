using ContextualizedECS;
using Merger.Game.Views.Popups.Data;

namespace Merger.MergeBoard.Data.TickResultArgs
{
	public class PendingItemsCombinationResult
	{
		public MergeCheckItemType MergeCheckItemType { get; set; }

		public Entity FirstItem { get; set; }

		public Entity SecondItem { get; set; }

		public string ResultItem { get; set; }
	}
}
