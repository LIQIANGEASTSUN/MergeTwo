using Metaplay.Core.Model;

namespace GameLogic.Player.Items.Order
{
	[MetaSerializable]
	public class OrderStateReward
	{
		[MetaMember(1, MetaMemberFlags.None)]
		public ItemDefinition Item { get; set; }

		[MetaMember(2, MetaMemberFlags.None)]
		public int Amount { get; set; }

		[MetaMember(3, MetaMemberFlags.None)]
		public int Claimed { get; set; }

		public OrderStateReward()
		{
		}

		public OrderStateReward(ItemDefinition item, int amount, int claimed)
		{
		}

		public void IncrementClaimed()
		{
		}
	}
}
