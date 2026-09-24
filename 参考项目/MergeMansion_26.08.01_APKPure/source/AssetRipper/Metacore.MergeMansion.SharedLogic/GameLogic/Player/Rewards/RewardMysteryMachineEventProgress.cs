using System.Runtime.Serialization;
using Code.GameLogic.GameEvents;
using GameLogic.Config;
using Metaplay.Core;
using Metaplay.Core.Config;
using Metaplay.Core.Forms;
using Metaplay.Core.Model;

namespace GameLogic.Player.Rewards
{
	[MetaSerializableDerived(29)]
	public class RewardMysteryMachineEventProgress : PlayerReward
	{
		[MetaMember(1, MetaMemberFlags.None)]
		public MetaRef<MysteryMachineEventInfo> EventInfoRef { get; set; }

		[MetaFormFieldCustomValidator(typeof(RewardAmountValidator<int>))]
		[MetaMember(2, MetaMemberFlags.None)]
		public int Amount { get; set; }

		[IgnoreDataMember]
		public MysteryMachineEventId EventId => null;

		public RewardMysteryMachineEventProgress()
		{
		}

		public RewardMysteryMachineEventProgress(MysteryMachineEventId eventId, int amount, CurrencySource currencySource)
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
	}
}
