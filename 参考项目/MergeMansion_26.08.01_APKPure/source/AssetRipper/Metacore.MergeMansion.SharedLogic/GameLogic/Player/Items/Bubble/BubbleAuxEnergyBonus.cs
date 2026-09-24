using Metaplay.Core.Model;

namespace GameLogic.Player.Items.Bubble
{
	[MetaSerializableDerived(3)]
	public class BubbleAuxEnergyBonus : IBubbleBonus
	{
		[MetaMember(1, MetaMemberFlags.None)]
		public EnergyType EnergyType { get; set; }

		[MetaMember(2, MetaMemberFlags.None)]
		public int Amount { get; set; }

		[MetaMember(3, MetaMemberFlags.None)]
		public int Chance { get; set; }

		public BubbleAuxEnergyBonus()
		{
		}

		public BubbleAuxEnergyBonus(EnergyType energyType, int amount)
		{
		}

		public void SetChance(int value)
		{
		}
	}
}
