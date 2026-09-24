using Metaplay.Core.Model;

namespace GameLogic.Player.Items.Order
{
	[MetaSerializable]
	public class OrderParentState
	{
		[MetaMember(1, MetaMemberFlags.None)]
		public IOrderState CurrentOrder { get; set; }

		[MetaMember(2, MetaMemberFlags.None)]
		public int CurrentOrderIndex { get; set; }

		public OrderParentState()
		{
		}

		public OrderParentState(IOrderState currentOrder)
		{
		}

		public void SetNewOrder(IOrderState newOrder)
		{
		}
	}
}
