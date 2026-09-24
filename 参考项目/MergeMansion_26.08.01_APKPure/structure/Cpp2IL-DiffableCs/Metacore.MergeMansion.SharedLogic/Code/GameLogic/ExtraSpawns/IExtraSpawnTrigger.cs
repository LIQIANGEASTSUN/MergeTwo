namespace Code.GameLogic.ExtraSpawns;

[MetaSerializable]
public interface IExtraSpawnTrigger
{

	public ExtraSpawnTriggerType Type
	{
		 get { } //Length: 0
	}

	public static IExtraSpawnTrigger From(ExtraSpawnTriggerType type, string args) { }

	public ExtraSpawnTriggerType get_Type() { }

	public Option<IItemDefinition> GetItem(IPlayer player, Option<ExtraSpawnBoardData> boardDataOption) { }

	public bool Matches(IExtraSpawnTrigger other) { }

	public CurrencySource ToCurrencySource() { }

	public ItemActSource ToItemActSource() { }

}

