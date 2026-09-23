using Framework.Core.DataBinding.Collections;
using MergeEngine.Configuration;
using MergeEngine.Configuration.CollectionBook.BackendState;
using MergeEngine.Data;
using MergeEngine.Model;

namespace Merger.MergeBoard.Models
{
	public interface IItemsDiscoveryModel : IPlayerItemsCollectionModel
	{
		ObservableList<string> RewardPendingItemIds { get; }

		CollectionBookStickerState GetItemState(string id);

		void OverrideItemsDiscoveryState(CollectionStateResponse state);

		void MarkItemRewardCollected(IMergeItem item);

		bool IsItemRewardCollected(string id);

		bool IsItemRewardPending(string id);
	}
}
