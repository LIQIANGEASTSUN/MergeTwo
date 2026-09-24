using System;
using System.Collections.Generic;
using fat.gamekitdata;
using fat.rawdata;

namespace FAT.Merge
{
	public class GameMergeEnv : IMergeEnvironment
	{
		bool IMergeEnvironment.IsFeatureEnable(MergeFeatureType feature)
		{
			return false;
		}

		long IMergeEnvironment.GetTimestamp()
		{
			return 0L;
		}

		void IMergeEnvironment.OnItemShowInView(int tid)
		{
		}

		IDictionary<int, int> IMergeEnvironment.GetFixedCategoryOutputDB()
		{
			return null;
		}

		IDictionary<int, int> IMergeEnvironment.GetFixedItemOutputDB()
		{
			return null;
		}

		Global IMergeEnvironment.GetGlobalConfig()
		{
			return null;
		}

		ObjBasic IMergeEnvironment.GetItemConfig(int id)
		{
			return null;
		}

		ObjMergeItem IMergeEnvironment.GetItemMergeConfig(int id)
		{
			return null;
		}

		ItemComConfig IMergeEnvironment.GetItemComConfig(int id)
		{
			return null;
		}

		MergeItemCategory IMergeEnvironment.GetCategoryByItem(int id)
		{
			return null;
		}

		MergeFixedOutput IMergeEnvironment.GetFixedOutputConfig(int categoryId)
		{
			return null;
		}

		MergeFixedItem IMergeEnvironment.GetFixedOutputByItemConfig(int itemId)
		{
			return null;
		}

		MergeRuledOutput IMergeEnvironment.GetRuledOutputConfig(int itemId)
		{
			return null;
		}

		MergeRule IMergeEnvironment.GetMergeRuleByItem(int tid)
		{
			return null;
		}

		fat.rawdata.MergeGrid IMergeEnvironment.GetMergeGridConfig(int tid)
		{
			return null;
		}

		bool IMergeEnvironment.TryGetDropLimitItemConfig(int tid, out DropLimitItem cfg)
		{
			cfg = null;
			return false;
		}

		RewardCommitData IMergeEnvironment.CollectBonus(int bonusId, int bonusCount)
		{
			return null;
		}

		RewardCommitData IMergeEnvironment.SellItem(int id, int count)
		{
			return null;
		}

		bool IMergeEnvironment.CanUseEnergy(int cost)
		{
			return false;
		}

		bool IMergeEnvironment.UseEnergy(int energy, ReasonString reason)
		{
			return false;
		}

		void IMergeEnvironment.SwitchEnergyBoostState()
		{
		}

		bool IMergeEnvironment.IsInEnergyBoost()
		{
			return false;
		}

		EnergyBoostState IMergeEnvironment.GetEnergyBoostState()
		{
			return default(EnergyBoostState);
		}

		int IMergeEnvironment.GetNextLevelItemId(int curItemId, int nextLevel)
		{
			return 0;
		}

		bool IMergeEnvironment.CanUseCoin(int cost)
		{
			return false;
		}

		void IMergeEnvironment.UseCoin(int coin, ReasonString reason)
		{
		}

		bool IMergeEnvironment.CanUseGem(int cost)
		{
			return false;
		}

		void IMergeEnvironment.UseGem(int gem, ReasonString reason, Action whenSuccess, bool dynamicPrice)
		{
		}

		bool IMergeEnvironment.IsOrderItem(int id)
		{
			return false;
		}

		int IMergeEnvironment.GetBoardLevel()
		{
			return 0;
		}

		bool IMergeEnvironment.TryIncMergeTestSpawnBubbleCount(int tid)
		{
			return false;
		}

		bool IMergeEnvironment.IsBubbleGuidePassed()
		{
			return false;
		}

		bool IMergeEnvironment.IsSpeedupGuidePassed()
		{
			return false;
		}

		bool IMergeEnvironment.CanMergeProduceCoin()
		{
			return false;
		}

		MergeMixCost IMergeEnvironment.GetMergeMixCostConfig(int costId)
		{
			return null;
		}

		MergeTapCost IMergeEnvironment.GetMergeTapCostConfig(int costId)
		{
			return null;
		}

		MergeTapCost IMergeEnvironment.FindPossibleCost(IList<int> costIdList)
		{
			return null;
		}

		MergeTapCost IMergeEnvironment.FindCostByItem(IList<int> costIdList, Item item)
		{
			return null;
		}

		OrderBoxDetail IMergeEnvironment.GetOrderBoxDetailConfig(int boxId)
		{
			return null;
		}

		int IMergeEnvironment.GetMergeLevel()
		{
			return 0;
		}

		MergeGlobal IMergeEnvironment.GetGlobalData()
		{
			return null;
		}

		int IMergeEnvironment.GetPlayerTestGroup(int groupId)
		{
			return 0;
		}

		void IMergeEnvironment.FillGlobalMergeBonusHandlers(List<IMergeBonusHandler> container)
		{
		}

		void IMergeEnvironment.FillGlobalSpawnBonusHandlers(List<ISpawnBonusHandler> container)
		{
		}

		void IMergeEnvironment.FillGlobalDisposeBonusHandlers(List<IDisposeBonusHandler> container)
		{
		}

		void IMergeEnvironment.NotifyItemMerge(Item newItem)
		{
		}

		void IMergeEnvironment.NotifyItemUse(Item target, ItemComponentType usedComponent)
		{
		}

		void IMergeEnvironment.NotifyItemEvent(Item newItem, ItemEventType ev)
		{
		}

		int IMergeEnvironment.CalculatePostCardPercentage(Item item)
		{
			return 0;
		}
	}
}
