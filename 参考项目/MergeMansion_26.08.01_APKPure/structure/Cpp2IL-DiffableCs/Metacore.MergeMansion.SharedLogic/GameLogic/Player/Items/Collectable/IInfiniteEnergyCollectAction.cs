namespace GameLogic.Player.Items.Collectable;

public interface IInfiniteEnergyCollectAction : ICollectAction
{

	public double DurationMinutes
	{
		 get { } //Length: 0
	}

	public EnergyType EnergyType
	{
		 get { } //Length: 0
	}

	public double get_DurationMinutes() { }

	public EnergyType get_EnergyType() { }

}

