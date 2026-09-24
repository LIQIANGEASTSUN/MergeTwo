using GameLogic.Config;
using Metaplay.Core.Config;
using Metaplay.Core.Forms;
using Metaplay.Core.Model;

namespace GameLogic.Player.Rewards
{
	[MetaSerializableDerived(30)]
	public class RewardMysteryMachineCurrency : PlayerReward, ICurrencyReward
	{
		[MetaMember(1, MetaMemberFlags.None)]
		public Currencies Currency { get; set; }

		[MetaFormFieldCustomValidator(typeof(RewardAmountValidator<int>))]
		[MetaMember(2, MetaMemberFlags.None)]
		public int Amount { get; set; }

		[MetaMember(3, MetaMemberFlags.None)]
		public string PoolTag { get; set; }

		[MetaMember(4, MetaMemberFlags.None)]
		public string SkinName { get; set; }

		[MetaMember(5, MetaMemberFlags.None)]
		public int DisplayAmount { get; set; }

		public RewardMysteryMachineCurrency()
		{
		}

		public RewardMysteryMachineCurrency(Currencies currency, int amount, string poolTag, string skinName, CurrencySource source, int displayAmount)
		{
		}

		public override void Consume(IPlayer player, AnalyticsContext context, IRewardContext rewardContext)
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
