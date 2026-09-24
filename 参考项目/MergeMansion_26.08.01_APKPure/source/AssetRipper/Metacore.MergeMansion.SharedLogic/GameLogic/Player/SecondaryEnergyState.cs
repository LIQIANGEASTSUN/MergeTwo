using System;
using GameLogic.Config.Types;
using Metaplay.Core;
using Metaplay.Core.Model;

namespace GameLogic.Player
{
	[MetaSerializable]
	[Obsolete("Replaced by AuxEnergyState. Required for migration.")]
	public class SecondaryEnergyState
	{
		[MetaMember(1, MetaMemberFlags.None)]
		public long Amount { get; set; }

		[MetaMember(2, MetaMemberFlags.None)]
		public MetaTime? NextRestoreTime { get; set; }

		public void Refresh(IPlayer player)
		{
		}

		public void Refresh(MetacoreTime currentTime, MetacoreDuration? unitRestoreDurationMaybe, long maxAmount)
		{
		}

		public void AddEnergyAllowAboveMax(IPlayer player, long addAmount)
		{
		}

		public void ConsumeEnergy(IPlayer player, long consumeAmount)
		{
		}
	}
}
