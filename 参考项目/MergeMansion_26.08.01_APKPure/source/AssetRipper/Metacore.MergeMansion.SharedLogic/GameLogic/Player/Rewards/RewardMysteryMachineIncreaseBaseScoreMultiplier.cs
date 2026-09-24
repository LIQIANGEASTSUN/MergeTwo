using GameLogic.Config;
using Metaplay.Core.Config;
using Metaplay.Core.Forms;
using Metaplay.Core.Math;
using Metaplay.Core.Model;

namespace GameLogic.Player.Rewards
{
	[MetaSerializableDerived(32)]
	public class RewardMysteryMachineIncreaseBaseScoreMultiplier : PlayerReward
	{
		[MetaFormFieldCustomValidator(typeof(RewardAmountValidator<F64>))]
		[MetaMember(1, MetaMemberFlags.None)]
		public F64 ScoreMultiplierIncrease { get; set; }

		public RewardMysteryMachineIncreaseBaseScoreMultiplier()
		{
		}

		public RewardMysteryMachineIncreaseBaseScoreMultiplier(F64 scoreMultiplierIncrease)
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
