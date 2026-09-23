using ContextualizedECS;
using MergeEngine.Configuration;
using MergeEngine.Configuration.Definitions;
using Merger.DynamicMergeItems;
using Merger.Services.Backend.Sync.Data.Payloads.Board;

namespace Merger.MergeBoard.Factories
{
	public interface IEntityFactory
	{
		Entity CreateEntity(IMergeItem mergeItem, int position, ItemOrigin origin, bool isLocked = false, DynamicMergeItemConfig dynamicItemConfig = null);

		Entity CreateEntity(string itemId, int position, ItemOrigin origin, bool isLocked = false, DynamicMergeItemConfig dynamicItemConfig = null);

		Entity CreateEntity(ItemPayloadBase itemState, int position);
	}
}
