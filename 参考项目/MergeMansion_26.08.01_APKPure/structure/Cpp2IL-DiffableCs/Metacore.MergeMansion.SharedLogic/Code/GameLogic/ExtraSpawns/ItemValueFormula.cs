namespace Code.GameLogic.ExtraSpawns;

[MetaSerializableDerived(4)]
public class ItemValueFormula : IExtraSpawnFormula
{

	public ItemValueFormula() { }

	private static F32 Calculate(IPlayer player, F32 baseAmount, Option<IItemDefinition> itemOption, TId id) { }

	public override F32 Calculate(IPlayer player, F32 baseAmount, IExtraSpawnTrigger trigger, Option<ExtraSpawnBoardData> boardDataOption, TId id) { }

}

