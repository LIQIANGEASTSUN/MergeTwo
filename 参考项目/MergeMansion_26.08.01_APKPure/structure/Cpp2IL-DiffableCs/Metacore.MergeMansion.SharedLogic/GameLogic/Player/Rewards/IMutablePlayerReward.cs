namespace GameLogic.Player.Rewards;

public interface IMutablePlayerReward : IPlayerReward
{

	public IPlayerReward GetMutatedReward(IPlayer player, Option<RewardSourceContext> rewardSourceContextOption) { }

	public bool MayMutateAtRuntime(IMergeMansionGameConfig config) { }

}

