using System;
using MergeEngine.Configuration.JsonConverters.RewardFactories;
using MergeEngine.Model.Configuration;
using Merger.DynamicMergeItems;
using Merger.Rewards.Abstraction;
using Merger.Rewards.Interfaces.Datas;
using Zenject;

namespace Merger.MergeItems.Rewards
{
	public class MergeItemRewardCreator : BaseRewardCreator
	{
		[Inject]
		[NonSerialized]
		public IMergingConfigurationModel _mergingConfigurationModel;

		public override string RewardTypeInJsons { get; }

		public override IRewardViewData CreateReward(SerializedJsonReward serializedReward)
		{
			return null;
		}

		public override bool CanCreate(SerializedJsonReward serializedReward)
		{
			return false;
		}

		public static DynamicMergeItemConfig GetDynamicMergeItemConfig(SerializedJsonReward serializedReward)
		{
			return null;
		}
	}
}
