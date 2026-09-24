using MergeEngine.Configuration;

namespace MergeEngine.Model
{
	public interface IPlayerItemsCollectionModel
	{
		bool IsItemCollected(string id);

		bool IsItemCreated(string id);

		bool TryAddDiscoveredItem(IMergeItem item);

		bool TryAddCreatedItem(IMergeItem item);
	}
}
