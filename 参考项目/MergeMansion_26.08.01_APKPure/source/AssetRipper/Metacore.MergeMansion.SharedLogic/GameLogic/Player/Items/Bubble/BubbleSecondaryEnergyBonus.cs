using System;
using Metaplay.Core.Model;

namespace GameLogic.Player.Items.Bubble
{
	[MetaSerializableDerived(2)]
	[Obsolete("Replaced by BubbleAuxEnergyBonus.")]
	public class BubbleSecondaryEnergyBonus : IBubbleBonus
	{
		[MetaMember(1, MetaMemberFlags.None)]
		public int SecondaryEnergy { get; set; }

		public BubbleSecondaryEnergyBonus()
		{
		}

		public BubbleSecondaryEnergyBonus(int secondaryEnergy)
		{
		}
	}
}
