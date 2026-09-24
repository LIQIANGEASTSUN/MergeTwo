namespace Code.GameLogic.ExtraSpawns;

[MetaSerializableDerived(2)]
public class BubbleCostMultiplierFormula : IExtraSpawnFormula
{

	public BubbleCostMultiplierFormula() { }

	public static F32 Calculate(F32 baseAmount, int bubbleCost) { }

	public override F32 Calculate(IPlayer player, F32 baseAmount, IExtraSpawnTrigger trigger, Option<ExtraSpawnBoardData> boardDataOption, TId id) { }

}

