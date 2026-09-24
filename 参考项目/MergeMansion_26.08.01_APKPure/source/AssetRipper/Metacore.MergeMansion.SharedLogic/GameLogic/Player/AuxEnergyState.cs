using Metaplay.Core;
using Metaplay.Core.Model;

namespace GameLogic.Player
{
	[MetaSerializable]
	[MetaBlockedMembers(new int[] { 3 })]
	public class AuxEnergyState
	{
		[MetaMember(1, MetaMemberFlags.None)]
		public long Amount { get; set; }

		[MetaMember(2, MetaMemberFlags.None)]
		public MetaTime? NextRestoreTime { get; set; }

		public AuxEnergyState()
		{
		}

		public AuxEnergyState(SecondaryEnergyState secondaryEnergyState)
		{
		}

		public void Refresh(IPlayer player, EnergyType energyType)
		{
		}

		public void AddEnergyAllowAboveMax(IPlayer player, EnergyType energyType, long addAmount)
		{
		}

		public void ConsumeEnergy(IPlayer player, EnergyType energyType, long consumeAmount)
		{
		}
	}
}
