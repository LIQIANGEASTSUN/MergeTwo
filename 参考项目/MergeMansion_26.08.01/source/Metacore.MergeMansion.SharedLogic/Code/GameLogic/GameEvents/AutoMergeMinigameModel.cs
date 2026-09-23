using System;
using System.Collections.Generic;
using GameLogic.Player;
using GameLogic.Player.Rewards;
using Metaplay.Core.Model;

namespace Code.GameLogic.GameEvents
{
	[MetaSerializableDerived(3)]
	public class AutoMergeMinigameModel : ICoreSupportEventMinigameModel
	{
		public CoreSupportEventMinigameId MinigameId { get; set; }

		[Obsolete("Not supported anymore. Use AutoMergeFeatureModel.UserToggleEnabled instead. Used only for migration purposes.")]
		[MetaMember(1, MetaMemberFlags.None)]
		public bool IsAutoMergeEnabled_DEPRECATED { get; set; }

		public AutoMergeMinigameModel()
		{
		}

		public AutoMergeMinigameModel(CoreSupportEventMinigameId minigameId)
		{
		}

		public List<(ICoreSupportEventMinigameRewardId, List<IPlayerReward>)> GetClaimableRewards(IPlayer player)
		{
			return null;
		}

		public bool CanClaimReward(IPlayer player, ICoreSupportEventMinigameRewardId id)
		{
			return false;
		}

		public void ClaimReward(IPlayer player, ICoreSupportEventMinigameRewardId id)
		{
		}

		public void OnGameTick(IPlayer player)
		{
		}

		public void OnInactiveGameTick(IPlayer player, ICoreSupportEventModel eventModel, bool inReview)
		{
		}

		public void OnTokenAmountChanged(IPlayer player, long amount, CurrencySource source)
		{
		}

		public bool CanFinalizeEventEarly(IPlayer player)
		{
			return false;
		}

		public void Finalize(IPlayer player)
		{
		}

		public void SetAutoMergeEnabled(bool enabled)
		{
		}
	}
}
