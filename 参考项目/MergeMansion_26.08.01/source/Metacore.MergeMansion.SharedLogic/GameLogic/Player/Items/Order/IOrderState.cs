using System.Collections.Generic;
using GameLogic.Player.Items.Production;
using GameLogic.Player.Items.Sink;

namespace GameLogic.Player.Items.Order
{
	public interface IOrderState : ISinkState, IItemProducer
	{
		IEnumerable<OrderStateReward> CompletionItems { get; }

		int ClaimableRewardsCount { get; }

		int ItemsPerActivation { get; }

		bool IsActivable();

		bool IsSpawnable();

		void IncrementClaimedRewardsCount();

		bool OrderCompleted();
	}
}
