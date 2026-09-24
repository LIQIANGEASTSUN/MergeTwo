using System;
using MergeEngine.Configuration;
using MergeEngine.Configuration.Definitions;
using MergeEngine.Configuration.Definitions.WeakReferences.References;
using Merger.Rewards.Interfaces;
using Newtonsoft.Json;
using Tools.Attributes;

namespace GameCore.Configuration.Definitions
{
	[Serializable]
	public abstract class ItemMultipleBase<TItemClass, TItemReference> : BaseReward, IItemMultipleBase where TItemClass : class, IItem where TItemReference : IItemWeakReference
	{
		[RequiredWeakReference]
		[JsonProperty("itemReference")]
		[ConstructorParameter(1)]
		public TItemReference ItemReference;

		[JsonIgnore]
		public TItemClass Item => null;

		public override int Priority => 0;

		public override string Name => null;

		[JsonIgnore]
		public override string ConfigurationId => null;

		[JsonProperty("itemId")]
		public string ItemId
		{
			get
			{
				return null;
			}
			set
			{
			}
		}

		public override string GetExtraLogData()
		{
			return null;
		}

		public ItemMultipleBase(IRewardType type, RewardAmount rewardAmount, RewardDestination destination)
			: base(null, null, null)
		{
		}

		public ItemMultipleBase(TItemReference itemReference, IRewardType type, RewardAmount rewardAmount, RewardDestination destination)
			: base(null, null, null)
		{
		}
	}
}
