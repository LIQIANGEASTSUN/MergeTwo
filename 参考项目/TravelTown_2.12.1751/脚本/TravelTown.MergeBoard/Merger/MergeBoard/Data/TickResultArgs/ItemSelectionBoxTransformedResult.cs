using ContextualizedECS;
using MergeEngine.Configuration;

namespace Merger.MergeBoard.Data.TickResultArgs
{
	public class ItemSelectionBoxTransformedResult
	{
		public IMergeItem FromMergeItem { get; set; }

		public IMergeItem ToMergeItem { get; set; }

		public Entity NewItem { get; set; }

		public Entity RemovedItem { get; set; }
	}
}
