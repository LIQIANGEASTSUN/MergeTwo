namespace GameLogic.Player.Items.Collectable;

public interface ICollectableFeatures
{

	public bool Collectable
	{
		 get { } //Length: 0
	}

	public ICollectAction CollectAction
	{
		 get { } //Length: 0
	}

	public bool CollectOnSpawn
	{
		 get { } //Length: 0
	}

	public bool ConfirmCollectBelowMergeChainLevel
	{
		 get { } //Length: 0
	}

	public bool get_Collectable() { }

	public ICollectAction get_CollectAction() { }

	public bool get_CollectOnSpawn() { }

	public bool get_ConfirmCollectBelowMergeChainLevel() { }

}

