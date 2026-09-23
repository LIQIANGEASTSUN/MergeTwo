using MergeEngine.Configuration;

namespace Merger.MergeBoard.Handlers
{
	public interface IItemsCollectionHandler
	{
		void ReportItemDiscovered(IMergeItem item);

		void ReportItemCreated(IMergeItem item);
	}
}
