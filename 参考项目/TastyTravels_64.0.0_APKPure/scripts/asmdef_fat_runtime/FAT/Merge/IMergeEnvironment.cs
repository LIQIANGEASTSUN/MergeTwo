using System;
using System.Collections.Generic;
using fat.gamekitdata;
using fat.rawdata;

namespace FAT.Merge
{
	public interface IMergeEnvironment
	{
		bool CanInventoryItemUseForOrder => false;

		long GetTimestamp();

		bool IsFeatureEnable(MergeFeatureType feature);

		bool IsOrderItem(int id);

		IDictionary<int, int> GetFixedItemOutputDB();

		IDictionary<int, int> GetFixedCategoryOutputDB();

		void OnItemShowInView(int tid);

		Global GetGlobalConfig();

		ObjBasic GetItemConfig(int id);

		ObjMergeItem GetItemMergeConfig(int id);

		ItemComConfig GetItemComConfig(int id);

		MergeItemCategory GetCategoryByItem(int id);

		MergeFixedOutput GetFixedOutputConfig(int categoryId);

		MergeFixedItem GetFixedOutputByItemConfig(int itemId);

		MergeRuledOutput GetRuledOutputConfig(int itemId);

		MergeRule GetMergeRuleByItem(int tid);

		fat.rawdata.MergeGrid GetMergeGridConfig(int tid);

		bool TryGetDropLimitItemConfig(int tid, out DropLimitItem cfg);

		RewardCommitData CollectBonus(int bonusId, int bonusCount);

		RewardCommitData SellItem(int id, int count);

		bool CanUseEnergy(int cost);

		bool UseEnergy(int energy, ReasonString reason);

		void SwitchEnergyBoostState();

		bool IsInEnergyBoost();

		EnergyBoostState GetEnergyBoostState();

		int GetNextLevelItemId(int curItemId, int nextLevel);

		bool CanUseGem(int cost);

		void UseGem(int gem, ReasonString reason, Action whenSuccess, bool dynamicPrice = false);

		bool CanUseCoin(int cost);

		void UseCoin(int coin, ReasonString reason);

		int GetBoardLevel();

		bool TryIncMergeTestSpawnBubbleCount(int tid);

		bool IsBubbleGuidePassed();

		bool IsSpeedupGuidePassed();

		bool CanMergeProduceCoin();

		MergeMixCost GetMergeMixCostConfig(int costId);

		MergeTapCost GetMergeTapCostConfig(int costId);

		MergeTapCost FindPossibleCost(IList<int> costIdList);

		MergeTapCost FindCostByItem(IList<int> costIdList, Item item);

		OrderBoxDetail GetOrderBoxDetailConfig(int boxId);

		int GetMergeLevel();

		MergeGlobal GetGlobalData();

		int GetPlayerTestGroup(int groupId);

		void FillGlobalMergeBonusHandlers(List<IMergeBonusHandler> container);

		void FillGlobalSpawnBonusHandlers(List<ISpawnBonusHandler> container);

		void FillGlobalDisposeBonusHandlers(List<IDisposeBonusHandler> container);

		void NotifyItemMerge(Item newItem);

		void NotifyItemUse(Item newItem, ItemComponentType usedComponent);

		void NotifyItemEvent(Item newItem, ItemEventType ev);

		int CalculatePostCardPercentage(Item item);
	}
}
