namespace GameLogic.Player.Items.Sinkable;

public interface ISinkableFeatures
{

	public bool IsSinkable
	{
		 get { } //Length: 0
	}

	public List<ISinkInAction> SinkInActions
	{
		 get { } //Length: 0
	}

	public bool get_IsSinkable() { }

	public List<ISinkInAction> get_SinkInActions() { }

}

