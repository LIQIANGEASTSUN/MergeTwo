using System;
using MergeEngine.Configuration.Definitions;
using Merger.Game.Views.Components.Orders.Rewards;
using Merger.Rewards.Enums;
using Merger.Rewards.Interfaces;
using Merger.Rewards.Interfaces.Datas;
using Merger.Rewards.Models.Datas;
using Newtonsoft.Json;
using UnityEngine;
using UnityEngine.AddressableAssets;

namespace GameCore.Configuration.Definitions
{
	public abstract class BaseReward : IRewardViewData, IRewardTextRepresented, IRewardTooltipData, IEquatable<IRewardViewData>, IRewardViewPresentable, IRewardData, IPrioritizedOrderReward
	{
		[JsonIgnore]
		[NonSerialized]
		public string _nameForDisplay;

		[JsonProperty("isFeatured")]
		public bool IsFeatured { get; set; }

		[JsonIgnore]
		public RewardAmount RewardAmount { get; set; }

		[JsonProperty("amount")]
		public int Amount
		{
			get
			{
				return 0;
			}
			set
			{
			}
		}

		[JsonIgnore]
		public virtual string ConfigurationId { get; }

		[JsonIgnore]
		public virtual string Name => null;

		[JsonIgnore]
		public bool AutoOpenTooltip { get; set; }

		[JsonIgnore]
		public bool AutoOpenTooltipEnabled { get; set; }

		[JsonIgnore]
		public bool HideAmountText { get; set; }

		[JsonIgnore]
		public bool ShouldBeHidden { get; set; }

		[JsonIgnore]
		public abstract bool HasCollectScreen { get; }

		public RewardDestination Destination { get; }

		public RewardSource RewardSource { get; set; }

		public IRewardType RewardType { get; }

		public string Type => null;

		public virtual AssetReferenceT<Sprite> SpriteReference { get; }

		public abstract bool ShouldHideIButton { get; }

		public abstract bool ShowInfoButtonAfterContentLoad { get; }

		public virtual RewardViewPresentationType PresentationType => default(RewardViewPresentationType);

		public virtual int Priority { get; }

		public BaseReward(IRewardType rewardType, RewardAmount rewardAmount, RewardDestination destination)
		{
		}

		public virtual string GetTopText(RewardDisplayTextData rewardDisplayTextData, RewardDisplayFlag viewFlags)
		{
			return null;
		}

		public virtual string GetBottomText(RewardDisplayTextData rewardDisplayTextData)
		{
			return null;
		}

		public string GetLogDebug()
		{
			return null;
		}

		public virtual string GetExtraLogData()
		{
			return null;
		}

		public abstract IRewardViewData Clone();

		public virtual bool Equals(IRewardViewData other)
		{
			return false;
		}

		public override bool Equals(object obj)
		{
			return false;
		}
	}
}
