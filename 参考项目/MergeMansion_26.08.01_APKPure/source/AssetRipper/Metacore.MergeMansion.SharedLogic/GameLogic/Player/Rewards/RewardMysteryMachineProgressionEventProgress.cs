using Code.GameLogic.GameEvents;
using GameLogic.Config;
using GameLogic.Player.Items;
using Metaplay.Core.Config;
using Metaplay.Core.Forms;
using Metaplay.Core.Model;

namespace GameLogic.Player.Rewards
{
	[MetaSerializableDerived(31)]
	public class RewardMysteryMachineProgressionEventProgress : PlayerReward
	{
		public static readonly string PoolTag;

		public static readonly string SkinName;

		[MetaFormFieldCustomValidator(typeof(RewardAmountValidator<int>))]
		[MetaMember(1, MetaMemberFlags.None)]
		public int Amount { get; set; }

		[MetaMember(2, MetaMemberFlags.None)]
		public int ChainItemIndex { get; set; }

		public RewardMysteryMachineProgressionEventProgress()
		{
		}

		public RewardMysteryMachineProgressionEventProgress(int amount, int chainItemIndex, CurrencySource source)
		{
		}

		public override void Consume(IPlayer player, AnalyticsContext context, IRewardContext rewardContext)
		{
		}

		public override void Validate(IMergeMansionGameConfig configuration, GameConfigValidationResult variantEntries)
		{
		}

		public IItemDefinition GetVisualItem(IPlayer player)
		{
			return null;
		}

		public static ProgressionEventModel GetActiveProgressionEvent(IPlayer player)
		{
			return null;
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
