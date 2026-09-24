namespace GameLogic.Player.Items.Collectable;

[MetaSerializable]
public interface IProgressCollectAction : ICollectAction
{

	public int Progress
	{
		 get { } //Length: 0
	}

	public int get_Progress() { }

}

