namespace GameLogic.Player.Items.Collectable;

public interface IShortLeaderboardEventCollectAction : IProgressCollectAction, ICollectAction
{

	public bool LevelUpMergeChain
	{
		 get { } //Length: 0
	}

	public bool get_LevelUpMergeChain() { }

}

