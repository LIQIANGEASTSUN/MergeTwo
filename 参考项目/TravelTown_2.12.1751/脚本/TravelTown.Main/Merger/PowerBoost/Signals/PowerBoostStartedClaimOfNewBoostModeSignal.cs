using System;
using Merger.Game.Views.Popups.Components;

namespace Merger.PowerBoost.Signals
{
	public class PowerBoostStartedClaimOfNewBoostModeSignal
	{
		public string RewardId { get; }

		public RewardPositionsMap RewardPositionsMap { get; }

		public Action Completion { get; }

		public string TransactionId { get; }

		public PowerBoostStartedClaimOfNewBoostModeSignal(string rewardId, RewardPositionsMap rewardPositionsMap, Action completion, string transactionId)
		{
		}
	}
}
