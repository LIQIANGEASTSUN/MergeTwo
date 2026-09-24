namespace GameLogic.Player.Items.Collectable;

public interface ICollectCurrencyAction : ICollectAction
{

	public ICalculateCollectValue ValueCalculator
	{
		 get { } //Length: 0
	}

	public ICalculateCollectValue get_ValueCalculator() { }

}

