using System;
using System.Collections.Generic;
using Framework.Core.DataBinding.Collections;
using Framework.Core.MVVM.Model;
using MergeEngine.Configuration;
using MergeEngine.Configuration.CollectionBook.BackendState;
using MergeEngine.Data;
using MergeEngine.Model;

namespace Merger.MergeBoard.Models
{
	public class ItemsDiscoveryModel : ModelBase, IItemsDiscoveryModel, IPlayerItemsCollectionModel
	{
		public class ItemDiscoveryRecord
		{
			public CollectionBookStickerState State;

			public string GraphName;
		}

		[NonSerialized]
		public readonly Dictionary<string, ItemDiscoveryRecord> _items;

		[NonSerialized]
		public readonly ObservableList<string> _rewardPendingItemIds;

		public ObservableList<string> RewardPendingItemIds => null;

		public CollectionBookStickerState GetItemState(string id)
		{
			return default(CollectionBookStickerState);
		}

		public bool IsItemCollected(string id)
		{
			return false;
		}

		public bool IsItemCreated(string id)
		{
			return false;
		}

		public bool IsItemRewardPending(string id)
		{
			return false;
		}

		public bool IsItemRewardCollected(string id)
		{
			return false;
		}

		public bool TryAddDiscoveredItem(IMergeItem item)
		{
			return false;
		}

		public bool TryAddCreatedItem(IMergeItem item)
		{
			return false;
		}

		public void MarkItemRewardCollected(IMergeItem item)
		{
		}

		public void OverrideItemsDiscoveryState(CollectionStateResponse state)
		{
		}

		public void RebuildRewardPendingIds()
		{
		}

		public bool IsItemCreated(ItemDiscoveryRecord record)
		{
			return false;
		}

		public bool IsItemRewardPending(ItemDiscoveryRecord record)
		{
			return false;
		}

		public bool IsItemRewardCollected(ItemDiscoveryRecord record)
		{
			return false;
		}

		public bool IsItemDiscovered(ItemDiscoveryRecord record)
		{
			return false;
		}
	}
}
