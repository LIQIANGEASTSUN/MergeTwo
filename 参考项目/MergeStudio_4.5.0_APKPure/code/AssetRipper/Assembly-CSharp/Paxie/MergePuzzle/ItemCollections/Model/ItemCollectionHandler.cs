using System.Collections.Generic;
using MergePuzzle;

namespace Paxie.MergePuzzle.ItemCollections.Model
{
	public class ItemCollectionHandler : FeatureHandlerBase
	{
		public class Delegates
		{
			public delegate void Initialize(bool isLocked);

			public delegate void UnLocked();
		}

		public KiteItemCollectionConfig KiteItemCollectionConfig { get; set; }

		public bool GemActive => false;

		public bool LockedActive => false;

		public BoardData BoardData { get; set; }

		public BoardEntity BoardEntity { get; set; }

		public bool IsUnlocked { get; set; }

		public string BoardLabel => null;

		public SerializableDictionary<ItemInfo, ItemCollectionElement> ItemElements { get; set; }

		public List<ItemInfo> DiscoveredItemList { get; set; }

		public List<ItemInfo> SeenElseWhereItemList { get; set; }

		public List<ItemInfo> RewardClaimableItemList { get; set; }

		public List<BoardItemCollectionData> ItemCollectionDatas { get; set; }

		public List<ItemInfo> AlwaysDiscoveryItems { get; set; }

		public int UnlockedLevel => 0;

		public Delegates.Initialize OnInitialize { get; set; }

		public Delegates.UnLocked OnUnLocked { get; set; }

		public List<int> LeftTopMostSortedRewardClaimableSetList => null;

		public override bool IsActive { get; }

		public ItemCollectionHandler()
		{
		}

		public ItemCollectionHandler(KiteItemCollectionConfig kiteItemCollectionConfig, BoardData boardData, BoardEntity boardEntity, List<BoardItemCollectionData> itemCollectionDatas, List<ItemInfo> alwaysDiscoveryItems)
		{
		}

		public void CreateItemCollectionElements()
		{
		}

		public void RolloutCheckForGem()
		{
		}

		public bool TryCreateItemCollectionItem(BoardItemData boardItemData, out ItemCollectionElement itemCollectionElement)
		{
			itemCollectionElement = null;
			return false;
		}

		public bool TryCreateExceptionItemCollectionItem(BoardItemData boardItemData, out ItemCollectionElement itemCollectionElement)
		{
			itemCollectionElement = null;
			return false;
		}

		public void CreateItemCollectionItems(List<BoardItemSetData> setDataLst)
		{
		}

		public void CreateItemCollectionItems(List<BoardItemData> boardItemDatas)
		{
		}

		public void CreateItemCollectionItems(BoardItemSetData setData)
		{
		}

		public void CreateItemCollectionItems(SerializableDictionary<int, BoardItemSetData> boardItemSetDatas)
		{
		}

		public void Subscribe(ItemCollectionElement itemCollectionElement)
		{
		}

		public int GetTabCount()
		{
			return 0;
		}

		public List<int> GetTabSetIdsSetIds(int tabIndex)
		{
			return null;
		}

		public bool TryGetTargetSetsOnSameTab(int tabIndex, out List<int> targetSets)
		{
			targetSets = null;
			return false;
		}

		public int CompareLeftTop(int setIDx, int setIDy)
		{
			return 0;
		}

		public int GetFirstTabIndex()
		{
			return 0;
		}

		public (int, int) GetTabIndexAndListIndex(int setID)
		{
			return default((int, int));
		}

		public int GetListIndex(int setID)
		{
			return 0;
		}

		public int GetRewardOnCollect()
		{
			return 0;
		}

		public ItemCollectionElement.Type GetDiscoverType(ItemInfo itemInfo)
		{
			return default(ItemCollectionElement.Type);
		}

		public int GetContainingCombination(ItemInfo itemInfo)
		{
			return 0;
		}

		public override void Initialize()
		{
		}

		public override void Process()
		{
		}

		public override void Disable()
		{
		}

		public override FeatureAddressableRequest GetAddressableRequest()
		{
			return null;
		}

		public void TryUnlock()
		{
		}

		public ItemCollectionElement GetItemCollectionElement(ItemInfo itemInfo)
		{
			return null;
		}

		public bool IsInCollection(ItemInfo itemInfo)
		{
			return false;
		}

		public bool TryAddToDiscoveredListCheckGemActive(ItemInfo itemInfo)
		{
			return false;
		}

		public bool TryAddToDiscoveredItemList(ItemInfo itemInfo)
		{
			return false;
		}

		public bool TryAddToRewardClaimableItemList(ItemInfo itemInfo)
		{
			return false;
		}

		public virtual bool TryAddToSeenElseWhereItemList(ItemInfo itemInfo)
		{
			return false;
		}

		public bool CheckDiscoverType(ItemInfo itemInfo, ItemCollectionElement.Type discoverType)
		{
			return false;
		}

		public bool HasRewardClaimable(int tabIndex)
		{
			return false;
		}

		public bool HasRewardClaimable()
		{
			return false;
		}

		public bool IsNewItem(ItemInfo itemInfo)
		{
			return false;
		}

		public bool IsItemDiscovered(ItemInfo itemInfo)
		{
			return false;
		}

		public bool IsItemRewardClaimable(ItemInfo itemInfo)
		{
			return false;
		}

		public bool IsItemSeenElseWhere(ItemInfo itemInfo)
		{
			return false;
		}

		public bool IsItemUnknownItem(ItemInfo itemInfo)
		{
			return false;
		}

		public void ModifyListsOnChangeType(ItemCollectionElement.Type oldType, ItemCollectionElement itemCollectionElement)
		{
		}

		public void CollectReward(ItemCollectionElement itemCollectionElement)
		{
		}

		public void ClearRemovedSeenItems()
		{
		}

		public void ClearRemovedSeenItemsEventOnly(BoardData eventBoardData)
		{
		}

		public override void ProcessLevelUp()
		{
		}

		public static void Log(object msg)
		{
		}
	}
}
