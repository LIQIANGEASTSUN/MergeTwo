namespace GameLogic.Player.Items.Production;

public interface IItemOdds
{

	public int ConfigKey
	{
		 get { } //Length: 0
	}

	public int Weight
	{
		 get { } //Length: 0
	}

	public int get_ConfigKey() { }

	public int get_Weight() { }

	public IItemDefinition GetItem(IMergeMansionGameConfig config) { }

}

