using System;
using System.Collections.Generic;
using GameCore.Configuration.Definitions;
using MergeEngine.Configuration.Definitions.WeakReferences.References;
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
	public class ItemMultiple : ItemMultipleBase<IMergeItem, MergeItemWeakReference>, IRewardItemViewData, IRewardViewData, IRewardTextRepresented, IRewardTooltipData, IEquatable<IRewardViewData>, IRewardViewPresentable, IRewardData, IPrioritizedOrderReward
	{
		[JsonIgnore]
		public HashSet<string> RewardQueueUuids { get; set; }

		AssetReferenceT<Sprite> IRewardViewPresentable.SpriteReference => null;

		public override bool ShouldHideIButton => false;

		public override bool HasCollectScreen => false;

		public override bool ShowInfoButtonAfterContentLoad => false;

		IItem IRewardItemViewData.Item => null;

		public override bool Equals(IRewardViewData other)
		{
			return false;
		}

		public bool CompareItems(IRewardViewData other)
		{
			return false;
		}

		public ItemMultiple()
			: base((IRewardType)null, (RewardAmount)null, (RewardDestination)null)
		{
		}

		public ItemMultiple(string itemId, int amount, RewardDestination destination)
			: base((IRewardType)null, (RewardAmount)null, (RewardDestination)null)
		{
		}

		public ItemMultiple(MergeItemWeakReference itemReference, int amount)
			: base((IRewardType)null, (RewardAmount)null, (RewardDestination)null)
		{
		}

		public ItemMultiple(string itemId, RewardAmount rewardAmount)
			: base((IRewardType)null, (RewardAmount)null, (RewardDestination)null)
		{
		}

		public ItemMultiple(MergeItemWeakReference itemReference, RewardAmount rewardAmount, RewardDestination destination, RewardSource rewardSource)
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

		public override string GetBottomText(RewardDisplayTextData rewardDisplayTextData)
		{
			return null;
		}
	}
}
