namespace GameLogic.Player.Items.Collectable;

public interface ICollectEventCurrencyAction : ICollectAction
{

	public int Amount
	{
		 get { } //Length: 0
	}

	public EventCurrencyId EventCurrencyId
	{
		 get { } //Length: 0
	}

	public int get_Amount() { }

	public EventCurrencyId get_EventCurrencyId() { }

}

