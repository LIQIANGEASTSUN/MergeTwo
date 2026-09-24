using Code.GameLogic.Config;
using GameLogic.Config;
using GameLogic.Player.Rewards;
using Metaplay.Core.Config;
using Metaplay.Core.Model;
using Metaplay.Core.Serialization;

namespace GameLogic.Fallbacks
{
	[MetaSerializable]
	public class FallbackPlayerRewardInfo : IGameConfigData<FallbackPlayerRewardId>, IGameConfigData, IHasGameConfigKey<FallbackPlayerRewardId>, IValidatable
	{
		public const string SHEET_NAME = "FallbackPlayerRewards";

		[MetaMember(1, MetaMemberFlags.None)]
		public FallbackPlayerRewardId ConfigKey { get; set; }

		[MetaMember(2, MetaMemberFlags.None)]
		[MetaOnMemberDeserializationFailure("FixPlayerReward")]
		public PlayerReward Reward { get; set; }

		[MetaSerializerOmitNull]
		[MetaMember(999, MetaMemberFlags.None)]
		public int ExperimentPriority { get; set; }

		public FallbackPlayerRewardInfo()
		{
		}

		public FallbackPlayerRewardInfo(FallbackPlayerRewardId fallbackPlayerRewardId, PlayerReward reward, int experimentPriority)
		{
		}

		public void Validate(IMergeMansionGameConfig configuration, GameConfigValidationResult variantEntries)
		{
		}

		public static PlayerReward FixPlayerReward(MetaMemberDeserializationFailureParams failureParams)
		{
			return null;
		}
	}
}
