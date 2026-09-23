using System;
using GameCore.Configuration.Definitions;
using MergeEngine.Configuration.Definitions.WeakReferences.References;
using MergeEngine.ECS.Systems.Triggers;
using Merger.Boosters.Declarations.Definitions.Interfaces;
using Merger.Game.Views.Components.Orders.Rewards;
using Merger.Rewards.Enums;
using Merger.Rewards.Interfaces;
using Merger.Rewards.Interfaces.Datas;
using Merger.Rewards.Models.Datas;
using Newtonsoft.Json;
using UnityEngine;
using UnityEngine.AddressableAssets;

namespace MergeEngine.Configuration.Definitions
{
	[Serializable]
	public class BoosterMultiple : ItemMultipleBase<IBoosterItem, BoosterWeakReference>, IRewardItemViewData, IRewardViewData, IRewardTextRepresented, IRewardTooltipData, IEquatable<IRewardViewData>, IRewardViewPresentable, IRewardData, IPrioritizedOrderReward
	{
		[JsonIgnore]
		public string UUID;

		public override bool ShowInfoButtonAfterContentLoad => false;

		IItem IRewardItemViewData.Item => null;

		AssetReferenceT<Sprite> IRewardViewPresentable.SpriteReference => null;

		public override bool ShouldHideIButton => false;

		public override bool HasCollectScreen => false;

		public BoosterMultiple(IRewardType rewardType, string itemId, RewardAmount rewardAmount, RewardDestination destination, string uuid = null, bool autoOpenTooltipEnabled = false)
			: base((IRewardType)null, (RewardAmount)null, (RewardDestination)null)
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

		public bool TryGetTooltipTriggerData(out TriggersData triggersData)
		{
			triggersData = null;
			return false;
		}

		public override string GetTopText(RewardDisplayTextData rewardDisplayTextData, RewardDisplayFlag rewardPresentationViewFlags)
		{
			return null;
		}

		public override string GetBottomText(RewardDisplayTextData rewardDisplayTextData)
		{
			return null;
		}
	}
}
