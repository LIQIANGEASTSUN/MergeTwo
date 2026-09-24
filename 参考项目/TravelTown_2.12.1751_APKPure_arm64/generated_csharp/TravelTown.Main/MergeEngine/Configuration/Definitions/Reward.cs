using System;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using GameCore.Configuration.Definitions;
using MergeEngine.Configuration.Definitions.WeakReferences.References;
using MergeEngine.Service.GenericTokens;
using Merger.BubbleBlaster.Rewards;
using Merger.Chests.Configurations;
using Merger.Frames.Configuration;
using Merger.PortalItemReward.Data;
using Merger.Rewards.Interfaces;
using Merger.Rewards.Interfaces.Datas;
using Merger.Vanity.Configuration;
using Merger.Wheels;
using Newtonsoft.Json;

namespace MergeEngine.Configuration.Definitions
{
	[Serializable]
	public class Reward
	{
		public bool IsWeightedContainer;

		[Obsolete("UseOriginalOrderRewards")]
		public List<ResourceMultiple> Resources => null;

		[Obsolete("UseOriginalOrderRewards")]
		public List<ItemMultiple> Items => null;

		[Obsolete("UseOriginalOrderRewards")]
		public List<BoosterMultiple> Boosters => null;

		[Obsolete("UseOriginalOrderRewards")]
		public List<CardsPackMultiple> Packs => null;

		[Obsolete("UseOriginalOrderRewards")]
		public List<VanityRewardItemMultiple> VanityItems => null;

		[Obsolete("UseOriginalOrderRewards")]
		public List<ChestMultiple> Chests => null;

		[Obsolete("UseOriginalOrderRewards")]
		public List<FrameMultiple> Frames => null;

		[Obsolete("UseOriginalOrderRewards")]
		public List<PortalItem> PortalItems => null;

		public List<ConditionalRewardMultiple> ConditionalRewards { get; }

		[Obsolete("UseOriginalOrderRewards")]
		public List<GenericTokenMultiple> GenericTokens => null;

		[Obsolete("UseOriginalOrderRewards")]
		public List<WheelMultiple> Wheels => null;

		[Obsolete("UseOriginalOrderRewards")]
		public List<BubbleBlasterMultiple> BubbleBlasters => null;

		[JsonIgnore]
		[Obsolete("UseCount")]
		public int ResourcesCount => 0;

		[JsonIgnore]
		[Obsolete("UseCount")]
		public int BoostersCount => 0;

		[JsonIgnore]
		[Obsolete("UseCount")]
		public int FramesCount => 0;

		[Obsolete("UseCount")]
		[JsonIgnore]
		public int VanityItemsCount => 0;

		[JsonIgnore]
		[Obsolete("UseCount")]
		public int PacksCount => 0;

		[JsonIgnore]
		[Obsolete("UseCount")]
		public int ItemsCount => 0;

		[JsonIgnore]
		public bool HasResources => false;

		[JsonIgnore]
		public bool HasGenericTokens => false;

		[JsonIgnore]
		public bool HasBubbleBlasters => false;

		[JsonIgnore]
		public bool HasMergeItems => false;

		[JsonIgnore]
		public bool HasBoosters => false;

		[JsonIgnore]
		public bool HasPacks => false;

		[JsonIgnore]
		public bool HasChests => false;

		[JsonIgnore]
		public bool HasFrames => false;

		[JsonIgnore]
		public bool HasBunchOfItems => false;

		[JsonIgnore]
		public bool HasPendable => false;

		[JsonIgnore]
		public bool HasVanityItems => false;

		[JsonIgnore]
		public bool HasAnyItems => false;

		[JsonIgnore]
		public bool ContainsReward => false;

		[JsonIgnore]
		public bool HasPortalItems => false;

		[JsonIgnore]
		public bool HasWheels => false;

		[JsonIgnore]
		public int UnpendingRewardsCount => 0;

		[JsonIgnore]
		public List<IRewardViewData> OriginalOrderRewards { get; }

		[JsonIgnore]
		public List<IRewardAnalyticsData> RewardAnalyticsDatas => null;

		[JsonIgnore]
		public List<IRewardViewData> AllItemRewards => null;

		[JsonIgnore]
		public int AllRewardsCount => 0;

		[JsonIgnore]
		public int AllRewardsCountWithoutOutOfBoosters => 0;

		public bool IsEmpty => false;

		public Reward(IEnumerable<IRewardViewData> originalOrderRewards, List<ConditionalRewardMultiple> conditionals = null)
		{
		}

		public Reward()
		{
		}

		public Reward Clone()
		{
			return null;
		}

		public Reward CloneExcludingAmountType(RewardAmountType typeToExclude)
		{
			return null;
		}

		public override bool Equals(object obj)
		{
			return false;
		}

		public bool Equals(Reward otherReward)
		{
			return false;
		}

		public bool IsSameOrderRewards(Reward otherReward)
		{
			return false;
		}

		public IReadOnlyList<PortalItem> GetGroupedPortalItems()
		{
			return null;
		}

		public List<TMultiple> EnrichMultipleWithConditionals<TMultiple>(List<TMultiple> multipleList) where TMultiple : IRewardViewData
		{
			return null;
		}

		public void AccumulateRewards(Reward otherReward)
		{
		}

		public bool CompareItemBoxes(Reward otherReward)
		{
			return false;
		}

		public bool AreItemBoxesRefsEqual(List<DynamicMergeItemWeakReference> myRewardItemsRefs, List<DynamicMergeItemWeakReference> otherRewardItemsRefs)
		{
			return false;
		}

		public void FixOriginalRewardsIfMissingChests()
		{
		}

		public Reward RemovePendingBoosters()
		{
			return null;
		}

		public Reward AggregateRewardTypesByConfigurationId()
		{
			return null;
		}

		public List<T> TryAggregate<T>(List<T> source) where T : IRewardViewData
		{
			return null;
		}

		public bool CanAggregate<T>(List<T> source) where T : IRewardViewData
		{
			return false;
		}

		public List<T> Aggregate<T>(List<T> source) where T : IRewardViewData
		{
			return null;
		}

		public Reward CloneAndRemoveEventXP()
		{
			return null;
		}

		public List<TMultiple> FindAllMultiplesByType<TMultiple>(bool isEnrich = true) where TMultiple : IRewardViewData
		{
			return null;
		}

		public void AddViewData(IRewardViewData rewardViewData)
		{
		}

		public void Clear()
		{
		}

		public void AddViewDatas<TMultiple>(ReadOnlyCollection<TMultiple> newDataItems) where TMultiple : IRewardViewData
		{
		}

		public int Count(IRewardType rewardType)
		{
			return 0;
		}

		public int Count(IEnumerable<IRewardType> rewardTypes)
		{
			return 0;
		}

		public bool RequiresTapToClaimPopup()
		{
			return false;
		}
	}
}
