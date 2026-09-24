namespace GameLogic.Player.Items.Collectable;

public interface ICollectEventProgressAction : ICollectAction
{

	public int ProgressGiven
	{
		 get { } //Length: 0
	}

	public int get_ProgressGiven() { }

}

