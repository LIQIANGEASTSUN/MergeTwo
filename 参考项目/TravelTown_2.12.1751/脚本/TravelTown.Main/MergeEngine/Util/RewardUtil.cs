using System;
using System.Collections.Generic;
using DG.Tweening;
using GameCore.Configuration.Definitions;
using MergeEngine.Configuration;
using MergeEngine.Configuration.Definitions;
using Merger.Boosters.Declarations.Enums;
using Merger.Chests.Configurations;
using Merger.Game.Views.Popups.Components;
using Merger.PendingRewarders.Data;
using Merger.Rewards.Interfaces.Datas;

namespace MergeEngine.Util
{
	public static class RewardUtil
	{
		public static float DelayBeforeAutoOpenTooltip;

		public static Reward GetMultiplied(Reward reward, float multiplier, RewardMultiplyMode mode)
		{
			return null;
		}

		public static int CountTotalRewardTypeMatches(this IEnumerable<Reward> rewards, IEnumerable<Reward> rewardsToCompare)
		{
			return 0;
		}

		public static int CountRewardTypeMatches(this Reward reward, IEnumerable<Reward> rewardsToCompare)
		{
			return 0;
		}

		public static bool AreMatchingItems(this IReadOnlyCollection<ItemMultiple> itemList1, IReadOnlyCollection<ItemMultiple> itemList2)
		{
			return false;
		}

		public static bool AreMatchingResources(this IReadOnlyCollection<ResourceMultiple> resources1, IReadOnlyCollection<ResourceMultiple> resources2)
		{
			return false;
		}

		public static bool ContainsReward(this List<PendingReward> pending)
		{
			return false;
		}

		public static List<ChestMultiple> GetGroupedChest(this List<Reward> rewards)
		{
			return null;
		}

		public static void SelectChestForAutoOpenTooltip(Reward reward)
		{
		}

		public static BoosterMultiple SelectBoosterForAutoOpenTooltip(IEnumerable<Reward> rewards, BoosterType boosterType)
		{
			return null;
		}

		public static void SelectChestForAutoOpenTooltip(IEnumerable<Reward> rewards)
		{
		}

		public static void SetRewardAnalyticsData(IEnumerable<Reward> rewards, string themeId, string eventId)
		{
		}

		public static void SetPortalAnalyticsData(IEnumerable<Reward> rewards, string eventName = null, string eventId = null)
		{
		}

		public static void SetPortalAnalyticsData(Reward reward, string eventName = null, string eventId = null)
		{
		}

		public static void DeselectChestForAutoOpenTooltip(IEnumerable<Reward> rewards)
		{
		}

		public static void DeselectChestForAutoOpenTooltip(Reward reward)
		{
		}

		public static ChestMultiple TrySelectChestForAutoOpenTooltip(ChestMultiple autoOpenChest, ChestMultiple candidate)
		{
			return null;
		}

		public static Tween TryAutoOpenTooltip(ItemInfoButtonView infoButtonView, IItem reward)
		{
			return null;
		}

		public static Tween TryAutoOpenTooltip(ItemInfoButtonView infoButtonView, BaseReward reward)
		{
			return null;
		}

		public static bool SelectRandomItem<T>(IReadOnlyList<T> collection, Predicate<T> isMatching, Action<T> onMatchFound = null, Action<T> notMatchingCallback = null) where T : class
		{
			return false;
		}

		public static bool ShouldSetRewards(Reward currentReward, Reward newReward)
		{
			return false;
		}

		public static void CombinePacks(List<IRewardViewData> allRewards)
		{
		}

		public static void CombinePortalItems(List<IRewardViewData> allRewards)
		{
		}

		public static List<IRewardViewData> AddAdditionalRewards(List<IRewardViewData> allRewards, Reward additionalReward, bool combinePacksAsOneReward, bool combinePortalsAsOneReward)
		{
			return null;
		}

		public static void SortPendings(this List<PendingReward> receivedPendingRewards, ISet<RewardOrigin> sourcesRequiredToSort)
		{
		}
	}
}
