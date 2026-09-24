using System;
using System.Collections.Generic;
using DragonU3DSDK.Storage;
using IFix.Core;

public class MergeManager : Manager<MergeManager>
{
	public class MergeBoardDataStruct
	{
		public int EmptyBoardGridCount;

		public int EmptyBagGridCount;

		public int UnlockBagGridCount;

		public int EmptyBuildBagGridCount;

		public int UnlockBuildBagGridCount;

		public Dictionary<int, int> BoardItems;

		public Dictionary<int, int> BagItems;

		public Dictionary<int, int> BuildBagItems;
	}

	[NonSerialized]
	public Random random;

	public const int BOARD_WIDTH = 7;

	public const int BOARD_HEIGHT = 9;

	public const int BAG_CAPACITY = 5;

	public const int BubbleCD = 60;

	public static ClassObjectPool mergeItemPool;

	[NonSerialized]
	public StorageDictionary<int, StorageMergeBoard> storageMergeBoardDict;

	[NonSerialized]
	public int mergeBoadrId1;

	[NonSerialized]
	public Dictionary<int, int> mergeItemCounts;

	public bool mergeItemCountsDirty;

	public Dictionary<int, int> _requirementData;

	[NonSerialized]
	public int[] easterLines;

	[NonSerialized]
	public int[] sealLines;

	[NonSerialized]
	public int[] dolphinLines;

	[NonSerialized]
	public Dictionary<int, List<TableMergeItem>> productItems;

	public static Dictionary<MergeBoardEnum, int> _leftEmptyGridCountDic;

	public static Dictionary<MergeBoardEnum, int> _leftBagEmptyGridCountDic;

	public static Dictionary<MergeBoardEnum, int> _bagGridCountDic;

	public static bool IsDestroy;

	public int MergeBoardID1 => 0;

	public StorageMergeBoard storageBoard => null;

	public StorageMergeUnlockItem unlockItems => null;

	public StorageMergeUnlockItem UnlockItems => null;

	public bool IsInUnlimitedProductState { get; set; }

	public bool HasBubble(MergeBoardEnum boardId)
	{
		return false;
	}

	[IDTag(1)]
	public bool IsBubble(int index, MergeBoardEnum boardId)
	{
		return false;
	}

	[IDTag(0)]
	public bool IsBubble(StorageMergeItem itemStorage)
	{
		return false;
	}

	public float GetOccurBubbleRate(int id)
	{
		return 0f;
	}

	public int RandomBubbleType(int id)
	{
		return 0;
	}

	public void SetBoardItemBubbleType(int type, int index, MergeBoardEnum boardId, int itemId)
	{
	}

	public bool IsCanOccurBubble(int id)
	{
		return false;
	}

	public int GetBubbleLeftCdTime(int index, MergeBoardEnum boardId)
	{
		return 0;
	}

	public void RefreshBubbleInfo(bool force = false)
	{
	}

	public void RecordBubbleInfo(int id)
	{
	}

	public void AddToadyBubbuleCount()
	{
	}

	public bool TodayIsCanProductBubble(int id)
	{
		return false;
	}

	public bool IsArrivalMaxBubbleCount(int id)
	{
		return false;
	}

	public bool IsArrivalTodayBubbleMaxCount()
	{
		return false;
	}

	public bool IsProductBubbleInCd()
	{
		return false;
	}

	public int GetCreateBubbleCD()
	{
		return 0;
	}

	public void DebugClearTodayBubbleInfo()
	{
	}

	public bool IsHaveOpenBox(MergeBoardEnum boardId)
	{
		return false;
	}

	public StorageMergeBoard GetStorageBoard(MergeBoardEnum boardId)
	{
		return null;
	}

	public Dictionary<int, int> GetMergeItemCounts(MergeBoardEnum boardId)
	{
		return null;
	}

	public Dictionary<int, int> GetBagItemCounts(MergeBoardEnum boardId)
	{
		return null;
	}

	public Dictionary<int, int> GetVipBagItemCounts(MergeBoardEnum boardId)
	{
		return null;
	}

	public bool IsCompleted(Dictionary<int, int> needCounts, MergeBoardEnum boardId)
	{
		return false;
	}

	public bool IsEnoughCount(Dictionary<int, int> needCounts, MergeBoardEnum boardId)
	{
		return false;
	}

	public List<int> GetBagItemIndex(Dictionary<int, int> requirement, MergeBoardEnum boardType)
	{
		return null;
	}

	public List<int> GetVipBagItemIndex(Dictionary<int, int> requirement, MergeBoardEnum boardType)
	{
		return null;
	}

	public List<int> GetBoardItemIndex(Dictionary<int, int> requirement, MergeBoardEnum boardType)
	{
		return null;
	}

	public bool ConsumeRequirement(Dictionary<int, int> requirement, MergeBoardEnum boardId, bool checkHave = true)
	{
		return false;
	}

	public override void InitImmediately()
	{
	}

	public void Refresh(MergeBoardEnum boardId)
	{
	}

	public void InitStorage()
	{
	}

	public virtual void InitMergeBoard(MergeBoardEnum boardId)
	{
	}

	public virtual void ResetMergeBoard(MergeBoardEnum boardId)
	{
	}

	public virtual void InitButterflyWorkShopMergeBoard(MergeBoardEnum boardId)
	{
	}

	public virtual void InitSummerWatermelonMergeBoard(MergeBoardEnum boardId)
	{
	}

	public virtual void InitSummerWatermelonTwoMinMergeBoard(MergeBoardEnum boardId)
	{
	}

	public virtual void InitSummerWatermelonTwoMaxMergeBoard(MergeBoardEnum boardId)
	{
	}

	public virtual void InitSummerWatermelonThreeMinMergeBoard(MergeBoardEnum boardId)
	{
	}

	public virtual void InitSummerWatermelonThreeMaxMergeBoard(MergeBoardEnum boardId)
	{
	}

	public virtual void InitSummerWatermelonFourMergeBoard(MergeBoardEnum boardId)
	{
	}

	public virtual void InitSummerWatermelonSixMergeBoard(MergeBoardEnum boardId)
	{
	}

	public virtual void InitSummerWatermelonFiveMinMergeBoard(MergeBoardEnum boardId)
	{
	}

	public virtual void InitSummerWatermelonFiveMaxMergeBoard(MergeBoardEnum boardId)
	{
	}

	public virtual void InitSummerWatermelonSevenMinMergeBoard(MergeBoardEnum boardId)
	{
	}

	public virtual void InitSummerWatermelonSevenMaxMergeBoard(MergeBoardEnum boardId)
	{
	}

	public virtual void InitSummerWatermelonElevenMinMergeBoard(MergeBoardEnum boardId)
	{
	}

	public virtual void InitSummerWatermelonElevenMaxMergeBoard(MergeBoardEnum boardId)
	{
	}

	public virtual void InitSummerWatermelonFourteenMinMergeBoard(MergeBoardEnum boardId)
	{
	}

	public virtual void InitSummerWatermelonFourteenMaxMergeBoard(MergeBoardEnum boardId)
	{
	}

	public virtual void InitSummerWatermelonTwelveMergeBoard1(MergeBoardEnum boardId)
	{
	}

	public virtual void InitSummerWatermelonTwelveMergeBoard2(MergeBoardEnum boardId)
	{
	}

	public virtual void InitSummerWatermelonTwelveMergeBoard3(MergeBoardEnum boardId)
	{
	}

	public virtual void InitSummerWatermelonTwelveMergeBoard4(MergeBoardEnum boardId)
	{
	}

	public virtual void InitSummerWatermelonThirteenMergeBoard1(MergeBoardEnum boardId)
	{
	}

	public virtual void InitSummerWatermelonThirteenMergeBoard2(MergeBoardEnum boardId)
	{
	}

	public virtual void InitSummerWatermelonThirteenMergeBoard3(MergeBoardEnum boardId)
	{
	}

	public virtual void InitSummerWatermelonThirteenMergeBoard4(MergeBoardEnum boardId)
	{
	}

	public virtual void InitSummerWatermelonFifteenMergeBoard1(MergeBoardEnum boardId)
	{
	}

	public virtual void InitSummerWatermelonFifteenMergeBoard2(MergeBoardEnum boardId)
	{
	}

	public virtual void InitSummerWatermelonFifteenMergeBoard3(MergeBoardEnum boardId)
	{
	}

	public virtual void InitSummerWatermelonFifteenMergeBoard4(MergeBoardEnum boardId)
	{
	}

	public virtual void InitSummerWatermelonSevenTeenMergeBoard1(MergeBoardEnum boardId)
	{
	}

	public virtual void InitSummerWatermelonSevenTeenMergeBoard2(MergeBoardEnum boardId)
	{
	}

	public virtual void InitSummerWatermelonSevenTeenMergeBoard3(MergeBoardEnum boardId)
	{
	}

	public virtual void InitSummerWatermelonSevenTeenMergeBoard4(MergeBoardEnum boardId)
	{
	}

	public virtual void InitSummerWatermelonNineTeenMergeBoard1(MergeBoardEnum boardId)
	{
	}

	public virtual void InitSummerWatermelonNineTeenMergeBoard2(MergeBoardEnum boardId)
	{
	}

	public virtual void InitSummerWatermelonNineTeenMergeBoard3(MergeBoardEnum boardId)
	{
	}

	public virtual void InitSummerWatermelonNineTeenMergeBoard4(MergeBoardEnum boardId)
	{
	}

	public virtual void InitSummerWatermelonNineMinMergeBoard(MergeBoardEnum boardId)
	{
	}

	public virtual void InitSummerWatermelonNineMaxMergeBoard(MergeBoardEnum boardId)
	{
	}

	public virtual void ReAddSummerWatermelonFourMergeBoard()
	{
	}

	public virtual void ReAddSummerWatermelonSixMergeBoard(int moveStep = 2)
	{
	}

	public virtual void InitSummerWatermelonEightMergeBoard(MergeBoardEnum boardId)
	{
	}

	public virtual void ReAddSummerWatermelonEightMergeBoard(int moveStep = 2)
	{
	}

	public virtual void InitSummerWatermelonTenMergeBoard(MergeBoardEnum boardId)
	{
	}

	public virtual void InitMapAdventureOneMergeBoard(MergeBoardEnum boardId)
	{
	}

	public virtual void InitMapAdventureTwoMergeBoard(MergeBoardEnum boardId)
	{
	}

	public virtual void InitSummerWatermelonSixteenMergeBoard(MergeBoardEnum boardId)
	{
	}

	public virtual void InitSummerWatermelonEighteenMergeBoard(MergeBoardEnum boardId)
	{
	}

	public virtual void InitSummerWatermelonTwentyMergeBoard(MergeBoardEnum boardId)
	{
	}

	public virtual void InitSummerWatermelonTwentyOneMergeBoard1(MergeBoardEnum boardId)
	{
	}

	public virtual void InitSummerWatermelonTwentyOneMergeBoard2(MergeBoardEnum boardId)
	{
	}

	public virtual void InitSummerWatermelonTwentyOneMergeBoard3(MergeBoardEnum boardId)
	{
	}

	public virtual void InitSummerWatermelonTwentyOneMergeBoard4(MergeBoardEnum boardId)
	{
	}

	public virtual void InitSummerWatermelonTwentyTwoMergeBoard1(MergeBoardEnum boardId)
	{
	}

	public virtual void InitSummerWatermelonTwentyTwoMergeBoard2(MergeBoardEnum boardId)
	{
	}

	public virtual void InitSummerWatermelonTwentyTwoMergeBoard3(MergeBoardEnum boardId)
	{
	}

	public virtual void InitSummerWatermelonTwentyTwoMergeBoard4(MergeBoardEnum boardId)
	{
	}

	public virtual void InitSummerWatermelonTwentyFourMergeBoard1(MergeBoardEnum boardId)
	{
	}

	public virtual void InitSummerWatermelonTwentyFourMergeBoard2(MergeBoardEnum boardId)
	{
	}

	public virtual void InitSummerWatermelonTwentyFourMergeBoard3(MergeBoardEnum boardId)
	{
	}

	public virtual void InitSummerWatermelonTwentySixMergeBoard1(MergeBoardEnum boardId)
	{
	}

	public virtual void InitSummerWatermelonTwentySixMergeBoard2(MergeBoardEnum boardId)
	{
	}

	public virtual void InitSummerWatermelonTwentySixMergeBoard3(MergeBoardEnum boardId)
	{
	}

	public virtual void InitSummerWatermelonTwentySixMergeBoard4(MergeBoardEnum boardId)
	{
	}

	public virtual void InitSummerWatermelonTwentyEightMergeBoard1(MergeBoardEnum boardId)
	{
	}

	public virtual void InitSummerWatermelonTwentyEightMergeBoard2(MergeBoardEnum boardId)
	{
	}

	public virtual void InitSummerWatermelonTwentyEightMergeBoard3(MergeBoardEnum boardId)
	{
	}

	public virtual void InitSummerWatermelonTwentyEightMergeBoard4(MergeBoardEnum boardId)
	{
	}

	public virtual void InitSummerWatermelonThirtyMergeBoard1(MergeBoardEnum boardId)
	{
	}

	public virtual void InitSummerWatermelonThirtyMergeBoard2(MergeBoardEnum boardId)
	{
	}

	public virtual void InitSummerWatermelonThirtyMergeBoard3(MergeBoardEnum boardId)
	{
	}

	public virtual void InitSummerWatermelonThirtyMergeBoard4(MergeBoardEnum boardId)
	{
	}

	public virtual void InitSummerWatermelonThirtyTwoMergeBoard1(MergeBoardEnum boardId)
	{
	}

	public virtual void InitSummerWatermelonThirtyTwoMergeBoard2(MergeBoardEnum boardId)
	{
	}

	public virtual void InitSummerWatermelonThirtyTwoMergeBoard3(MergeBoardEnum boardId)
	{
	}

	public virtual void InitSummerWatermelonThirtyTwoMergeBoard4(MergeBoardEnum boardId)
	{
	}

	public virtual void InitSummerWatermelonThirtyFourMergeBoard1(MergeBoardEnum boardId)
	{
	}

	public virtual void InitSummerWatermelonThirtyFourMergeBoard2(MergeBoardEnum boardId)
	{
	}

	public virtual void InitSummerWatermelonThirtyFourMergeBoard3(MergeBoardEnum boardId)
	{
	}

	public virtual void InitSummerWatermelonThirtyFourMergeBoard4(MergeBoardEnum boardId)
	{
	}

	public virtual void InitSummerWatermelonTwentyFourMergeBoard4(MergeBoardEnum boardId)
	{
	}

	public virtual void InitNewbieRoomMergeBoard(MergeBoardEnum boardId)
	{
	}

	public void InitOrzginalStoreCount(StorageMergeBoard board, MergeBoardEnum boardId)
	{
	}

	public int GetBoardWidth(MergeBoardEnum boardId)
	{
		return 0;
	}

	public int GetBoardHeight(MergeBoardEnum boardId)
	{
		return 0;
	}

	public int GetBoardCount(MergeBoardEnum boardId)
	{
		return 0;
	}

	[IDTag(0)]
	public bool IsOpen(StorageMergeItem storageMergeItem)
	{
		return false;
	}

	[IDTag(1)]
	public bool IsOpen(int index, MergeBoardEnum boardId)
	{
		return false;
	}

	[IDTag(2)]
	public bool IsBox(StorageMergeItem storageMergeItem)
	{
		return false;
	}

	public bool IsSurpriseBox(TableMergeItem config)
	{
		return false;
	}

	[IDTag(1)]
	public bool IsActiveItem(int index, MergeBoardEnum boardId)
	{
		return false;
	}

	[IDTag(0)]
	public bool IsActiveItem(StorageMergeItem itemStorage)
	{
		return false;
	}

	[IDTag(0)]
	public bool IsBox(int index, MergeBoardEnum boardId)
	{
		return false;
	}

	[IDTag(1)]
	public bool IsBox(TableMergeItem config)
	{
		return false;
	}

	public MergeItemStatus GetMergeItemStatus(StorageMergeItem storageMergeItem)
	{
		return default(MergeItemStatus);
	}

	public bool IsUnlock(StorageMergeItem storageMergeItem)
	{
		return false;
	}

	public bool IsLockWeb(int index, MergeBoardEnum boardId)
	{
		return false;
	}

	public StorageMergeItem GetEmptyItem()
	{
		return null;
	}

	public StorageMergeItem GetBoardItem(int index, MergeBoardEnum boardId)
	{
		return null;
	}

	[IDTag(1)]
	public void SetBoardItem(int index, StorageMergeItem storageMergeItem, RefreshItemSource source, MergeBoardEnum boardId, bool isDispatchEvent = true, int oldId = -1)
	{
	}

	[IDTag(0)]
	public void SetBoardItem(int index, int id, RefreshItemSource source, MergeBoardEnum boardId, int oldIndex = -1, bool isDispatchEvent = true, int oldId = -1, string userInfo = "")
	{
	}

	public void SetNewBoardItem(int index, int id, int state, RefreshItemSource source, MergeBoardEnum boardId, int oldIndex = -1, bool isDispatchEvent = true, int oldId = -1, int existTime = 0)
	{
	}

	public void SetProductCount(int index, int count, MergeBoardEnum boardId)
	{
	}

	[IDTag(2)]
	public void SetBoardItem(int index, int id, int state, RefreshItemSource source, MergeBoardEnum boardId)
	{
	}

	public void RecordProductInfo(int index, int productId, MergeBoardEnum boardId, RefreshItemSource source = RefreshItemSource.notDeal)
	{
	}

	public void RecordDropInterval(int index, int productId, MergeBoardEnum boardId)
	{
	}

	public void RecordMergeLineProductInfo(int index, MergeBoardEnum boardId)
	{
	}

	public int GetMergeLineProductCount(int index, MergeBoardEnum boardId)
	{
		return 0;
	}

	public int GetMergeLineProductItemId(int index, MergeBoardEnum boardId)
	{
		return 0;
	}

	public int GetDropIntervalOutputId(int index, MergeBoardEnum boardId)
	{
		return 0;
	}

	public void RecordTimeProductItem(int index, int id, TableMergeItem itemConfig, MergeBoardEnum boardId)
	{
	}

	public List<int> GetTimeProductItems(int index, MergeBoardEnum boardId)
	{
		return null;
	}

	public void FreeTimeProductItems(int index, int id, MergeBoardEnum boardId)
	{
	}

	public bool IsTimeProductMaxCount(int index, TableMergeItem itemConfig, MergeBoardEnum boardId)
	{
		return false;
	}

	public int GetTimeProductTimes(int index, MergeBoardEnum boardId)
	{
		return 0;
	}

	public bool IsTimeProductInCD(int index, MergeBoardEnum boardId)
	{
		return false;
	}

	public int GetTimeProductCount(int index, MergeBoardEnum boardId)
	{
		return 0;
	}

	[IDTag(1)]
	public int GetTimeProductCd(int index, ref float percent, MergeBoardEnum boardId)
	{
		return 0;
	}

	[IDTag(0)]
	public int GetTimeProductCd(int index, TableMergeItem tableMergeItem, ref float percent, MergeBoardEnum boardId)
	{
		return 0;
	}

	[IDTag(1)]
	public int GetLeftProductCount(int index, MergeBoardEnum boardId)
	{
		return 0;
	}

	[IDTag(0)]
	public int GetLeftProductCount(int index, TableMergeItem config, MergeBoardEnum boardId)
	{
		return 0;
	}

	public int GetLeftProductCountInBag(int index, MergeBoardEnum boardId)
	{
		return 0;
	}

	[IDTag(2)]
	public int GetLeftActiveTime(int index, ref float percent, MergeBoardEnum boardId)
	{
		return 0;
	}

	[IDTag(1)]
	public int GetLeftActiveTime(int index, MergeBoardEnum boardId)
	{
		return 0;
	}

	[IDTag(0)]
	public int GetLeftActiveTime(StorageMergeItem itemStorage, TableMergeItem mergeItem, ref float percent)
	{
		return 0;
	}

	public ActiveCostType GetActiveCostType(TableMergeItem mergeItem)
	{
		return default(ActiveCostType);
	}

	public int GetTimeProductCdTime(TableMergeItem config)
	{
		return 0;
	}

	public int[] GetCdSpeedCost(TableMergeItem config, StorageMergeItem item)
	{
		return null;
	}

	public int GetProductCdTime(TableMergeItem config, StorageMergeItem item)
	{
		return 0;
	}

	[IDTag(2)]
	public int GetLeftProductTime(int index, MergeBoardEnum boardId)
	{
		return 0;
	}

	[IDTag(1)]
	public int GetLeftProductTime(int index, ref float percent, MergeBoardEnum boardId)
	{
		return 0;
	}

	[IDTag(0)]
	public int GetLeftProductTime(int index, TableMergeItem config, ref float percent, MergeBoardEnum boardId)
	{
		return 0;
	}

	public void ResetProductCount(int index, TableMergeItem itemConfig, MergeBoardEnum boardId)
	{
	}

	public void ResumeBuildCD(StorageMergeItem boardItem)
	{
	}

	public void ResetProductCD(int index, MergeBoardEnum boardId)
	{
	}

	public void ResetActiveCD(int index, MergeBoardEnum boardId)
	{
	}

	public void ResetTimeProductCD(int index, MergeBoardEnum boardId)
	{
	}

	[IDTag(2)]
	public void RemoveBoardItem(int index, out StorageMergeItem result, string sources, MergeBoardEnum boardId, bool sendEvent = true)
	{
		result = null;
	}

	public void ResetStorageMergeBoardStatus(StorageMergeItem item)
	{
	}

	public void RemoveAllItemByType(MergeItemType itemType, MergeBoardEnum boardId, string sources)
	{
	}

	public void ReplaceEaster(MergeBoardEnum boardId)
	{
	}

	public void ReplaceSeal(MergeBoardEnum boardId)
	{
	}

	public void ReplaceDolphin(MergeBoardEnum boardId)
	{
	}

	public int GetProductCdByLine(int line, MergeBoardEnum boardId)
	{
		return 0;
	}

	public int GetTimeProductCdByLine(int line, MergeBoardEnum boardId)
	{
		return 0;
	}

	public List<TableMergeItem> GetItemsByLine(int line, MergeBoardEnum boardId)
	{
		return null;
	}

	public void RePlaceAllItemByLine(int line, MergeBoardEnum boardId, string sources)
	{
	}

	[IDTag(3)]
	public void RemoveBoardItem(int index, MergeBoardEnum boardId, string sources, bool sendEvent = true)
	{
	}

	public void RemoveMergeItem(int mergeId, string userInfo, MergeBoardEnum boardId)
	{
	}

	[IDTag(1)]
	public void RemoveBoardItem(int index, MergeBoardEnum boardId, bool sendEvent = true)
	{
	}

	[IDTag(0)]
	public void RemoveBoardItem(int index, out StorageMergeItem result, MergeBoardEnum boardId, bool sendEvent = true)
	{
		result = null;
	}

	public bool IsBoardItemExist(int index, MergeBoardEnum boardId)
	{
		return false;
	}

	public void SwapBoardItem(int a, int b, MergeBoardEnum boardId)
	{
	}

	public int FindEmptyGrid(int index, MergeBoardEnum boardId, bool ignoreSelf = false)
	{
		return 0;
	}

	public bool MergeBoardIsFull(MergeBoardEnum boardId)
	{
		return false;
	}

	public bool MergeBoardIsFullAndCantMerge(MergeBoardEnum boardId)
	{
		return false;
	}

	public int GetLeftEmptyGridCount(MergeBoardEnum boardId)
	{
		return 0;
	}

	public int GetBagGridCount(MergeBoardEnum boardId)
	{
		return 0;
	}

	public int GetBuildBagGridCount(MergeBoardEnum boardId)
	{
		return 0;
	}

	public int GetLeftBagEmptyGridCount(MergeBoardEnum boardId)
	{
		return 0;
	}

	public int GetLeftBuildBagEmptyGridCount(MergeBoardEnum boardId)
	{
		return 0;
	}

	public int FindEmptyGridView(int index, MergeBoardEnum boardId, bool ignoreSelf = false)
	{
		return 0;
	}

	public int GetSudokuEmptIndex(int m_index, MergeBoardEnum boardId)
	{
		return 0;
	}

	public int GetBagCount(MergeBoardEnum boardId)
	{
		return 0;
	}

	public int GetBagCapacity(MergeBoardEnum boardId)
	{
		return 0;
	}

	public int GetBuildingBagCapacity(MergeBoardEnum boardId)
	{
		return 0;
	}

	public bool IsBagFull(MergeBoardEnum boardId)
	{
		return false;
	}

	public int GetLeftBagCount(MergeBoardEnum boardId)
	{
		return 0;
	}

	public int GetEmptBoardItemCount(MergeBoardEnum boardId)
	{
		return 0;
	}

	public int GetStorBoardItemCount(MergeBoardEnum boardId)
	{
		return 0;
	}

	public StorageMergeItem GetBagItem(int index, MergeBoardEnum boardId)
	{
		return null;
	}

	public void AddBagItem(StorageMergeItem storageMergeItem, MergeBoardEnum boardId)
	{
	}

	public int GetBuildingBagCount(MergeBoardEnum boardId)
	{
		return 0;
	}

	public StorageMergeItem GetBuildingBagItem(int index, MergeBoardEnum boardId)
	{
		return null;
	}

	public void AddBuildingBagItem(StorageMergeItem storageMergeItem, MergeBoardEnum boardId)
	{
	}

	[IDTag(0)]
	public void RemoveBagItem(int index, out StorageMergeItem result, MergeBoardEnum boardId)
	{
		result = null;
	}

	[IDTag(0)]
	public void RemoveBuildingBagItem(int index, out StorageMergeItem result, MergeBoardEnum boardId)
	{
		result = null;
	}

	[IDTag(1)]
	public void RemoveBagItem(int index, MergeBoardEnum boardId)
	{
	}

	[IDTag(1)]
	public void RemoveBuildingBagItem(int index, MergeBoardEnum boardId)
	{
	}

	public void UseBgItem(int index, int emptyIndex, MergeBoardEnum boardId)
	{
	}

	public void UseBuildingBgItem(int index, int emptyIndex, MergeBoardEnum boardId)
	{
	}

	public void SendUseBagBi(int id)
	{
	}

	public void SendMovetoBagBi(int id)
	{
	}

	public int GetRewardCount(MergeBoardEnum boardId)
	{
		return 0;
	}

	public StorageMergeItem GetRewardItem(int index, MergeBoardEnum boardId)
	{
		return null;
	}

	public void AddRewardItem(StorageMergeItem storageMergeItem, MergeBoardEnum boardId, int cout = 1, bool inFirst = false)
	{
	}

	[IDTag(0)]
	public void RemoveRewardItem(int index, out StorageMergeItem result, MergeBoardEnum boardId, bool isSendEvent = true)
	{
		result = null;
	}

	[IDTag(1)]
	public void RemoveRewardItem(int index, MergeBoardEnum boardId)
	{
	}

	public bool IsShowedItemId(int id)
	{
		return false;
	}

	public bool IsItemGetGalleryAwards(int id)
	{
		return false;
	}

	public void RecordItemGalleryAwards(int id)
	{
	}

	public void RecordGetItem(StorageMergeItem item, int index = -1)
	{
	}

	public void InitRecordGetItems(MergeBoardEnum boardId)
	{
	}

	public bool IsUnLockMergeItem(int id)
	{
		return false;
	}

	public void RemoveUnLockMergeItem(int id)
	{
	}

	public void AddUnlockMergeItem(int id)
	{
	}

	public bool IsGalleryShowRedPoint()
	{
		return false;
	}

	public void AddShowedItemId(int id)
	{
	}

	public bool IsUnlockLines(int mergeLineID)
	{
		return false;
	}

	public int GetMaxOutputAmount(TableMergeItem itemConfig)
	{
		return 0;
	}

	public int GetOutputAmount(TableMergeItem itemConfig)
	{
		return 0;
	}

	public int GetTimeMaxOutputAmount(TableMergeItem itemConfig)
	{
		return 0;
	}

	public int GetTimeOutputAmount(TableMergeItem itemConfig)
	{
		return 0;
	}

	public void RefreshMaxStoreCount(int id, int index, TableMergeItem itemConfig, MergeBoardEnum boardId)
	{
	}

	public void RefreshInCdTime(int id, int index, MergeBoardEnum boardId)
	{
	}

	public void SpeedUpOneItem(StorageMergeItem item, ulong time)
	{
	}

	public void SpeedUpAllItem(ulong time, MergeBoardEnum boardId)
	{
	}

	[IDTag(0)]
	public void SetOrginalStoreCount(int id, int index, MergeBoardEnum boardId, int extra = 0)
	{
	}

	[IDTag(2)]
	public void SetOrginalStoreCount(StorageMergeItem item, bool isUseRv = false)
	{
	}

	public void SetTimeProductStoreCount(StorageMergeItem item, bool isUseRv = false)
	{
	}

	[IDTag(1)]
	public void SetOrginalStoreCount(StorageMergeItem item, RefreshItemSource source, MergeBoardEnum boardId)
	{
	}

	public bool IsInStoreCd(int id, int index, MergeBoardEnum boardId)
	{
		return false;
	}

	public void AddMergeCount(int id, int newId, MergeBoardEnum boardId)
	{
	}

	public int GetMergeCount(MergeBoardEnum boardId)
	{
		return 0;
	}

	public void AddFinishTaskCount(MergeBoardEnum boardId)
	{
	}

	public int GetFinishTaskCount(MergeBoardEnum boardId)
	{
		return 0;
	}

	public void AddDecoCount(MergeBoardEnum boardId)
	{
	}

	public int GetDecoCount(MergeBoardEnum boardId)
	{
		return 0;
	}

	public void ClearMergeCount(int id, MergeBoardEnum boardId)
	{
	}

	public void PauseAllCdTime(MergeBoardEnum boardId)
	{
	}

	public void ResumAllCdTime(MergeBoardEnum boardId)
	{
	}

	public void PauseCd(int index, MergeBoardEnum boardId)
	{
	}

	public void ResumeCd(int index, MergeBoardEnum boardId)
	{
	}

	public bool IsCanSold(int id)
	{
		return false;
	}

	public void FindAllProductBoardItem(MergeBoardEnum boardId)
	{
	}

	public void ReMapBoardOldId(MergeBoardEnum boardId)
	{
	}

	public void ReMapBagOldId(MergeBoardEnum boardId)
	{
	}

	public void ReMapTempStorageBagOldId(MergeBoardEnum boardId)
	{
	}

	public void RemoveDeleteStoreageId()
	{
	}

	public int GetBoardItemCountByType(MergeItemStatus status, MergeBoardEnum boardId)
	{
		return 0;
	}

	public void ClearMerBoard(MergeBoardEnum boardId)
	{
	}

	public static int LeftEmptyGridCount(MergeBoardEnum boardId)
	{
		return 0;
	}

	public static int LeftBagEmptyGridCount(MergeBoardEnum boardId)
	{
		return 0;
	}

	public static int LeftBuildBagEmptyGridCount(MergeBoardEnum boardId)
	{
		return 0;
	}

	public static int BagGridCount(MergeBoardEnum boardId)
	{
		return 0;
	}

	public static int BuildBagGridCount(MergeBoardEnum boardId)
	{
		return 0;
	}

	public new void OnDestroy()
	{
	}

	public Dictionary<int, int> GetCodeCountMap(bool includeBoard, bool includeCache, bool includeBag, bool ignoreOrder = false)
	{
		return null;
	}

	public Dictionary<int, List<int>> GetCodeLevelMap(bool isDescending, bool includeBoard, bool includeCache, bool includeBag, int filterId = -1)
	{
		return null;
	}

	public bool IsEatAllFood(StorageMergeItem storageMergeItem)
	{
		return false;
	}

	public void BuildEat(StorageMergeItem storageMergeItem, int mergeId)
	{
	}

	public float GetEatProgress(StorageMergeItem storageMergeItem, TableMergeItem mergeItem)
	{
		return 0f;
	}

	public bool IsBuildEat(StorageMergeItem storageMergeItem, int mergeId)
	{
		return false;
	}

	public void SendMergeBoardBI(MergeBoardEnum boardId)
	{
	}

	public MergeBoardDataStruct GetMergeBoardDataStruct(MergeBoardEnum boardId)
	{
		return null;
	}

	public void ResetBuilding(MergeBoardEnum boardId)
	{
	}

	public void AddUnlimitedProductTime(long time, MergeBoardEnum boardId)
	{
	}

	public long UnlimitedProductLeftTime(MergeBoardEnum boardId)
	{
		return 0L;
	}

	public bool IsInUnlimitedProduct(MergeBoardEnum boardId)
	{
		return false;
	}

	public string GetUnlimitedProductTimeStr(MergeBoardEnum boardId)
	{
		return null;
	}

	public bool RemoveBoardItems(MergeBoardEnum boardId, List<int> items, bool isSendEvent = true, string sources = "")
	{
		return false;
	}

	public int[] GetProduceCost(TableMergeItem config)
	{
		return null;
	}

	public void AdaptBoard()
	{
	}

	public void RemoveBoard(MergeBoardEnum boardId)
	{
	}

	public bool HasIceCube(MergeBoardEnum boardId)
	{
		return false;
	}

	[IDTag(1)]
	public bool IsIceCube(int index, MergeBoardEnum boardId)
	{
		return false;
	}

	[IDTag(0)]
	public bool IsIceCube(StorageMergeItem itemStorage)
	{
		return false;
	}

	public int GetIceCubeLeftTime(int index, MergeBoardEnum boardId)
	{
		return 0;
	}

	public float GetIceCubeLeftTimePercent(int index, MergeBoardEnum boardId)
	{
		return 0f;
	}

	public void RecordIceCubeInfo(int id)
	{
	}

	public bool IsProductIceCubeInCd()
	{
		return false;
	}

	public void _003C_003EiFixBaseProxy_InitImmediately()
	{
	}
}
