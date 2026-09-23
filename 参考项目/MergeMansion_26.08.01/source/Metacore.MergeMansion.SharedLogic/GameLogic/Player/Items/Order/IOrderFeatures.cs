using GameLogic.Merge;
using GameLogic.Player.Board.Placement;
using GameLogic.Player.Items.Production;
using GameLogic.Random;

namespace GameLogic.Player.Items.Order
{
	public interface IOrderFeatures
	{
		bool IsOrder { get; }

		bool HideRequirementsPhaseProgressBar { get; }

		IPlacement RewardsPlacement { get; }

		ItemVisibility RewardsItemVisibility { get; }

		IItemProducer DecayProducer { get; }

		OrderParentState CreateState(IGenerationContext context);

		IOrderState GetNextOrder(OrderParentState currentState, IGenerationContext context);
	}
}
