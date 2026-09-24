using System.Collections.Generic;
using MergeEngine.Configuration.Definitions;
using MergeEngine.Configuration.JsonConverters.RewardFactories;
using MergeEngine.Model;
using Merger.Boosters.Declarations.Enums;
using Merger.Rewards.Interfaces;
using Merger.Rewards.Interfaces.Datas;
using Merger.Rewards.Models.Datas.Types;

namespace Merger.Rewards.Constants
{
	public static class RewardTypesConstants
	{
		public static readonly IRewardType Default;

		public static readonly IRewardType Booster;

		public static readonly IRewardType SurpriseBoxBooster;

		public static readonly IRewardType TimeTwisterBooster;

		public static readonly IRewardType CardsBoomBooster;

		public static readonly IRewardType Chest;

		public static readonly IRewardType ImmediateChest;

		public static readonly IRewardType GachaChest;

		public static readonly IRewardType Item;

		public static readonly IRewardType Pack;

		public static readonly IRewardType VanityDecoration;

		public static readonly IRewardType SinglePortal;

		public static readonly IRewardType VoucherPortal;

		public static readonly IRewardType SmiliesPortal;

		public static readonly IRewardType AccumulationPortal;

		public static readonly IRewardType PassKeyPortal;

		public static readonly IRewardType ScrollKeyPortal;

		public static readonly IRewardType GenericTokens;

		public static readonly IRewardType ItemToOrderRelation;

		public static readonly IRewardType PointsAccumulation;

		public static readonly IRewardType ResourceDefault;

		public static readonly IRewardType ResourceEventEnergy;

		public static readonly IRewardType ResourceEnergy;

		public static readonly IRewardType ResourceEventXP;

		public static readonly IRewardType ResourceXP;

		public static readonly IRewardType ResourceSmiley;

		public static readonly IRewardType ResourceHc;

		public static readonly IRewardType ResourceSC;

		public static readonly IRewardType ResourceVanityIslandToken;

		public static readonly IRewardType ResourcePicks;

		public static readonly IRewardType ResourceTool1;

		public static readonly IRewardType ResourceTool2;

		public static readonly IRewardType ResourceTool3;

		public static readonly IRewardType ResourceTool4;

		public static readonly IRewardType ResourceTool5;

		public static readonly IRewardType ResourceTool6;

		public static readonly IRewardType ResourceTool7;

		public static readonly IRewardType ResourceTool8;

		public static readonly IRewardType ResourceTool9;

		public static readonly IRewardType ResourceTool10;

		public static readonly IRewardType Frame;

		public static readonly IRewardType Conditional;

		public static readonly IRewardType Wheel;

		public static readonly IRewardType BunchOfItems;

		public static readonly IRewardType BunchOfItems_Reward;

		public static readonly IRewardType BunchOfItems_Items;

		public static readonly IRewardType BunchOfItems_CollectScreenItems;

		public static readonly IRewardType BunchOfItems_SmiliesExtraBonusClaim;

		public static readonly IRewardType Cloche;

		public static readonly IRewardType BubbleBlasters;

		public static readonly RewardTypeWIthSubType<int> BubbleBlasterTier1;

		public static readonly RewardTypeWIthSubType<int> BubbleBlasterTier2;

		public static readonly RewardTypeWIthSubType<int> BubbleBlasterTier3;

		public static readonly RewardTypeWIthSubType<int> BubbleBlasterTier4;

		public static readonly RewardTypeWIthSubType<int>[] AllBubbleBlasterTiers;

		public static readonly IRewardType[] AllTools;

		public static readonly IRewardType[] BoardEventResources;

		public static readonly IRewardType[] AllItems;

		public static readonly IRewardType[] FloatingMergeMetaItems;

		public static readonly IRewardType[] FloatingMergeMetaResources;

		public static readonly IRewardType[] TopHudResources;

		public static readonly IRewardType[] Portals;

		public static readonly IRewardType[] AllResources;

		public static readonly IRewardType[] MergeButtonResources;

		public static readonly IRewardType[] RewardPositionsSupportedItems;

		public static readonly HashSet<string> ResourcesStringTypes;

		public static readonly HashSet<IRewardType> BoosterTypes;

		public static readonly string[] BoosterTypesWithoutDedicatedCollectScreen;

		public static readonly ResourceSource[] AllSources;

		public static readonly HashSet<string> AllItemRewardsTypes;

		public static readonly IRewardType[] Chests;

		public static IRewardType GetRewardType(this PlayerResourceEnum resourceEnum)
		{
			return null;
		}

		public static void TryGetChestType(SerializedRewardData data, out IRewardType rewardType)
		{
			rewardType = null;
		}

		public static IRewardType GetBoosterType(BoosterType boosterType)
		{
			return null;
		}

		public static bool AllBoostersPredicate(IRewardViewData rewardViewData)
		{
			return false;
		}
	}
}
