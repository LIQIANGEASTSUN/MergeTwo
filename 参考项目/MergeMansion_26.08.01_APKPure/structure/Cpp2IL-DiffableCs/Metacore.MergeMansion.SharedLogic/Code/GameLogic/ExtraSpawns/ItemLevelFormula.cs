namespace Code.GameLogic.ExtraSpawns;

[MetaSerializableDerived(5)]
public class ItemLevelFormula : IExtraSpawnFormula
{

	public ItemLevelFormula() { }

	private static F32 Calculate(F32 baseAmount, Option<IItemDefinition> itemOption) { }

	public override F32 Calculate(IPlayer player, F32 baseAmount, IExtraSpawnTrigger trigger, Option<ExtraSpawnBoardData> boardDataOption, TId id) { }

}

