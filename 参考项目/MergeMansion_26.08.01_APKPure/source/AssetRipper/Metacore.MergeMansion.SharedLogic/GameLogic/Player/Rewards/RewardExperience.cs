using GameLogic.Config;
using Metaplay.Core.Config;
using Metaplay.Core.Model;
using Newtonsoft.Json;

namespace GameLogic.Player.Rewards
{
	[MetaSerializableDerived(2)]
	[MetaBlockedMembers(new int[] { 2 })]
	public class RewardExperience : PlayerReward, ICurrencyReward
	{
		[JsonIgnore]
		public Currencies Currency => default(Currencies);

		[MetaMember(1, MetaMemberFlags.None)]
		public int Amount { get; set; }

		public RewardExperience()
		{
		}

		public RewardExperience(int amount, CurrencySource currencySource)
		{
		}

		public override void Consume(IPlayer playerModel, AnalyticsContext context, IRewardContext eventRewardContext)
		{
		}

		public override void Validate(IMergeMansionGameConfig configuration, GameConfigValidationResult variantEntries)
		{
		}

		public override string Name(IPlayer player)
		{
			return null;
		}

		public override string TypeString()
		{
			return null;
		}

		public override string ToString()
		{
			return null;
		}
	}
}
