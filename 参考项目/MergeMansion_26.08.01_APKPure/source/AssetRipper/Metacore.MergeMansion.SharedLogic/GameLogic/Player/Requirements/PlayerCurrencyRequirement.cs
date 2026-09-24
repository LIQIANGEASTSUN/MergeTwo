using GameLogic.Config;
using Metaplay.Core.Config;
using Metaplay.Core.Model;

namespace GameLogic.Player.Requirements
{
	[MetaSerializableDerived(22)]
	public class PlayerCurrencyRequirement : PlayerRequirement
	{
		[MetaMember(1, MetaMemberFlags.None)]
		public Currencies Currency { get; set; }

		[MetaMember(2, MetaMemberFlags.None)]
		public long? Min { get; set; }

		[MetaMember(3, MetaMemberFlags.None)]
		public long? Max { get; set; }

		public PlayerCurrencyRequirement()
		{
		}

		public PlayerCurrencyRequirement(Currencies currency, long? min, long? max)
		{
		}

		public override void Validate(IMergeMansionGameConfig configuration, GameConfigValidationResult variantEntries)
		{
		}

		public override bool Matches(IPlayer playerModel)
		{
			return false;
		}

		public override void ForceComplete(IPlayer playerModel)
		{
		}
	}
}
