using Code.GameLogic.GameEvents;
using GameLogic.Config;
using Metacore.MergeMansion.Common.Options;

namespace GameLogic.Player.Rewards
{
	public interface IMutablePlayerReward : IPlayerReward
	{
		bool MayMutateAtRuntime(IMergeMansionGameConfig config);

		IPlayerReward GetMutatedReward(IPlayer player, Option<RewardSourceContext> rewardSourceContextOption);
	}
}
