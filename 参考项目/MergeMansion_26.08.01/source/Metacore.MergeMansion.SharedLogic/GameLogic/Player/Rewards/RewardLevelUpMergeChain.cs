using GameLogic.Config;
using GameLogic.MergeChains;
using Metaplay.Core.Config;
using Metaplay.Core.Forms;
using Metaplay.Core.Model;
using Metaplay.Core.Serialization;

namespace GameLogic.Player.Rewards
{
	[MetaFormDeprecated]
	[MetaSerializableDerived(20)]
	public class RewardLevelUpMergeChain : PlayerReward
	{
		[MetaMember(1, MetaMemberFlags.None)]
		[MetaOnMemberDeserializationFailure("FixMergeChainRef")]
		public MergeChainDef MergeChainDef { get; set; }

		public IMergeChainDefinition GetMergeChain(IPlayer player)
		{
			return null;
		}

		public RewardLevelUpMergeChain()
		{
		}

		public RewardLevelUpMergeChain(MergeChainId mergeChainId)
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

		public static MergeChainDef FixMergeChainRef(MetaMemberDeserializationFailureParams failureParams)
		{
			return null;
		}
	}
}
