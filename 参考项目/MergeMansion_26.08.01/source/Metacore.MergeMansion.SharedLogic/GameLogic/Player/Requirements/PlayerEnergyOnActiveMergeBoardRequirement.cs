using GameLogic.Config;
using Metaplay.Core.Config;
using Metaplay.Core.Model;

namespace GameLogic.Player.Requirements
{
	[MetaSerializableDerived(59)]
	public class PlayerEnergyOnActiveMergeBoardRequirement : PlayerRequirement
	{
		[MetaMember(1, MetaMemberFlags.None)]
		public long MinAmount { get; set; }

		public PlayerEnergyOnActiveMergeBoardRequirement()
		{
		}

		public PlayerEnergyOnActiveMergeBoardRequirement(long minAmount)
		{
		}

		public override void Validate(IMergeMansionGameConfig configuration, GameConfigValidationResult variantEntries)
		{
		}

		public override bool Matches(IPlayer player)
		{
			return false;
		}

		public override void ForceComplete(IPlayer player)
		{
		}

		public EnergyType GetEnergyType(IPlayer player)
		{
			return default(EnergyType);
		}
	}
}
