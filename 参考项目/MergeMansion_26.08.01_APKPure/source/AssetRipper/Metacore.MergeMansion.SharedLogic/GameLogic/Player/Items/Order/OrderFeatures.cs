using GameLogic.Merge;
using GameLogic.Player.Board.Placement;
using GameLogic.Player.Items.Production;
using GameLogic.Random;
using Metaplay.Core.Model;

namespace GameLogic.Player.Items.Order
{
	[MetaSerializable]
	public class OrderFeatures : IOrderFeatures
	{
		public static readonly OrderFeatures NoOrder;

		[MetaMember(1, MetaMemberFlags.None)]
		public bool IsOrder { get; set; }

		[MetaMember(2, MetaMemberFlags.None)]
		public IOrderProducer OrderProducer { get; set; }

		[MetaMember(3, MetaMemberFlags.None)]
		public bool HideRequirementsPhaseProgressBar { get; set; }

		[MetaMember(4, MetaMemberFlags.None)]
		public IPlacement RewardsPlacement { get; set; }

		[MetaMember(5, MetaMemberFlags.None)]
		public ItemVisibility RewardsItemVisibility { get; set; }

		[MetaMember(6, MetaMemberFlags.None)]
		public IItemProducer DecayProducer { get; set; }

		[MetaMember(7, MetaMemberFlags.None)]
		public OrderItemDecayLogic DecayLogic { get; set; }

		public OrderFeatures()
		{
		}

		public OrderFeatures(bool isOrder, bool hideRequirementsPhaseProgressBar, IItemProducer decayProducer, IOrderSpawner orderProducer, OrderItemDecayLogic decayLogic, IPlacement rewardsPlacement)
		{
		}

		public OrderParentState CreateState(IGenerationContext context)
		{
			return null;
		}

		public IOrderState GetNextOrder(OrderParentState currentState, IGenerationContext context)
		{
			return null;
		}
	}
}
