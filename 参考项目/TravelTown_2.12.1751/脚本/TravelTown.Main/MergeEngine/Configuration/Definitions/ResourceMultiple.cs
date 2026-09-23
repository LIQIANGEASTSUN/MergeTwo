using GameCore.Configuration.Definitions;
using MergeEngine.Model;
using Merger.Game.Views.Components.Orders.Rewards;
using Merger.Rewards.Interfaces;
using Merger.Rewards.Interfaces.Datas;
using Newtonsoft.Json;
using UnityEngine;
using UnityEngine.AddressableAssets;

namespace MergeEngine.Configuration.Definitions
{
	public class ResourceMultiple : BaseReward, IPrioritizedOrderReward
	{
		public PlayerResourceEnum Resource { get; }

		public virtual IRewardType ResourceType { get; set; }

		int IPrioritizedOrderReward.Priority => 0;

		public override string ConfigurationId => null;

		public override string Name => null;

		public override AssetReferenceT<Sprite> SpriteReference => null;

		public override bool ShouldHideIButton => false;

		public override bool ShowInfoButtonAfterContentLoad => false;

		public override bool HasCollectScreen => false;

		public ResourceMultiple(PlayerResourceEnum resource, RewardAmount rewardAmount, RewardDestination destination)
			: base(null, null, null)
		{
		}

		public ResourceMultiple(IRewardType rewardType, RewardAmount rewardAmount, RewardDestination destination)
			: base(null, null, null)
		{
		}

		public ResourceMultiple(PlayerResourceEnum resource, IRewardType rewardType, RewardAmount rewardAmount, RewardDestination destination)
			: base(null, null, null)
		{
		}

		[JsonConstructor]
		public ResourceMultiple(PlayerResourceEnum resource, int amount, bool shouldBeHidden = false)
			: base(null, null, null)
		{
		}

		public override IRewardViewData Clone()
		{
			return null;
		}

		public override string GetExtraLogData()
		{
			return null;
		}

		public bool IsTool()
		{
			return false;
		}

		public override int GetHashCode()
		{
			return 0;
		}
	}
}
