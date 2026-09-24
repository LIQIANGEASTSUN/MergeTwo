namespace GameLogic.Player.Items.Collectable;

public interface ICollectibleBoardEventCollectAction : IProgressCollectAction, ICollectAction
{

	public bool LevelUpMergeChain
	{
		 get { } //Length: 0
	}

	public bool get_LevelUpMergeChain() { }

}

