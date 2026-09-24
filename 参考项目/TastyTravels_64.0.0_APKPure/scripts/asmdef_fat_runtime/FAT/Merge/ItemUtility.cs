using System;
using System.Collections.Generic;
using EL;
using fat.rawdata;

namespace FAT.Merge
{
	public static class ItemUtility
	{
		public enum ItemSpeedUpType
		{
			NeedCoin = 0,
			FreeSpeedUp = 1,
			FreeRecharge = 2,
			FreeBubble = 3
		}

		public static UserMergeOperation sLastUserItemOper;

		public static UserMergeOperation lastUserItemOper => default(UserMergeOperation);

		public static bool StackToTarget(Item src, Item dst)
		{
			return false;
		}

		public static bool CanStack(Item src, Item dst)
		{
			return false;
		}

		public static bool CanMerge(Item src, Item dst)
		{
			return false;
		}

		public static bool MayHaveMergeResult(ItemMergeComponent comSrc, int srcTid, ItemMergeComponent comDst, int dstTid, ItemSkillComponent skillSrc, ItemSkillComponent skillDst)
		{
			return false;
		}

		public static int GetGridMatchId(int gridTid, int itemTid)
		{
			return 0;
		}

		public static bool CanItemInGridByTid(int gridTid, int itemTid)
		{
			return false;
		}

		public static bool CanSourceOutputInGrid(int gridId, ItemComponentBase comp)
		{
			return false;
		}

		public static bool IsItemInNormalState(Item item)
		{
			return false;
		}

		public static MergeState GetMergeState(Item src, Item dst)
		{
			return default(MergeState);
		}

		public static bool CanUnlock(Item item)
		{
			return false;
		}

		public static void SetItemShowInCategory(int tid)
		{
		}

		public static bool CheckSourceCanJumpCD(Item item)
		{
			return false;
		}

		public static bool CheckSourceCanTokenMulti(ItemTokenMultiComponent tokenMultiComp, Item checkItem)
		{
			return false;
		}

		public static bool CheckTokenCanMulti(ItemTokenMultiComponent tokenMultiComp, int checkTokenId)
		{
			return false;
		}

		public static bool CanConsumeAny(Item itemA, Item itemB, out Item consume, out Item dst)
		{
			consume = null;
			dst = null;
			return false;
		}

		public static bool CanConsume(Item consume, Item dst)
		{
			return false;
		}

		public static bool CanMix(Item consume, Item dst)
		{
			return false;
		}

		public static bool CanFeed(Item food, Item dst)
		{
			return false;
		}

		public static ItemUseState FeedItem(Item item, Item food)
		{
			return default(ItemUseState);
		}

		public static bool _FeedItemImp(Item item, Item food, ref ItemUseState state)
		{
			return false;
		}

		public static bool IsUseForTarget(Item item)
		{
			return false;
		}

		public static bool CanUseForTarget(Item item, Item target, out ItemSkillState state)
		{
			state = default(ItemSkillState);
			return false;
		}

		public static bool UseForTarget(Item item, Item target)
		{
			return false;
		}

		public static bool CanUseInTracer(Item item)
		{
			return false;
		}

		public static bool CanUseInOrder(Item item)
		{
			return false;
		}

		public static bool CanUseInOrderAllowInventory(Item item)
		{
			return false;
		}

		public static bool IsNeededByTopBarOrder(int tid)
		{
			return false;
		}

		public static int GetItemLevel(int itemId)
		{
			return 0;
		}

		public static bool IsExpItem(int tid)
		{
			return false;
		}

		public static bool IsCoinItem(int tid)
		{
			return false;
		}

		public static bool IsLoginGiftItem(Item item)
		{
			return false;
		}

		public static int GetSellCoin(int tid)
		{
			return 0;
		}

		public static (int, int) GetSellReward(int tid)
		{
			return default((int, int));
		}

		public static bool IsItemMaxLevel(int tid)
		{
			return false;
		}

		public static int GetNextItem(int itemId)
		{
			return 0;
		}

		public static int GetMergeItem(int itemId)
		{
			return 0;
		}

		public static void GetBoxOutputs(int id, List<int> container)
		{
		}

		public static void GetEatSourceOutputs(int id, Dictionary<int, int> container)
		{
		}

		public static void GetClickSourceOutputs(int id, Dictionary<int, int> container)
		{
		}

		public static void GetAutoSourceOutputs(int id, Dictionary<int, int> container)
		{
		}

		public static bool IsCardPack(int tid)
		{
			return false;
		}

		public static bool IsMergeItem(int tid)
		{
			return false;
		}

		public static bool HasBubbleComponent(Item item)
		{
			return false;
		}

		public static bool IsBubbleItem(Item item)
		{
			return false;
		}

		public static bool IsFrozenItem(Item item)
		{
			return false;
		}

		public static bool IsChest(Item item)
		{
			return false;
		}

		public static bool IsClickSourceInCD(ItemClickSourceComponent comp)
		{
			return false;
		}

		public static bool IsClickSourceReviving(ItemClickSourceComponent comp)
		{
			return false;
		}

		public static int GetUnfrozenPrice(Item item)
		{
			return 0;
		}

		public static int GetBubbleDeadItemId(ItemBubbleType type)
		{
			return 0;
		}

		public static bool CanItemInInventory(Item item)
		{
			return false;
		}

		public static string GetItemShortName(int tid)
		{
			return null;
		}

		public static SfxValue GetSourceSpawnSound(int tid)
		{
			return default(SfxValue);
		}

		public static string GetItemLongName(int tid)
		{
			return null;
		}

		public static string GetItemRuntimeShortName(Item item)
		{
			return null;
		}

		public static string GetItemLevelStr(int tid)
		{
			return null;
		}

		public static string _StringJoin(string a, string b)
		{
			return null;
		}

		public static bool TapCostItemList(ObjMergeItem config, List<int> displayItems)
		{
			return false;
		}

		public static string GetBoardItemInfo(Item item)
		{
			return null;
		}

		public static void _TryAddToolCount(Dictionary<int, int> dict, int key, int val)
		{
		}

		public static int _SortCostInfo(CostInfo a, CostInfo b)
		{
			return 0;
		}

		public static bool TrySpawnTool(Item source, out int toolId, out int lackScore)
		{
			toolId = default(int);
			lackScore = default(int);
			return false;
		}

		public static void ProcessItemUseState(Item item, ItemUseState state)
		{
		}

		public static ItemUseState UseItem(Item item, UserMergeOperation oper)
		{
			return default(ItemUseState);
		}

		public static bool _UseItemImp(Item item, UserMergeOperation oper, ref ItemUseState state)
		{
			return false;
		}

		public static bool IsUseChestDetailView(int tid)
		{
			return false;
		}

		public static bool IsFromAuto(int id)
		{
			return false;
		}

		public static int GetItemEnergyPerUse(Item item)
		{
			return 0;
		}

		public static bool IsItemReadyToUse(Item item)
		{
			return false;
		}

		public static bool IsSupportSpeedup(int tid)
		{
			return false;
		}

		public static bool CanUseGlobalFreeSpeedup(int tid)
		{
			return false;
		}

		public static bool CanUseGlobalFreeRecharge(int tid)
		{
			return false;
		}

		public static int CalcCostBySeconds(int sec)
		{
			return 0;
		}

		public static int CalcSpeedUpCost(ItemComponentBase com)
		{
			return 0;
		}

		public static bool TryGetItemSpeedUpInfo(Item item, out ItemComponentBase component, out ItemSpeedUpType operation, out int coinCost)
		{
			component = null;
			operation = default(ItemSpeedUpType);
			coinCost = default(int);
			return false;
		}

		public static long GetGeneratorCooldownRemainSeconds(Item item)
		{
			return 0L;
		}

		public static void TrySpeedUpEmptyItem(Item item, Action whenSuccess)
		{
		}

		public static long GetItemEmptyWaitMilli(Item item)
		{
			return 0L;
		}

		public static int GetItemUsableCount(Item item)
		{
			return 0;
		}

		public static string _GetItemBasicDesc(int tid)
		{
			return null;
		}

		public static string FormatMergeItemDesc(int tid, string desc, int count = 1)
		{
			return null;
		}

		public static int _GetUnfrozenPrice(int tid)
		{
			return 0;
		}

		public static bool IsDropLimitItem(int tid, out int convertId)
		{
			convertId = default(int);
			return false;
		}

		public static void CollectRewardItem(Item item, Dictionary<int, int> itemIdMap, Dictionary<int, int> rewardMap)
		{
		}

		public static string ConvertItemDictToString_Id_Num_Level(Dictionary<int, int> dict)
		{
			return null;
		}
	}
}
