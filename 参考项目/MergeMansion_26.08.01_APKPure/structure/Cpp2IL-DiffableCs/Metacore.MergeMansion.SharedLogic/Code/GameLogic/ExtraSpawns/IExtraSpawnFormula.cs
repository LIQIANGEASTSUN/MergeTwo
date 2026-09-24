namespace Code.GameLogic.ExtraSpawns;

[MetaSerializable]
public interface IExtraSpawnFormula
{

	public F32 Calculate(IPlayer player, F32 baseAmount, IExtraSpawnTrigger trigger, Option<ExtraSpawnBoardData> boardDataOption, TId id) { }

	public static IExtraSpawnFormula From(ExtraSpawnTriggerType triggerType, ExtraSpawnFormulaType formulaType) { }

}

